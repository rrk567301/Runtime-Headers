@class NSString, NSDictionary, NSArray, ICJSSignConfiguration, ICStoreRequestContext;

@interface ICStoreURLRequest : ICURLRequest

@property (class, readonly, copy, nonatomic) NSString *currentConnectionTypeHeader;

@property (readonly, copy, nonatomic) ICStoreRequestContext *storeRequestContext;
@property (nonatomic) long long anisetteVersion;
@property (nonatomic) char shouldUseMescalSigning;
@property (nonatomic) char shouldParseBodyData;
@property (nonatomic) char shouldRequireURLBag;
@property (copy, nonatomic) NSString *machineDataSyncState;
@property (copy, nonatomic) NSDictionary *additionalHTTPCookies;
@property (copy, nonatomic) NSArray *additionalQueryItems;
@property (copy, nonatomic) ICJSSignConfiguration *JSSignConfiguration;

+ (unsigned long long)_defaultMaxRetryCountForReason:(id)a0;
+ (Class)_responseHandlerClass;
+ (char)_shouldPersonalizeRequestForRequestContext:(id)a0 personalizationStyle:(long long)a1;

- (id)description;
- (void).cxx_destruct;
- (void)buildURLRequestWithCompletionHandler:(id /* block */)a0;
- (id)initWithURL:(id)a0 requestContext:(id)a1;
- (id)initWithURLRequest:(id)a0 requestContext:(id)a1;
- (void)_getSignatureDataForRequest:(id)a0 urlBag:(id)a1 completionHandler:(id /* block */)a2;
- (char)_isPersonalizationRestricted;
- (id)_stringForCachePolicy:(unsigned long long)a0;
- (void)buildStoreURLRequestWithURLRequest:(id)a0 builderProperties:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithURLRequest:(id)a0 requestContext:(id)a1 resumeData:(id)a2;

@end
