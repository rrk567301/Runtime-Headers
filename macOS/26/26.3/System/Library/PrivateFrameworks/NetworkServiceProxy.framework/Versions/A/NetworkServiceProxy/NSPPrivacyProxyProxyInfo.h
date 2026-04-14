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

+ (Class)preferredPathPatternsType;
+ (Class)allowedNextHopsType;
+ (Class)bootstrapAddressesType;
+ (Class)proxyKeyInfoType;

- (id)dictionaryRepresentation;
- (void)clearAllowedNextHops;
- (int)StringAsProxyHop:(id)a0;
- (void)clearProxyKeyInfos;
- (void)clearPreferredPathPatterns;
- (id)description;
- (void)addProxyKeyInfo:(id)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsAlgorithm:(id)a0;
- (id)proxyKeyInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)allowedNextHopsCount;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)bootstrapAddressesCount;
- (void)writeTo:(id)a0;
- (unsigned long long)proxyKeyInfosCount;
- (id)proxyHopAsString:(int)a0;
- (id)allowedNextHopsAtIndex:(unsigned long long)a0;
- (void)addAllowedNextHops:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)preferredPathPatternsCount;
- (id)preferredPathPatternsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)bootstrapAddressesAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)addBootstrapAddresses:(id)a0;
- (unsigned long long)hash;
- (void)clearBootstrapAddresses;
- (void)addPreferredPathPatterns:(id)a0;
- (id)algorithmAsString:(int)a0;

@end
