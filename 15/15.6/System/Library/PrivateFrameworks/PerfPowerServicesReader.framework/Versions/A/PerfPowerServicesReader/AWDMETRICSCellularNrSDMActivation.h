@interface AWDMETRICSCellularNrSDMActivation : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char currentRat : 1; unsigned char deployment : 1; unsigned char durationInPrevState : 1; unsigned char fr : 1; unsigned char newState : 1; unsigned char prevRat : 1; unsigned char prevTriggerCause : 1; unsigned char saVerdict : 1; unsigned char subsId : 1; unsigned char triggerCause : 1; unsigned char apNrRecomm : 1; unsigned char apNrRecommConfFactor : 1; unsigned char fr1MeasDisabled : 1; unsigned char fr2MeasDisabled : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasDeployment;
@property (nonatomic) int deployment;
@property (nonatomic) char hasFr1MeasDisabled;
@property (nonatomic) char fr1MeasDisabled;
@property (nonatomic) char hasFr2MeasDisabled;
@property (nonatomic) char fr2MeasDisabled;
@property (nonatomic) char hasTriggerCause;
@property (nonatomic) int triggerCause;
@property (nonatomic) char hasPrevTriggerCause;
@property (nonatomic) int prevTriggerCause;
@property (nonatomic) char hasApNrRecomm;
@property (nonatomic) char apNrRecomm;
@property (nonatomic) char hasApNrRecommConfFactor;
@property (nonatomic) char apNrRecommConfFactor;
@property (nonatomic) char hasDurationInPrevState;
@property (nonatomic) unsigned int durationInPrevState;
@property (nonatomic) char hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) char hasFr;
@property (nonatomic) int fr;
@property (nonatomic) char hasPrevRat;
@property (nonatomic) int prevRat;
@property (nonatomic) char hasCurrentRat;
@property (nonatomic) int currentRat;
@property (nonatomic) char hasNewState;
@property (nonatomic) int newState;
@property (nonatomic) char hasSaVerdict;
@property (nonatomic) int saVerdict;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsDeployment:(id)a0;
- (int)StringAsFr:(id)a0;
- (int)StringAsNewState:(id)a0;
- (int)StringAsCurrentRat:(id)a0;
- (int)StringAsPrevRat:(id)a0;
- (int)StringAsPrevTriggerCause:(id)a0;
- (int)StringAsSaVerdict:(id)a0;
- (int)StringAsTriggerCause:(id)a0;
- (id)currentRatAsString:(int)a0;
- (id)deploymentAsString:(int)a0;
- (id)frAsString:(int)a0;
- (id)newStateAsString:(int)a0;
- (id)prevRatAsString:(int)a0;
- (id)prevTriggerCauseAsString:(int)a0;
- (id)saVerdictAsString:(int)a0;
- (id)triggerCauseAsString:(int)a0;

@end
