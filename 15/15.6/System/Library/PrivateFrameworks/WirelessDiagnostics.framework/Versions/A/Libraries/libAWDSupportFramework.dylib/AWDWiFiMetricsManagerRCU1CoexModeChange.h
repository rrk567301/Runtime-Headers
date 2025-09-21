@interface AWDWiFiMetricsManagerRCU1CoexModeChange : PBCodable <NSCopying> {
    struct { unsigned char denyDuration : 1; unsigned char disableDuration : 1; unsigned char powerOnDuration : 1; unsigned char tddDuration : 1; unsigned char timestamp : 1; unsigned char channelNum : 1; unsigned char fwDenyCount : 1; unsigned char offWifiMode : 1; unsigned char onWifiMode : 1; unsigned char offAirplayMode : 1; unsigned char onAirplayMode : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasChannelNum;
@property (nonatomic) unsigned int channelNum;
@property (nonatomic) char hasOnWifiMode;
@property (nonatomic) unsigned int onWifiMode;
@property (nonatomic) char hasOffWifiMode;
@property (nonatomic) unsigned int offWifiMode;
@property (nonatomic) char hasOnAirplayMode;
@property (nonatomic) char onAirplayMode;
@property (nonatomic) char hasOffAirplayMode;
@property (nonatomic) char offAirplayMode;
@property (nonatomic) char hasPowerOnDuration;
@property (nonatomic) unsigned long long powerOnDuration;
@property (nonatomic) char hasDisableDuration;
@property (nonatomic) unsigned long long disableDuration;
@property (nonatomic) char hasDenyDuration;
@property (nonatomic) unsigned long long denyDuration;
@property (nonatomic) char hasTddDuration;
@property (nonatomic) unsigned long long tddDuration;
@property (nonatomic) char hasFwDenyCount;
@property (nonatomic) unsigned int fwDenyCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
