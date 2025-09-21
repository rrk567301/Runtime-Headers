@interface AWDMETRICSKCellularPowerLogSystemEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char mode : 1; unsigned char prevMode : 1; unsigned char prevRat : 1; unsigned char prevStateDurationMs : 1; unsigned char rat : 1; unsigned char subsId : 1; unsigned char oosPlmnSearchTimerActive : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) char hasOosPlmnSearchTimerActive;
@property (nonatomic) char oosPlmnSearchTimerActive;
@property (nonatomic) char hasMode;
@property (nonatomic) int mode;
@property (nonatomic) char hasRat;
@property (nonatomic) int rat;
@property (nonatomic) char hasPrevMode;
@property (nonatomic) int prevMode;
@property (nonatomic) char hasPrevRat;
@property (nonatomic) int prevRat;
@property (nonatomic) char hasPrevStateDurationMs;
@property (nonatomic) unsigned int prevStateDurationMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsMode:(id)a0;
- (id)modeAsString:(int)a0;
- (int)StringAsPrevMode:(id)a0;
- (int)StringAsPrevRat:(id)a0;
- (int)StringAsRat:(id)a0;
- (id)prevModeAsString:(int)a0;
- (id)prevRatAsString:(int)a0;
- (id)ratAsString:(int)a0;

@end
