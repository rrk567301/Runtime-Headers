@class NSPPrivacyProxyResolverInfo, NSString, NSPPrivacyProxyAuthenticationInfo, NSMutableArray;

@interface NSPPrivacyProxyConfiguration : PBCodable <NSCopying> {
    struct { unsigned char disableUntil : 1; unsigned char preferredPathEnabledPercentage : 1; unsigned char enabled : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL hasDisableUntil;
@property (nonatomic) unsigned long long disableUntil;
@property (retain, nonatomic) NSPPrivacyProxyAuthenticationInfo *authInfo;
@property (retain, nonatomic) NSMutableArray *policyTierMaps;
@property (retain, nonatomic) NSMutableArray *proxies;
@property (retain, nonatomic) NSMutableArray *pathWeights;
@property (retain, nonatomic) NSMutableArray *resolvers;
@property (nonatomic) unsigned int maxTokenNum;
@property (retain, nonatomic) NSMutableArray *fallbackPathWeights;
@property (readonly, nonatomic) BOOL hasRegionId;
@property (retain, nonatomic) NSString *regionId;
@property (readonly, nonatomic) BOOL hasBootstrapResolver;
@property (retain, nonatomic) NSPPrivacyProxyResolverInfo *bootstrapResolver;
@property (readonly, nonatomic) BOOL hasDnsProbe;
@property (retain, nonatomic) NSString *dnsProbe;
@property (retain, nonatomic) NSMutableArray *obliviousConfigs;
@property (nonatomic) BOOL hasPreferredPathEnabledPercentage;
@property (nonatomic) unsigned int preferredPathEnabledPercentage;

+ (Class)policyTierMapType;
+ (Class)proxiesType;
+ (Class)pathWeightsType;
+ (Class)resolversType;
+ (Class)fallbackPathWeightsType;
+ (Class)obliviousConfigsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearPolicyTierMaps;
- (void)addPolicyTierMap:(id)a0;
- (unsigned long long)policyTierMapsCount;
- (id)policyTierMapAtIndex:(unsigned long long)a0;
- (void)clearProxies;
- (void)addProxies:(id)a0;
- (unsigned long long)proxiesCount;
- (id)proxiesAtIndex:(unsigned long long)a0;
- (void)clearPathWeights;
- (void)addPathWeights:(id)a0;
- (unsigned long long)pathWeightsCount;
- (id)pathWeightsAtIndex:(unsigned long long)a0;
- (void)clearResolvers;
- (void)addResolvers:(id)a0;
- (unsigned long long)resolversCount;
- (id)resolversAtIndex:(unsigned long long)a0;
- (void)clearFallbackPathWeights;
- (void)addFallbackPathWeights:(id)a0;
- (unsigned long long)fallbackPathWeightsCount;
- (id)fallbackPathWeightsAtIndex:(unsigned long long)a0;
- (void)clearObliviousConfigs;
- (void)addObliviousConfigs:(id)a0;
- (unsigned long long)obliviousConfigsCount;
- (id)obliviousConfigsAtIndex:(unsigned long long)a0;

@end
