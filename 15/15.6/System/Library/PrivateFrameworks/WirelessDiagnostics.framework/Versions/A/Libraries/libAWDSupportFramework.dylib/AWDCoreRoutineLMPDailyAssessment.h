@interface AWDCoreRoutineLMPDailyAssessment : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char dailyEvents : 1; unsigned char eventsWithLMPLocation : 1; unsigned char eventsWithLocation : 1; unsigned char eventsWithMaybeLocation : 1; unsigned char visitLMPLocation : 1; unsigned char visitLocation : 1; unsigned char visitMaybeLocation : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasDailyEvents;
@property (nonatomic) int dailyEvents;
@property (nonatomic) char hasEventsWithLocation;
@property (nonatomic) int eventsWithLocation;
@property (nonatomic) char hasEventsWithMaybeLocation;
@property (nonatomic) int eventsWithMaybeLocation;
@property (nonatomic) char hasEventsWithLMPLocation;
@property (nonatomic) int eventsWithLMPLocation;
@property (nonatomic) char hasVisitLocation;
@property (nonatomic) int visitLocation;
@property (nonatomic) char hasVisitMaybeLocation;
@property (nonatomic) int visitMaybeLocation;
@property (nonatomic) char hasVisitLMPLocation;
@property (nonatomic) int visitLMPLocation;

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
