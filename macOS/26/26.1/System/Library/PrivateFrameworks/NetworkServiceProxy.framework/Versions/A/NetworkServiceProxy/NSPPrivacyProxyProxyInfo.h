@class NSString, NSMutableArray, NSData;

@interface NSPPrivacyProxyProxyInfo : PBCodable <NSCopying> {
    struct { unsigned char algorithm : 1; unsigned char proxyIndex : 1; unsigned char fallbackSupportsUDPProxying : 1; unsigned char supportsFallback : 1; unsigned char supportsResumption : 1; } _has;
}

@property (nonatomic) int proxyHop;
@property (retain, nonatomic) NSString *proxyURL;
@property (retain, nonatomic) NSMutableArray *proxyKeyInfos;
@property (retain, nonatomic) NSData *tokenKeyInfo;
@property (nonatomic) BOOL hasSupportsFallback;
@property (nonatomic) BOOL supportsFallback;
@property (readonly, nonatomic) BOOL hasVendor;
@property (retain, nonatomic) NSString *vendor;
@property (readonly, nonatomic) BOOL hasTcpProxyFqdn;
@property (retain, nonatomic) NSString *tcpProxyFqdn;
@property (readonly, nonatomic) BOOL hasPreferredPathConfigUri;
@property (retain, nonatomic) NSString *preferredPathConfigUri;
@property (readonly, nonatomic) BOOL hasProxyVersion;
@property (retain, nonatomic) NSString *proxyVersion;
@property (nonatomic) BOOL hasSupportsResumption;
@property (nonatomic) BOOL supportsResumption;
@property (retain, nonatomic) NSMutableArray *bootstrapAddresses;
@property (retain, nonatomic) NSMutableArray *allowedNextHops;
@property (readonly, nonatomic) BOOL hasTokenChallenge;
@property (retain, nonatomic) NSData *tokenChallenge;
@property (retain, nonatomic) NSMutableArray *preferredPathPatterns;
@property (nonatomic) BOOL hasFallbackSupportsUDPProxying;
@property (nonatomic) BOOL fallbackSupportsUDPProxying;
@property (nonatomic) BOOL hasAlgorithm;
@property (nonatomic) int algorithm;
@property (nonatomic) BOOL hasProxyIndex;
@property (nonatomic) unsigned int proxyIndex;

+ (Class)bootstrapAddressesType;
+ (Class)preferredPathPatternsType;
+ (Class)proxyKeyInfoType;
+ (Class)allowedNextHopsType;

- (void)addBootstrapAddresses:(id)a0;
- (void)clearAllowedNextHops;
- (unsigned long long)bootstrapAddressesCount;
- (void)addProxyKeyInfo:(id)a0;
- (id)proxyHopAsString:(int)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (unsigned long long)proxyKeyInfosCount;
- (id)bootstrapAddressesAtIndex:(unsigned long long)a0;
- (int)StringAsProxyHop:(id)a0;
- (id)proxyKeyInfoAtIndex:(unsigned long long)a0;
- (int)StringAsAlgorithm:(id)a0;
- (id)description;
- (unsigned long long)preferredPathPatternsCount;
- (unsigned long long)allowedNextHopsCount;
- (void)addPreferredPathPatterns:(id)a0;
- (void)clearProxyKeyInfos;
- (id)algorithmAsString:(int)a0;
- (void).cxx_destruct;
- (id)allowedNextHopsAtIndex:(unsigned long long)a0;
- (id)preferredPathPatternsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearBootstrapAddresses;
- (void)mergeFrom:(id)a0;
- (void)clearPreferredPathPatterns;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAllowedNextHops:(id)a0;

@end
