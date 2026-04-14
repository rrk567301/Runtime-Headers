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

+ (id)providerForIdentifier:(id)a0;
+ (BOOL)matchesDefaultProviderIdentifier:(id)a0;

- (BOOL)supportsSharePlay;
- (BOOL)supportsVideo;
- (BOOL)isDefaultProvider;
- (id)initWithCoder:(id)a0;
- (id)initWithConversationProvider:(id)a0;
- (unsigned long long)hash;
- (BOOL)supportsAVMode:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToConversationProvider:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)description;
- (id)pseudonymFeatureID;
- (BOOL)supportsLinks;
- (BOOL)isTelephonyWithSharePlayProvider;
- (BOOL)supportsMediaType:(long long)a0;
- (id)initWithConfiguration:(id)a0;

@end
