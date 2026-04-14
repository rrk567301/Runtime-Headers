@class WiFiAnalyticsAWDWiFiNWActivityMpduWME;

@interface WiFiAnalyticsAWDWiFiNWActivityMpduLost : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBALost;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityMpduWME *bALost;
@property (readonly, nonatomic) BOOL hasNonBALost;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityMpduWME *nonBALost;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
