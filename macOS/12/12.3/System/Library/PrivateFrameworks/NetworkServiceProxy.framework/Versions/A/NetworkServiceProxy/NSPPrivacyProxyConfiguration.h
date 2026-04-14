@class NSPPrivacyProxyResolverInfo, NSString, NSPPrivacyProxyAuthenticationInfo, NSMutableArray;

@interface NSPPrivacyProxyConfiguration : PBCodable <NSCopying> {
    struct { unsigned char disableUntil : 1; unsigned char enabled : 1; } _has;
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

+ (Class)policyTierMapType;
+ (Class)proxiesType;
+ (Class)pathWeightsType;
+ (Class)resolversType;
+ (Class)fallbackPathWeightsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addPolicyTierMap:(id)a0;
- (void)addProxies:(id)a0;
- (void)addPathWeights:(id)a0;
- (void)addResolvers:(id)a0;
- (void)addFallbackPathWeights:(id)a0;
- (unsigned long long)policyTierMapsCount;
- (void)clearPolicyTierMaps;
- (id)policyTierMapAtIndex:(unsigned long long)a0;
- (unsigned long long)proxiesCount;
- (void)clearProxies;
- (id)proxiesAtIndex:(unsigned long long)a0;
- (unsigned long long)pathWeightsCount;
- (void)clearPathWeights;
- (id)pathWeightsAtIndex:(unsigned long long)a0;
- (unsigned long long)resolversCount;
- (void)clearResolvers;
- (id)resolversAtIndex:(unsigned long long)a0;
- (unsigned long long)fallbackPathWeightsCount;
- (void)clearFallbackPathWeights;
- (id)fallbackPathWeightsAtIndex:(unsigned long long)a0;

@end
