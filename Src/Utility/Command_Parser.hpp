#ifndef COMMAND_PARSER_HPP
#define COMMAND_PARSER_HPP

#include <string>
#include <map>
#include "../UTRIP/UTrip.hpp"

#define METHOD_COUNT 3

typedef std::pair<std::string,std::string> argument_value;
typedef std::map<std::string,std::string> arguments;
enum method_index {GET,POST,DELETE};

class Command_Parser {

public:

	Command_Parser(std::string path);
	void get_command(std::string command);

private:

	UTrip* utrip;
	const std::string method[METHOD_COUNT] = {"GET","POST","DELETE"};

	void signup(const arguments& args);
	void login(const arguments& args);
	void logout();
	void add_credit();
	void show_wallet_history();
	void show_hotels();
	void show_hotel_detail();
	//todo filter
	//tod delete filter
	void reserve();
	void show_reserves();
	void cancel_reserve(const arguments& args);
	void show_hotel_ratting();
	void show_hotel_comments();
	void add_comment();
	void add_ratting();

	void get_parser(std::string command_ ,const arguments& args);
	void post_parser(std::string command_ ,const arguments& args);
	void delete_parser(std::string command_ ,const arguments& args);
	void method_check(std::string method_);
	std::string find_arg_val(const arguments& args,std::string arg);
};

#endif