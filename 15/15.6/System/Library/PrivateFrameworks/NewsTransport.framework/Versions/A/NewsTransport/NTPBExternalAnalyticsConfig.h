@class NSString, NSMutableArray;

@interface NTPBExternalAnalyticsConfig : PBCodable <NSCopying> {
    struct { unsigned char usesProxyProfile : 1; } _has;
}

@property (readonly, nonatomic) char hasAnalyticsBaseUrl;
@property (retain, nonatomic) NSString *analyticsBaseUrl;
@property (readonly, nonatomic) char hasAnalyticsId;
@property (retain, nonatomic) NSString *analyticsId;
@property (readonly, nonatomic) char hasEventQueryParameterName;
@property (retain, nonatomic) NSString *eventQueryParameterName;
@property (retain, nonatomic) NSMutableArray *queryParameterConfigs;
@property (nonatomic) char hasUsesProxyProfile;
@property (nonatomic) char usesProxyProfile;
@property (retain, nonatomic) NSMutableArray *proxyHostNames;
@property (retain, nonatomic) NSMutableArray *vpnProfileNames;

+ (Class)proxyHostNamesType;
+ (Class)queryParameterConfigType;
+ (Class)vpnProfileNamesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addProxyHostNames:(id)a0;
- (void)addQueryParameterConfig:(id)a0;
- (void)addVpnProfileNames:(id)a0;
- (void)clearProxyHostNames;
- (void)clearQueryParameterConfigs;
- (void)clearVpnProfileNames;
- (id)proxyHostNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)proxyHostNamesCount;
- (id)queryParameterConfigAtIndex:(unsigned long long)a0;
- (unsigned long long)queryParameterConfigsCount;
- (id)vpnProfileNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)vpnProfileNamesCount;

@end
