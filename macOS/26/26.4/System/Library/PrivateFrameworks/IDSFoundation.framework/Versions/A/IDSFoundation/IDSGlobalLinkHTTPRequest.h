@class NSString, NSData;

@interface IDSGlobalLinkHTTPRequest : NSObject

@property (readonly) NSString *requestID;
@property (readonly) NSString *method;
@property (readonly) NSString *path;
@property (readonly) NSData *body;

- (void).cxx_destruct;
- (id)initWithRequestID:(id)a0 method:(id)a1 path:(id)a2 body:(id)a3;

@end
