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
+ (Class)proxyKeyInfoType;
+ (Class)allowedNextHopsType;
+ (Class)preferredPathPatternsType;

- (id)proxyKeyInfoAtIndex:(unsigned long long)a0;
- (void)addBootstrapAddresses:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsProxyHop:(id)a0;
- (id)preferredPathPatternsAtIndex:(unsigned long long)a0;
- (void)addPreferredPathPatterns:(id)a0;
- (unsigned long long)proxyKeyInfosCount;
- (void)clearAllowedNextHops;
- (void)copyTo:(id)a0;
- (void)clearProxyKeyInfos;
- (BOOL)isEqual:(id)a0;
- (void)clearBootstrapAddresses;
- (void)clearPreferredPathPatterns;
- (void)addProxyKeyInfo:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)preferredPathPatternsCount;
- (unsigned long long)allowedNextHopsCount;
- (id)proxyHopAsString:(int)a0;
- (void).cxx_destruct;
- (id)allowedNextHopsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)bootstrapAddressesCount;
- (id)description;
- (id)algorithmAsString:(int)a0;
- (void)addAllowedNextHops:(id)a0;
- (int)StringAsAlgorithm:(id)a0;
- (void)writeTo:(id)a0;
- (id)bootstrapAddressesAtIndex:(unsigned long long)a0;

@end
