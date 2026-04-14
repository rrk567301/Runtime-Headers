@class NSString, NSMutableArray;

@interface NTPBExternalAnalyticsConfig : PBCodable <NSCopying> {
    struct { unsigned char usesProxyProfile : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAnalyticsBaseUrl;
@property (retain, nonatomic) NSString *analyticsBaseUrl;
@property (readonly, nonatomic) BOOL hasAnalyticsId;
@property (retain, nonatomic) NSString *analyticsId;
@property (readonly, nonatomic) BOOL hasEventQueryParameterName;
@property (retain, nonatomic) NSString *eventQueryParameterName;
@property (retain, nonatomic) NSMutableArray *queryParameterConfigs;
@property (nonatomic) BOOL hasUsesProxyProfile;
@property (nonatomic) BOOL usesProxyProfile;
@property (retain, nonatomic) NSMutableArray *proxyHostNames;
@property (retain, nonatomic) NSMutableArray *vpnProfileNames;

+ (Class)queryParameterConfigType;
+ (Class)proxyHostNamesType;
+ (Class)vpnProfileNamesType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearQueryParameterConfigs;
- (void)addQueryParameterConfig:(id)a0;
- (unsigned long long)queryParameterConfigsCount;
- (id)queryParameterConfigAtIndex:(unsigned long long)a0;
- (void)clearProxyHostNames;
- (void)addProxyHostNames:(id)a0;
- (unsigned long long)proxyHostNamesCount;
- (id)proxyHostNamesAtIndex:(unsigned long long)a0;
- (void)clearVpnProfileNames;
- (void)addVpnProfileNames:(id)a0;
- (unsigned long long)vpnProfileNamesCount;
- (id)vpnProfileNamesAtIndex:(unsigned long long)a0;

@end
