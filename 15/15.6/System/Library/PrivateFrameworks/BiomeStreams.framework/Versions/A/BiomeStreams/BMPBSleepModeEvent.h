@interface BMPBSleepModeEvent : PBCodable <NSCopying> {
    struct { unsigned char expectedEndDate : 1; unsigned char sleepModeChangeReason : 1; unsigned char sleepModeState : 1; } _has;
}

@property (nonatomic) char hasSleepModeState;
@property (nonatomic) int sleepModeState;
@property (nonatomic) char hasSleepModeChangeReason;
@property (nonatomic) int sleepModeChangeReason;
@property (nonatomic) char hasExpectedEndDate;
@property (nonatomic) double expectedEndDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSleepModeChangeReason:(id)a0;
- (int)StringAsSleepModeState:(id)a0;
- (id)sleepModeChangeReasonAsString:(int)a0;
- (id)sleepModeStateAsString:(int)a0;

@end
