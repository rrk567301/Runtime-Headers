@interface VSWebServerResponse : NSObject

@property (readonly, nonatomic) struct _CFHTTPServerResponse { } *response;

+ (id)responseToRequest:(id)a0 withCode:(long long)a1 headers:(id)a2 bodyData:(id)a3;
+ (id)responseToRequest:(id)a0 withCode:(long long)a1 headers:(id)a2 bodyStream:(id)a3;

- (id)request;
- (void)enqueue;
- (struct __CFHTTPMessage { } *)message;
- (id)description;
- (id)connection;
- (id)initWithResponse:(struct _CFHTTPServerResponse { } *)a0;

@end
