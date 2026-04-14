@interface HTTPMessage : NSObject

@property (readonly) struct __CFHTTPMessage { } *message;

- (void)dealloc;
- (id)url;
- (id)version;
- (BOOL)appendData:(id)a0;
- (long long)statusCode;
- (id)method;
- (id)allHeaderFields;
- (id)messageData;
- (void)setBody:(id)a0;
- (id)body;
- (id)initEmptyRequest;
- (BOOL)isHeaderComplete;
- (id)headerField:(id)a0;
- (void)setHeaderField:(id)a0 value:(id)a1;
- (id)initResponseWithStatusCode:(long long)a0 description:(id)a1 version:(id)a2;
- (id)initRequestWithMethod:(id)a0 URL:(id)a1 version:(id)a2;

@end
