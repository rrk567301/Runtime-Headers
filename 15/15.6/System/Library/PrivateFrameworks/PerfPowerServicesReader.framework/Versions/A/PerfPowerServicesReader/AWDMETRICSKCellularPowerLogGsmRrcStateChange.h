@interface AWDMETRICSKCellularPowerLogGsmRrcStateChange : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char cause : 1; unsigned char prevState : 1; unsigned char prevStateDurMs : 1; unsigned char state : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasState;
@property (nonatomic) int state;
@property (nonatomic) char hasPrevState;
@property (nonatomic) int prevState;
@property (nonatomic) char hasPrevStateDurMs;
@property (nonatomic) unsigned int prevStateDurMs;
@property (nonatomic) char hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) char hasCause;
@property (nonatomic) int cause;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsState:(id)a0;
- (id)stateAsString:(int)a0;
- (int)StringAsCause:(id)a0;
- (int)StringAsPrevState:(id)a0;
- (id)causeAsString:(int)a0;
- (id)prevStateAsString:(int)a0;

@end
