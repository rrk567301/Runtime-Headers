@class NSString, NSDictionary;

@interface AKBAAAttestationData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isVM;
@property (nonatomic) BOOL isInternalBuild;
@property (copy) NSString *signingErrorString;
@property (copy) NSString *baaVersion;
@property BOOL clientOrHostExcludesBAA;
@property (copy) NSString *machineID;
@property (copy) NSString *oneTimePassword;
@property unsigned long long routingInfo;
@property (copy) NSString *baaTime;
@property (copy) NSString *additionalBAAHeaders;
@property (copy) NSString *baaCert;
@property (copy) NSString *baaSignature;
@property (copy) NSString *baaAltSignature;
@property (copy) NSString *baaError;
@property (copy) NSString *hostBAACert;
@property (copy) NSString *hostBAASignature;
@property (copy) NSString *hostBAAAltSignature;
@property (copy) NSString *hostBAAError;
@property (copy) NSString *internalDigest;
@property (copy) NSString *internalDigestNoBody;
@property (copy) NSString *internalDebugTime;
@property (copy) NSString *baaDeviceToken;
@property (readonly, copy) NSDictionary *allHeaders;
@property (readonly, copy) NSDictionary *baaAttestationHeaders;
@property (readonly, copy) NSDictionary *companionAttestationHeaders;
@property (readonly, copy) NSDictionary *proxiedAttestationHeaders;
@property (readonly, copy) NSDictionary *headersForSigning;
@property (readonly, copy) NSDictionary *anisetteHeaders;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)_addBAAHeaders:(id)a0;
- (void)_addAnisetteHeaders:(id)a0;
- (id)_convertedAttestationHeadersForProxiedDevice:(BOOL)a0;
- (BOOL)_isValidBAAState;
- (id)initWithIsVirtualMachine:(BOOL)a0 isInternalBuild:(BOOL)a1;
- (void)setSigningError:(id)a0;
- (void)updateFromAnisetteData:(id)a0;

@end
