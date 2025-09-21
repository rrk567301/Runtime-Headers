@interface AWDMETRICSKCellularPowerLogNrSaRrcStateChange : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char band : 1; unsigned char cause : 1; unsigned char deployment : 1; unsigned char fr : 1; unsigned char prevState : 1; unsigned char prevStateDurMs : 1; unsigned char state : 1; unsigned char subsId : 1; } _has;
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
@property (nonatomic) char hasFr;
@property (nonatomic) int fr;
@property (nonatomic) char hasBand;
@property (nonatomic) unsigned int band;
@property (nonatomic) char hasDeployment;
@property (nonatomic) int deployment;

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
- (int)StringAsDeployment:(id)a0;
- (int)StringAsFr:(id)a0;
- (int)StringAsPrevState:(id)a0;
- (id)causeAsString:(int)a0;
- (id)deploymentAsString:(int)a0;
- (id)frAsString:(int)a0;
- (id)prevStateAsString:(int)a0;

@end
