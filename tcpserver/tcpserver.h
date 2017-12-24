#ifndef cppbase_tcp_server_h
#define cppbase_tcp_server_h


#include <string>
#include <vector>
#include <boost/asio.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/noncopyable.hpp>

using namespace std;

namespace cppbase
{

class tcp_server : private boost::noncopyable
{
    /*
    * 连接监视器，监视连接到达和连接超时
    */
    class conn_monitor
    {
    };

    /*
    * 会话池
    */
    class session_pool
    {
    };
    
};
}

#endif
