@class NSPPrivacyProxyResolverInfo, NSString, NSPPrivacyProxyQuotaInfo, NSPPrivacyProxyAuthenticationInfo, NSMutableArray;

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
@property (retain, nonatomic) NSMutableArray *proxiedContentMaps;
@property (retain, nonatomic) NSMutableArray *trustedNetworkDiscoveredProxies;
@property (readonly, nonatomic) BOOL hasQuotaInfo;
@property (retain, nonatomic) NSPPrivacyProxyQuotaInfo *quotaInfo;

+ (Class)proxiedContentMapsType;
+ (Class)policyTierMapType;
+ (Class)fallbackPathWeightsType;
+ (Class)obliviousConfigsType;
+ (Class)resolversType;
+ (Class)proxiesType;
+ (Class)pathWeightsType;
+ (Class)trustedNetworkDiscoveredProxiesType;

- (unsigned long long)trustedNetworkDiscoveredProxiesCount;
- (id)pathWeightsAtIndex:(unsigned long long)a0;
- (unsigned long long)obliviousConfigsCount;
- (unsigned long long)proxiesCount;
- (id)dictionaryRepresentation;
- (void)clearFallbackPathWeights;
- (id)fallbackPathWeightsAtIndex:(unsigned long long)a0;
- (void)clearProxies;
- (void)addProxies:(id)a0;
- (id)obliviousConfigsAtIndex:(unsigned long long)a0;
- (id)description;
- (void)clearProxiedContentMaps;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addPolicyTierMap:(id)a0;
- (void)copyTo:(id)a0;
- (void)clearPolicyTierMaps;
- (void)clearPathWeights;
- (void)writeTo:(id)a0;
- (unsigned long long)policyTierMapsCount;
- (void)addObliviousConfigs:(id)a0;
- (void)addPathWeights:(id)a0;
- (void)addFallbackPathWeights:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)resolversCount;
- (id)trustedNetworkDiscoveredProxiesAtIndex:(unsigned long long)a0;
- (void)clearResolvers;
- (id)proxiesAtIndex:(unsigned long long)a0;
- (unsigned long long)proxiedContentMapsCount;
- (void)addResolvers:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearObliviousConfigs;
- (id)resolversAtIndex:(unsigned long long)a0;
- (void)clearTrustedNetworkDiscoveredProxies;
- (BOOL)isEqual:(id)a0;
- (id)proxiedContentMapsAtIndex:(unsigned long long)a0;
- (void)addTrustedNetworkDiscoveredProxies:(id)a0;
- (unsigned long long)hash;
- (id)policyTierMapAtIndex:(unsigned long long)a0;
- (unsigned long long)fallbackPathWeightsCount;
- (unsigned long long)pathWeightsCount;
- (void)addProxiedContentMaps:(id)a0;

@end
