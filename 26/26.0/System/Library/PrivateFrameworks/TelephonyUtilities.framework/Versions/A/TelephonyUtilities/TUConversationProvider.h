@class TUConversationProviderConfiguration, NSArray, NSString, NSObject;
@protocol OS_tcc_identity;

@interface TUConversationProvider : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) TUConversationProvider *expanseProvider;
@property (class, readonly, nonatomic) TUConversationProvider *faceTimeProvider;
@property (class, readonly, nonatomic) TUConversationProvider *unknownProvider;
@property (class, readonly, nonatomic) TUConversationProvider *telephonyWithSharePlayProvider;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (readonly, nonatomic) unsigned long long defaultAVMode;
@property (readonly, copy, nonatomic) NSArray *supportedMediaTypes;
@property (retain, nonatomic) TUConversationProviderConfiguration *providerConfiguration;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)matchesDefaultProviderIdentifier:(id)a0;
+ (id)providerForIdentifier:(id)a0;

- (BOOL)supportsSharePlay;
- (id)bundleIdentifier;
- (BOOL)supportsLinks;
- (BOOL)supportsVideo;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)supportsMediaType:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToConversationProvider:(id)a0;
- (id)pseudonymFeatureID;
- (id)description;
- (id)initWithConversationProvider:(id)a0;
- (BOOL)isDefaultProvider;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (BOOL)supportsAVMode:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isTelephonyWithSharePlayProvider;
- (void).cxx_destruct;

@end
