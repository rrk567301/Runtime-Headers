@class NSMutableData, _HMFCFHTTPServerConnection;

@interface _HMFCFHTTPServerRequest : HMFHTTPRequestInternal

@property (readonly, nonatomic) NSMutableData *bodyData;
@property (readonly, nonatomic) struct _CFHTTPServerRequest { } *requestRef;
@property (readonly, nonatomic) struct __CFReadStream { } *bodyStream;
@property (readonly, weak, nonatomic) _HMFCFHTTPServerConnection *connection;

- (void)setHeaders:(id)a0;
- (id)method;
- (void)setMethod:(id)a0;
- (id)init;
- (id)URL;
- (id)headerFields;
- (void)setURL:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (void)setBody:(id)a0;
- (void)dealloc;
- (id)body;
- (void)appendBodyData:(id)a0;
- (id)initWithConnection:(id)a0 requestRef:(struct _CFHTTPServerRequest { } *)a1;
- (id)responseWithStatusCode:(long long)a0;

@end
