@class NSString;

@interface ATXCandidateRelevanceModelPBCandidateMetrics : PBCodable <NSCopying> {
    struct { unsigned char candidateNumberOfDaysWithPositiveSamples : 1; unsigned char candidateNumberOfModelWeights : 1; unsigned char candidateNumberOfNonZeroModelWeights : 1; unsigned char candidateNumberOfPositiveSamples : 1; unsigned char candidateNumberOfSamples : 1; unsigned char candidateShadowF1 : 1; unsigned char candidateShadowLaunchPercentage : 1; unsigned char candidateShadowPrecision : 1; unsigned char candidateShadowRecall : 1; unsigned char candidateShadowShownPercentage : 1; unsigned char candidateUIF1 : 1; unsigned char candidateUILaunchPercentage : 1; unsigned char candidateUIPrecision : 1; unsigned char candidateUIRecall : 1; unsigned char candidateUIShownPercentage : 1; } _has;
}

@property (nonatomic) char hasCandidateNumberOfPositiveSamples;
@property (nonatomic) unsigned int candidateNumberOfPositiveSamples;
@property (nonatomic) char hasCandidateNumberOfSamples;
@property (nonatomic) unsigned int candidateNumberOfSamples;
@property (nonatomic) char hasCandidateNumberOfDaysWithPositiveSamples;
@property (nonatomic) unsigned int candidateNumberOfDaysWithPositiveSamples;
@property (nonatomic) char hasCandidateNumberOfModelWeights;
@property (nonatomic) unsigned int candidateNumberOfModelWeights;
@property (nonatomic) char hasCandidateNumberOfNonZeroModelWeights;
@property (nonatomic) unsigned int candidateNumberOfNonZeroModelWeights;
@property (nonatomic) char hasCandidateShadowLaunchPercentage;
@property (nonatomic) float candidateShadowLaunchPercentage;
@property (nonatomic) char hasCandidateShadowShownPercentage;
@property (nonatomic) float candidateShadowShownPercentage;
@property (nonatomic) char hasCandidateShadowPrecision;
@property (nonatomic) float candidateShadowPrecision;
@property (nonatomic) char hasCandidateShadowRecall;
@property (nonatomic) float candidateShadowRecall;
@property (nonatomic) char hasCandidateShadowF1;
@property (nonatomic) float candidateShadowF1;
@property (nonatomic) char hasCandidateUILaunchPercentage;
@property (nonatomic) float candidateUILaunchPercentage;
@property (nonatomic) char hasCandidateUIShownPercentage;
@property (nonatomic) float candidateUIShownPercentage;
@property (nonatomic) char hasCandidateUIPrecision;
@property (nonatomic) float candidateUIPrecision;
@property (nonatomic) char hasCandidateUIRecall;
@property (nonatomic) float candidateUIRecall;
@property (nonatomic) char hasCandidateUIF1;
@property (nonatomic) float candidateUIF1;
@property (readonly, nonatomic) char hasCandidateIdentifier;
@property (retain, nonatomic) NSString *candidateIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
