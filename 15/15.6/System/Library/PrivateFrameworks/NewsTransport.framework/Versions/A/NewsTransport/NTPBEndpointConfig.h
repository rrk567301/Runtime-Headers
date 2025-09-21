@class NSString;

@interface NTPBEndpointConfig : PBCodable <NSCopying>

@property (nonatomic) int environment;
@property (readonly, nonatomic) char hasClientApiBaseUrl;
@property (retain, nonatomic) NSString *clientApiBaseUrl;
@property (readonly, nonatomic) char hasEventRelayBaseUrl;
@property (retain, nonatomic) NSString *eventRelayBaseUrl;
@property (readonly, nonatomic) char hasEventRelayBatchBaseUrl;
@property (retain, nonatomic) NSString *eventRelayBatchBaseUrl;
@property (readonly, nonatomic) char hasNewsNotificationsBaseUrl;
@property (retain, nonatomic) NSString *newsNotificationsBaseUrl;
@property (readonly, nonatomic) char hasAnalyticsEndpointUrlsJson;
@property (retain, nonatomic) NSString *analyticsEndpointUrlsJson;
@property (readonly, nonatomic) char hasAnalyticsEnvelopeContentTypePropJson;
@property (retain, nonatomic) NSString *analyticsEnvelopeContentTypePropJson;
@property (readonly, nonatomic) char hasStaticAssetBaseUrl;
@property (retain, nonatomic) NSString *staticAssetBaseUrl;
@property (readonly, nonatomic) char hasRemoteDataSourceBaseUrl;
@property (retain, nonatomic) NSString *remoteDataSourceBaseUrl;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
