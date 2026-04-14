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

+ (Class)fallbackPathWeightsType;
+ (Class)obliviousConfigsType;
+ (Class)policyTierMapType;
+ (Class)trustedNetworkDiscoveredProxiesType;
+ (Class)pathWeightsType;
+ (Class)resolversType;
+ (Class)proxiedContentMapsType;
+ (Class)proxiesType;

- (unsigned long long)proxiesCount;
- (void)addResolvers:(id)a0;
- (id)proxiesAtIndex:(unsigned long long)a0;
- (void)addProxies:(id)a0;
- (id)resolversAtIndex:(unsigned long long)a0;
- (void)clearProxies;
- (void)addPolicyTierMap:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)policyTierMapsCount;
- (id)obliviousConfigsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)clearResolvers;
- (id)pathWeightsAtIndex:(unsigned long long)a0;
- (void)clearObliviousConfigs;
- (unsigned long long)fallbackPathWeightsCount;
- (id)proxiedContentMapsAtIndex:(unsigned long long)a0;
- (id)policyTierMapAtIndex:(unsigned long long)a0;
- (void)clearProxiedContentMaps;
- (void)mergeFrom:(id)a0;
- (unsigned long long)resolversCount;
- (void)clearTrustedNetworkDiscoveredProxies;
- (id)trustedNetworkDiscoveredProxiesAtIndex:(unsigned long long)a0;
- (void)addProxiedContentMaps:(id)a0;
- (void)addTrustedNetworkDiscoveredProxies:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addPathWeights:(id)a0;
- (void)clearPathWeights;
- (unsigned long long)obliviousConfigsCount;
- (id)fallbackPathWeightsAtIndex:(unsigned long long)a0;
- (unsigned long long)trustedNetworkDiscoveredProxiesCount;
- (void)addFallbackPathWeights:(id)a0;
- (void)clearFallbackPathWeights;
- (void)addObliviousConfigs:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)proxiedContentMapsCount;
- (void)clearPolicyTierMaps;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)pathWeightsCount;

@end
