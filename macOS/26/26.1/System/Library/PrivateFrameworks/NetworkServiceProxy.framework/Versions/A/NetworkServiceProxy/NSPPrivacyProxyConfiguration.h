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

+ (Class)obliviousConfigsType;
+ (Class)trustedNetworkDiscoveredProxiesType;
+ (Class)fallbackPathWeightsType;
+ (Class)proxiedContentMapsType;
+ (Class)policyTierMapType;
+ (Class)proxiesType;
+ (Class)resolversType;
+ (Class)pathWeightsType;

- (unsigned long long)obliviousConfigsCount;
- (unsigned long long)policyTierMapsCount;
- (unsigned long long)proxiesCount;
- (id)proxiesAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)clearProxies;
- (void)addProxies:(id)a0;
- (void)clearPathWeights;
- (unsigned long long)pathWeightsCount;
- (void)addTrustedNetworkDiscoveredProxies:(id)a0;
- (id)proxiedContentMapsAtIndex:(unsigned long long)a0;
- (void)clearPolicyTierMaps;
- (unsigned long long)proxiedContentMapsCount;
- (void)clearProxiedContentMaps;
- (unsigned long long)trustedNetworkDiscoveredProxiesCount;
- (id)description;
- (id)pathWeightsAtIndex:(unsigned long long)a0;
- (id)resolversAtIndex:(unsigned long long)a0;
- (id)obliviousConfigsAtIndex:(unsigned long long)a0;
- (void)addResolvers:(id)a0;
- (void)clearTrustedNetworkDiscoveredProxies;
- (void)clearObliviousConfigs;
- (unsigned long long)fallbackPathWeightsCount;
- (void).cxx_destruct;
- (void)addObliviousConfigs:(id)a0;
- (void)addPolicyTierMap:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)policyTierMapAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void)addPathWeights:(id)a0;
- (void)clearFallbackPathWeights;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)resolversCount;
- (void)clearResolvers;
- (id)fallbackPathWeightsAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (id)trustedNetworkDiscoveredProxiesAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)addProxiedContentMaps:(id)a0;
- (void)addFallbackPathWeights:(id)a0;
- (void)writeTo:(id)a0;

@end
