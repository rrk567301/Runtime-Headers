@interface VSWebServerResponse : NSObject

@property (readonly, nonatomic) struct _CFHTTPServerResponse { } *response;

+ (id)responseToRequest:(id)a0 withCode:(long long)a1 headers:(id)a2 bodyData:(id)a3;
+ (id)responseToRequest:(id)a0 withCode:(long long)a1 headers:(id)a2 bodyStream:(id)a3;

- (id)connection;
- (id)request;
- (void)enqueue;
- (id)description;
- (struct __CFHTTPMessage { } *)message;
- (id)initWithResponse:(struct _CFHTTPServerResponse { } *)a0;

@end
