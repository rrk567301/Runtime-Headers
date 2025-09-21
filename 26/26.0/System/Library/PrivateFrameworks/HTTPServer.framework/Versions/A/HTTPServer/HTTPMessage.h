@interface HTTPMessage : NSObject

@property (readonly) struct __CFHTTPMessage { } *message;

- (long long)statusCode;
- (id)body;
- (void)dealloc;
- (id)method;
- (void)setBody:(id)a0;
- (id)version;
- (id)url;
- (BOOL)appendData:(id)a0;
- (id)allHeaderFields;
- (id)initEmptyRequest;
- (id)messageData;
- (BOOL)isHeaderComplete;
- (id)headerField:(id)a0;
- (id)initRequestWithMethod:(id)a0 URL:(id)a1 version:(id)a2;
- (id)initResponseWithStatusCode:(long long)a0 description:(id)a1 version:(id)a2;
- (void)setHeaderField:(id)a0 value:(id)a1;

@end
