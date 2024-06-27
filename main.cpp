#include "crow.h"
//#include "crow_all.h"

int main()
{
    crow::SimpleApp app; //define your crow application

    //define your endpoint at the root directory
    CROW_ROUTE(app, "/")([](){
        return "Hello world";
    });

    CROW_ROUTE(app, "/hello/<string>")([](const std::string& name) {
        return "hello, " + name;
    });

    //set the port, set the app to run on multiple threads, and run the app
    app.bindaddr("127.0.0.1").port(18080).multithreaded().run();
}
