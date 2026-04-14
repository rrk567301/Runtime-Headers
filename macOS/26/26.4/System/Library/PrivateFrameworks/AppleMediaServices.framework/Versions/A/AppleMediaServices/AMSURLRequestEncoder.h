@class NSString, NSArray, AMSFairPlayDeviceIdentity, AMSKeychainOptions, AMSMetricsLoadURLOverlay, NSDictionary, AMSBagKeySet, ACAccount, AMSURLRequestProperties, NSObject, AMSProcessInfo;
@protocol AMSBagProtocol, AMSResponseDecoding, AMSFairPlayDeviceIdentityNetworkProviderProtocol, AMSURLBagContract, OS_dispatch_queue;

@interface AMSURLRequestEncoder : NSObject <AMSBagConsumer, AMSRequestEncoding> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    long long _encodeCount;
}

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (copy, nonatomic) AMSURLRequestProperties *parentProperties;
@property BOOL alwaysIncludeAuthKitHeaders;
@property BOOL alwaysIncludeMMeClientInfoAndDeviceHeaders;
@property BOOL excludeIdentifierHeadersForAccount;
@property BOOL preserveQueryParameterEncoding;
@property BOOL shouldSetStorefrontHeader;
@property BOOL shouldSetCookieHeader;
@property (retain) id<AMSFairPlayDeviceIdentityNetworkProviderProtocol> fpdiNetworkProvider;
@property (retain) AMSFairPlayDeviceIdentity *fairPlayDeviceIdentity;
@property (retain) ACAccount *account;
@property long long anisetteType;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property BOOL compressRequestBody;
@property BOOL disableResponseDecoding;
@property long long dialogOptions;
@property BOOL enableRemoteSecuritySigning;
@property (retain) NSArray *groupRequestAccounts;
@property (retain) NSString *gsTokenIdentifier;
@property BOOL includeClientVersions;
@property (retain) AMSKeychainOptions *keychainOptions;
@property (retain) NSString *logUUID;
@property long long mescalType;
@property long long requestEncoding;
@property (retain) id<AMSResponseDecoding> responseDecoder;
@property BOOL shouldSetCookiesFromResponse;
@property BOOL shouldSetStorefrontFromResponse;
@property BOOL urlKnownToBeTrusted;
@property (retain) Class paymentSheetTaskClass;
@property (retain) AMSMetricsLoadURLOverlay *loadURLOverlay;
@property (retain) id<AMSURLBagContract> bagContract;
@property long long dataEncoding;
@property (copy) NSDictionary *additionalMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)_createOversizedHeadersPayloadForRequest:(id)a0 totalHeaderSize:(unsigned long long)a1 threshold:(unsigned long long)a2 maxSize:(unsigned long long)a3;

- (id)requestWithMethod:(long long)a0 URL:(id)a1 parameters:(id)a2 error:(id *)a3;
- (id)_methodStringFromMethod:(long long)a0;
- (id)requestWithMethod:(long long)a0 bagURL:(id)a1 parameters:(id)a2;
- (id)initWithBagContract:(id)a0;
- (void)_personalizeKeychainOptionsForAccount:(id)a0;
- (id)requestWithMethod:(long long)a0 URL:(id)a1 error:(id *)a2;
- (id)requestWithMethod:(long long)a0 URL:(id)a1 parameters:(id)a2;
- (id)initWithBag:(id)a0;
- (id)requestWithMethod:(long long)a0 URLString:(id)a1 parameters:(id)a2 error:(id *)a3;
- (id)requestWithMethod:(long long)a0 URLString:(id)a1 error:(id *)a2;
- (void)_checkHeaderSizeAndTriggerAutoBugCaptureIfNeeded:(id)a0;
- (id)requestWithMethod:(long long)a0 bagURL:(id)a1 parameters:(id)a2 error:(id *)a3;
- (id)requestWithMethod:(long long)a0 bagURL:(id)a1 error:(id *)a2;
- (id)requestByEncodingRequest:(id)a0 parameters:(id)a1;
- (id)requestWithMethod:(long long)a0 URL:(id)a1 headers:(id)a2 parameters:(id)a3;
- (void)_triggerAutoBugCaptureForOversizedHeaders:(id)a0 totalHeaderSize:(unsigned long long)a1 threshold:(unsigned long long)a2 maxSize:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)requestByEncodingRequestAndReturnSigningErrors:(id)a0 parameters:(id)a1;
- (id)init;
- (id)_addCookiesToRequest:(id)a0 account:(id)a1;
- (id)requestWithMethod:(long long)a0 bagURL:(id)a1 headers:(id)a2 parameters:(id)a3;
- (id)requestByEncodingRequest:(id)a0 parameters:(id)a1 error:(id *)a2;

@end
