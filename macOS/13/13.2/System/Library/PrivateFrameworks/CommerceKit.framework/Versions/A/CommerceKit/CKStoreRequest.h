@class NSString, NSDictionary, CKStoreClient, NSURL, CKAuthenticationContext, NSData;
@protocol CKStoreRequestDelegate;

@interface CKStoreRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CKStoreClient *storeClient;
@property (readonly) NSString *bagURLKey;
@property (readonly) NSURL *URL;
@property (weak) id<CKStoreRequestDelegate> delegate;
@property (copy) CKAuthenticationContext *authenticationContext;
@property (copy) NSDictionary *additionalQueryParameters;
@property (copy) NSDictionary *additionalHTTPHeaders;
@property (copy) NSData *bodyData;
@property (copy) NSDictionary *bodyPlist;

+ (id)userAgentForStoreClient:(id)a0;
+ (id)_macOSVersionString;
+ (id)_macOSBuildString;
+ (id)_webKitVersionString;
+ (id)_commerceKitVersionString;
+ (void)_processURLResponse:(id)a0 forRequest:(id)a1 storeClient:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)runAsyncWithCompletionHandler:(id /* block */)a0;
- (id)initWithStoreClient:(id)a0 bagURLKey:(id)a1;
- (id)_URLRequestWithError:(id *)a0;
- (id)initWithStoreClient:(id)a0 URL:(id)a1;
- (id)_initWithStoreClient:(id)a0;
- (id)runSync:(id *)a0;
- (void)_authenticateWithChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (id)_cookieHeader;

@end
