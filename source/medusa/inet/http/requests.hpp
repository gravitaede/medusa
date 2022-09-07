///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2014 $organization$
///
/// This software is provided by the author and contributors ``as is''
/// and any express or implied warranties, including, but not limited to,
/// the implied warranties of merchantability and fitness for a particular
/// purpose are disclaimed. In no event shall the author or contributors
/// be liable for any direct, indirect, incidental, special, exemplary,
/// or consequential damages (including, but not limited to, procurement
/// of substitute goods or services; loss of use, data, or profits; or
/// business interruption) however caused and on any theory of liability,
/// whether in contract, strict liability, or tort (including negligence
/// or otherwise) arising in any way out of the use of this software,
/// even if advised of the possibility of such damage.
///
///   File: requests.hpp
///
/// Author: $author$
///   Date: 11/26/2014
///////////////////////////////////////////////////////////////////////
#ifndef _MEDUSA_INET_HTTP_REQUESTS_HPP
#define _MEDUSA_INET_HTTP_REQUESTS_HPP

#include "medusa/inet/http/request.hpp"

namespace medusa {
namespace inet {
namespace http {

///////////////////////////////////////////////////////////////////////
///
/// GET
///
///////////////////////////////////////////////////////////////////////
namespace GET {
namespace request {
typedef http::request::method method_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS method: public method_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    method(): method_extends(http::request::method::GET) {}
};
typedef http::request::line line_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS line: public line_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    line(const char_t* uri): line_extends
    (http::request::method(http::request::method::GET), uri) {}
};
typedef http::request::message message_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS message: public message_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    message(const char_t* uri): message_extends
    (http::request::line(http::request::method(http::request::method::GET), uri)) {}
};
} // namespace request
} // namespace GET

///////////////////////////////////////////////////////////////////////
///
/// POST
///
///////////////////////////////////////////////////////////////////////
namespace POST {
namespace request {
typedef http::request::method method_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS method: public method_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    method(): method_extends(http::request::method::POST) {}
};
typedef http::request::line line_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS line: public line_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    line(const char_t* uri): line_extends
    (http::request::method(http::request::method::POST), uri) {}
};
typedef http::request::message message_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS message: public message_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    message(const char_t* uri): message_extends
    (http::request::line(http::request::method(http::request::method::POST), uri)) {}
};
} // namespace request
} // namespace POST

///////////////////////////////////////////////////////////////////////
///
/// PUT
///
///////////////////////////////////////////////////////////////////////
namespace PUT {
namespace request {
typedef http::request::method method_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS method: public method_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    method(): method_extends(http::request::method::PUT) {}
};
typedef http::request::line line_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS line: public line_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    line(const char_t* uri): line_extends
    (http::request::method(http::request::method::PUT), uri) {}
};
typedef http::request::message message_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS message: public message_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    message(const char_t* uri): message_extends
    (http::request::line(http::request::method(http::request::method::PUT), uri)) {}
};
} // namespace request
} // namespace PUT

///////////////////////////////////////////////////////////////////////
///
/// DELETE
///
///////////////////////////////////////////////////////////////////////
namespace DELETE {
namespace request {
typedef http::request::method method_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS method: public method_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    method(): method_extends(http::request::method::DELETE) {}
};
typedef http::request::line line_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS line: public line_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    line(const char_t* uri): line_extends
    (http::request::method(http::request::method::DELETE), uri) {}
};
typedef http::request::message message_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS message: public message_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    message(const char_t* uri): message_extends
    (http::request::line(http::request::method(http::request::method::DELETE), uri)) {}
};
} // namespace request
} // namespace DELETE

///////////////////////////////////////////////////////////////////////
///
/// TRACE
///
///////////////////////////////////////////////////////////////////////
namespace TRACE {
namespace request {
typedef http::request::method method_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS method: public method_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    method(): method_extends(http::request::method::TRACE) {}
};
typedef http::request::line line_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS line: public line_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    line(const char_t* uri): line_extends
    (http::request::method(http::request::method::TRACE), uri) {}
};
typedef http::request::message message_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS message: public message_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    message(const char_t* uri): message_extends
    (http::request::line(http::request::method(http::request::method::TRACE), uri)) {}
};
} // namespace request
} // namespace TRACE

///////////////////////////////////////////////////////////////////////
///
/// CONNECT
///
///////////////////////////////////////////////////////////////////////
namespace CONNECT {
namespace request {
typedef http::request::method method_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS method: public method_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    method(): method_extends(http::request::method::CONNECT) {}
};
typedef http::request::line line_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS line: public line_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    line(const char_t* uri): line_extends
    (http::request::method(http::request::method::CONNECT), uri) {}
};
typedef http::request::message message_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS message: public message_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    message(const char_t* uri): message_extends
    (http::request::line(http::request::method(http::request::method::CONNECT), uri)) {}
};
} // namespace request
} // namespace CONNECT

///////////////////////////////////////////////////////////////////////
///
/// OPTIONS
///
///////////////////////////////////////////////////////////////////////
namespace OPTIONS {
namespace request {
typedef http::request::method method_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS method: public method_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    method(): method_extends(http::request::method::OPTIONS) {}
};
typedef http::request::line line_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS line: public line_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    line(const char_t* uri): line_extends
    (http::request::method(http::request::method::OPTIONS), uri) {}
};
typedef http::request::message message_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS message: public message_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    message(const char_t* uri): message_extends
    (http::request::line(http::request::method(http::request::method::OPTIONS), uri)) {}
};
} // namespace request
} // namespace OPTIONS

///////////////////////////////////////////////////////////////////////
///
/// HEAD
///
///////////////////////////////////////////////////////////////////////
namespace HEAD {
namespace request {
typedef http::request::method method_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS method: public method_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    method(): method_extends(http::request::method::HEAD) {}
};
typedef http::request::line line_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS line: public line_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    line(const char_t* uri): line_extends
    (http::request::method(http::request::method::HEAD), uri) {}
};
typedef http::request::message message_extends;
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS message: public message_extends {
public:
    ///////////////////////////////////////////////////////////////////////
    message(const char_t* uri): message_extends
    (http::request::line(http::request::method(http::request::method::HEAD), uri)) {}
};
} // namespace request
} // namespace HEAD

} // namespace http
} // namespace inet
} // namespace medusa

#endif // _MEDUSA_INET_HTTP_REQUESTS_HPP
