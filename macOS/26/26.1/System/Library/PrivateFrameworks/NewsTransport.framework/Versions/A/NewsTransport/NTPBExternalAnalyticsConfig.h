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

+ (Class)proxyHostNamesType;
+ (Class)queryParameterConfigType;
+ (Class)vpnProfileNamesType;

- (void)addQueryParameterConfig:(id)a0;
- (id)dictionaryRepresentation;
- (void)addProxyHostNames:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)queryParameterConfigsCount;
- (unsigned long long)vpnProfileNamesCount;
- (id)vpnProfileNamesAtIndex:(unsigned long long)a0;
- (void)clearProxyHostNames;
- (id)description;
- (void)addVpnProfileNames:(id)a0;
- (void)clearQueryParameterConfigs;
- (id)queryParameterConfigAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)proxyHostNamesCount;
- (BOOL)readFrom:(id)a0;
- (id)proxyHostNamesAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (void)clearVpnProfileNames;

@end
