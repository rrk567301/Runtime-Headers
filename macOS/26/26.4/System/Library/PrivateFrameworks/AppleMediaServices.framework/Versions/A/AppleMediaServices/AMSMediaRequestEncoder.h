@class NSString, AMSMetricsLoadURLOverlay, AMSBagKeySet, ACAccount, AMSProcessInfo, AMSURLRequestEncoder;
@protocol AMSBagProtocol, AMSMediaTokenServiceProtocol, AMSResponseDecoding;

@interface AMSMediaRequestEncoder : NSObject <AMSBagConsumer, AMSRequestEncoding> {
    AMSURLRequestEncoder *_requestEncoder;
}

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property BOOL URLKnownToBeTrusted;
@property (retain) ACAccount *account;
@property BOOL alwaysIncludeAuthKitHeaders;
@property BOOL alwaysIncludeMMeClientInfoAndDeviceHeaders;
@property (readonly) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property BOOL compressRequestBody;
@property BOOL disableResponseDecoding;
@property (retain) NSString *gsTokenIdentifier;
@property BOOL excludeIdentifierHeadersForAccount;
@property (retain) NSString *logKey;
@property long long requestEncoding;
@property (retain) id<AMSResponseDecoding> responseDecoder;
@property (readonly) id<AMSMediaTokenServiceProtocol> tokenService;
@property (retain) AMSMetricsLoadURLOverlay *loadURLOverlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestWithComponents:(id)a0;
- (id)requestByEncodingRequest:(id)a0 parameters:(id)a1;
- (id)requestWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithTokenService:(id)a0 bag:(id)a1;

@end
