@interface AWDCoreRoutineFMCDailyAssessment : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char assistances : 1; unsigned char assistedParkingEvents : 1; unsigned char duration : 1; unsigned char engagedParkingEvents : 1; unsigned char engagements : 1; unsigned char locationType : 1; unsigned char parkingEvents : 1; unsigned char suppressedParkingEvents : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasDuration;
@property (nonatomic) int duration;
@property (nonatomic) char hasParkingEvents;
@property (nonatomic) int parkingEvents;
@property (nonatomic) char hasEngagedParkingEvents;
@property (nonatomic) int engagedParkingEvents;
@property (nonatomic) char hasAssistedParkingEvents;
@property (nonatomic) int assistedParkingEvents;
@property (nonatomic) char hasEngagements;
@property (nonatomic) int engagements;
@property (nonatomic) char hasAssistances;
@property (nonatomic) int assistances;
@property (nonatomic) char hasSuppressedParkingEvents;
@property (nonatomic) int suppressedParkingEvents;
@property (nonatomic) char hasLocationType;
@property (nonatomic) int locationType;

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
