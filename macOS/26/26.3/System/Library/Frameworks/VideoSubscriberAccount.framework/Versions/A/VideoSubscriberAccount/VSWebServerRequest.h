@class NSString, NSURL, NSDictionary;

@interface VSWebServerRequest : NSObject

@property (readonly, nonatomic) struct _CFHTTPServerRequest { } *request;
@property (readonly, copy, nonatomic) NSString *HTTPVersion;
@property (readonly, copy, nonatomic) NSString *method;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, copy, nonatomic) NSDictionary *headerFields;

- (id)initWithRequest:(struct _CFHTTPServerRequest { } *)a0;
- (id)description;
- (id)connection;
- (id)bodyStream;

@end
