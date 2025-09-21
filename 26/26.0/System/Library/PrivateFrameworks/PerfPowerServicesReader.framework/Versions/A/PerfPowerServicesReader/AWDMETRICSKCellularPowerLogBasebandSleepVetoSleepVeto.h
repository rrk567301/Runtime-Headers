@class NSString;

@interface AWDMETRICSKCellularPowerLogBasebandSleepVetoSleepVeto : PBCodable <NSCopying> {
    struct { unsigned char durationMs : 1; unsigned char state : 1; unsigned char subsystem : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBlockerName;
@property (retain, nonatomic) NSString *blockerName;
@property (nonatomic) BOOL hasSubsystem;
@property (nonatomic) int subsystem;
@property (nonatomic) BOOL hasState;
@property (nonatomic) int state;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) unsigned int durationMs;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (id)stateAsString:(int)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsState:(id)a0;
- (int)StringAsSubsystem:(id)a0;
- (id)subsystemAsString:(int)a0;

@end
