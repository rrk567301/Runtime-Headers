@interface HTTPMessage : NSObject

@property (readonly) struct __CFHTTPMessage { } *message;

- (void)dealloc;
- (BOOL)appendData:(id)a0;
- (id)version;
- (id)url;
- (long long)statusCode;
- (id)method;
- (id)allHeaderFields;
- (id)messageData;
- (void)setBody:(id)a0;
- (id)body;
- (id)initEmptyRequest;
- (BOOL)isHeaderComplete;
- (id)initRequestWithMethod:(id)a0 URL:(id)a1 version:(id)a2;
- (id)initResponseWithStatusCode:(long long)a0 description:(id)a1 version:(id)a2;
- (id)headerField:(id)a0;
- (void)setHeaderField:(id)a0 value:(id)a1;

@end
