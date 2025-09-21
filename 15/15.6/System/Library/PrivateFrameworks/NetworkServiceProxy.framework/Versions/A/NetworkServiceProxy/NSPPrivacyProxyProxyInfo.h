@class NSString, NSMutableArray, NSData;

@interface NSPPrivacyProxyProxyInfo : PBCodable <NSCopying> {
    struct { unsigned char algorithm : 1; unsigned char fallbackSupportsUDPProxying : 1; unsigned char supportsFallback : 1; unsigned char supportsResumption : 1; } _has;
}

@property (nonatomic) int proxyHop;
@property (retain, nonatomic) NSString *proxyURL;
@property (retain, nonatomic) NSMutableArray *proxyKeyInfos;
@property (retain, nonatomic) NSData *tokenKeyInfo;
@property (nonatomic) char hasSupportsFallback;
@property (nonatomic) char supportsFallback;
@property (readonly, nonatomic) char hasVendor;
@property (retain, nonatomic) NSString *vendor;
@property (readonly, nonatomic) char hasTcpProxyFqdn;
@property (retain, nonatomic) NSString *tcpProxyFqdn;
@property (readonly, nonatomic) char hasPreferredPathConfigUri;
@property (retain, nonatomic) NSString *preferredPathConfigUri;
@property (readonly, nonatomic) char hasProxyVersion;
@property (retain, nonatomic) NSString *proxyVersion;
@property (nonatomic) char hasSupportsResumption;
@property (nonatomic) char supportsResumption;
@property (retain, nonatomic) NSMutableArray *bootstrapAddresses;
@property (retain, nonatomic) NSMutableArray *allowedNextHops;
@property (readonly, nonatomic) char hasTokenChallenge;
@property (retain, nonatomic) NSData *tokenChallenge;
@property (retain, nonatomic) NSMutableArray *preferredPathPatterns;
@property (nonatomic) char hasFallbackSupportsUDPProxying;
@property (nonatomic) char fallbackSupportsUDPProxying;
@property (nonatomic) char hasAlgorithm;
@property (nonatomic) int algorithm;

+ (Class)allowedNextHopsType;
+ (Class)bootstrapAddressesType;
+ (Class)preferredPathPatternsType;
+ (Class)proxyKeyInfoType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsAlgorithm:(id)a0;
- (id)algorithmAsString:(int)a0;
- (int)StringAsProxyHop:(id)a0;
- (void)addAllowedNextHops:(id)a0;
- (void)addBootstrapAddresses:(id)a0;
- (void)addPreferredPathPatterns:(id)a0;
- (void)addProxyKeyInfo:(id)a0;
- (id)allowedNextHopsAtIndex:(unsigned long long)a0;
- (unsigned long long)allowedNextHopsCount;
- (id)bootstrapAddressesAtIndex:(unsigned long long)a0;
- (unsigned long long)bootstrapAddressesCount;
- (void)clearAllowedNextHops;
- (void)clearBootstrapAddresses;
- (void)clearPreferredPathPatterns;
- (void)clearProxyKeyInfos;
- (id)preferredPathPatternsAtIndex:(unsigned long long)a0;
- (unsigned long long)preferredPathPatternsCount;
- (id)proxyHopAsString:(int)a0;
- (id)proxyKeyInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)proxyKeyInfosCount;

@end
