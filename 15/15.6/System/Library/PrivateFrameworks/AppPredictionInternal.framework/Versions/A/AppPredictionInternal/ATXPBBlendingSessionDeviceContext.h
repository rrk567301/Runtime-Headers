@interface ATXPBBlendingSessionDeviceContext : PBCodable <NSCopying> {
    struct { unsigned char secondsBeforeBlendingUpdate : 1; unsigned char currentLOIType : 1; unsigned char dayOfWeek : 1; unsigned char timeOfDay : 1; unsigned char dateInWeekend : 1; unsigned char lastUnlockMoreThan1HourAgo : 1; unsigned char lastUnlockMoreThan30MinutesAgo : 1; } _has;
}

@property (nonatomic) char hasTimeOfDay;
@property (nonatomic) unsigned int timeOfDay;
@property (nonatomic) char hasDayOfWeek;
@property (nonatomic) unsigned int dayOfWeek;
@property (nonatomic) char hasDateInWeekend;
@property (nonatomic) char dateInWeekend;
@property (nonatomic) char hasLastUnlockMoreThan30MinutesAgo;
@property (nonatomic) char lastUnlockMoreThan30MinutesAgo;
@property (nonatomic) char hasLastUnlockMoreThan1HourAgo;
@property (nonatomic) char lastUnlockMoreThan1HourAgo;
@property (nonatomic) char hasCurrentLOIType;
@property (nonatomic) int currentLOIType;
@property (nonatomic) char hasSecondsBeforeBlendingUpdate;
@property (nonatomic) double secondsBeforeBlendingUpdate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsCurrentLOIType:(id)a0;
- (id)currentLOITypeAsString:(int)a0;

@end
