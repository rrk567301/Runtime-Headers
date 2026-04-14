@class WiFiAnalyticsAWDWiFiNWActivityMpduWME;

@interface WiFiAnalyticsAWDWiFiNWActivityMpduLost : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBALost;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityMpduWME *bALost;
@property (readonly, nonatomic) BOOL hasNonBALost;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityMpduWME *nonBALost;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
