@interface AWDWiFiMetricsManagerPowerStatsUpdateEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char associatedSleepDur : 1; unsigned char roamDur : 1; unsigned char totalDur : 1; unsigned char type : 1; unsigned char unassociatedSleepDur : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasType;
@property (nonatomic) unsigned int type;
@property (nonatomic) char hasUnassociatedSleepDur;
@property (nonatomic) unsigned int unassociatedSleepDur;
@property (nonatomic) char hasAssociatedSleepDur;
@property (nonatomic) unsigned int associatedSleepDur;
@property (nonatomic) char hasRoamDur;
@property (nonatomic) unsigned int roamDur;
@property (nonatomic) char hasTotalDur;
@property (nonatomic) unsigned int totalDur;

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
