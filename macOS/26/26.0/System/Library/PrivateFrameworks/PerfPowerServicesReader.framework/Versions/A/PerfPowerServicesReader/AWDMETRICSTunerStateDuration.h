@interface AWDMETRICSTunerStateDuration : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char ftQualInd : 1; unsigned char port : 1; unsigned char rat : 1; unsigned char scenarioDecision : 1; unsigned char txBand : 1; unsigned char workMode : 1; } _has;
}

@property (nonatomic) BOOL hasRat;
@property (nonatomic) int rat;
@property (nonatomic) BOOL hasTxBand;
@property (nonatomic) int txBand;
@property (nonatomic) BOOL hasPort;
@property (nonatomic) unsigned int port;
@property (nonatomic) BOOL hasScenarioDecision;
@property (nonatomic) int scenarioDecision;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasWorkMode;
@property (nonatomic) unsigned int workMode;
@property (nonatomic) BOOL hasFtQualInd;
@property (nonatomic) unsigned int ftQualInd;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)StringAsTxBand:(id)a0;
- (int)StringAsScenarioDecision:(id)a0;
- (int)StringAsRat:(id)a0;
- (id)txBandAsString:(int)a0;
- (id)ratAsString:(int)a0;
- (id)scenarioDecisionAsString:(int)a0;

@end
