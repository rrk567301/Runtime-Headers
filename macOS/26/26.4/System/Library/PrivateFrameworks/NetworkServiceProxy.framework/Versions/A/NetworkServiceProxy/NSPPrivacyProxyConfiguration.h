@class NSPPrivacyProxyResolverInfo, NSString, NSPPrivacyProxyQuotaInfo, NSPPrivacyProxyAuthenticationInfo, NSPPrivacyProxyEdgeProbeConfig, NSMutableArray;

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
@property (readonly, nonatomic) BOOL hasEdgeProbeConfig;
@property (retain, nonatomic) NSPPrivacyProxyEdgeProbeConfig *edgeProbeConfig;

+ (Class)policyTierMapType;
+ (Class)proxiesType;
+ (Class)fallbackPathWeightsType;
+ (Class)trustedNetworkDiscoveredProxiesType;
+ (Class)pathWeightsType;
+ (Class)obliviousConfigsType;
+ (Class)resolversType;
+ (Class)proxiedContentMapsType;

- (unsigned long long)proxiesCount;
- (void)clearProxies;
- (void)clearPolicyTierMaps;
- (void)addProxies:(id)a0;
- (id)proxiedContentMapsAtIndex:(unsigned long long)a0;
- (id)proxiesAtIndex:(unsigned long long)a0;
- (id)resolversAtIndex:(unsigned long long)a0;
- (void)addObliviousConfigs:(id)a0;
- (void)addProxiedContentMaps:(id)a0;
- (void)addPolicyTierMap:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)pathWeightsCount;
- (id)obliviousConfigsAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (void)clearPathWeights;
- (void)clearObliviousConfigs;
- (BOOL)isEqual:(id)a0;
- (void)clearTrustedNetworkDiscoveredProxies;
- (id)pathWeightsAtIndex:(unsigned long long)a0;
- (unsigned long long)policyTierMapsCount;
- (id)trustedNetworkDiscoveredProxiesAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)proxiedContentMapsCount;
- (id)fallbackPathWeightsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addResolvers:(id)a0;
- (unsigned long long)resolversCount;
- (unsigned long long)fallbackPathWeightsCount;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)clearProxiedContentMaps;
- (void)addFallbackPathWeights:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addTrustedNetworkDiscoveredProxies:(id)a0;
- (void)addPathWeights:(id)a0;
- (id)description;
- (void)clearResolvers;
- (void)writeTo:(id)a0;
- (unsigned long long)obliviousConfigsCount;
- (unsigned long long)trustedNetworkDiscoveredProxiesCount;
- (id)policyTierMapAtIndex:(unsigned long long)a0;
- (void)clearFallbackPathWeights;

@end
