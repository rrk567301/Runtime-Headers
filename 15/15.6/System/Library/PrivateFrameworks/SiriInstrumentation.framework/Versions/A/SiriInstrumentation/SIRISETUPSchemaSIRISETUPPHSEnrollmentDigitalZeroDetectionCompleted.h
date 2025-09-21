@class NSString, NSData;

@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentDigitalZeroDetectionCompleted : SISchemaInstrumentationMessage {
    struct { unsigned char pageNumber : 1; unsigned char maxNumContinuousZeros : 1; unsigned char maxNumAllowedContinuousZeros : 1; unsigned char isMaxNumContinuousZerosOverThreshold : 1; unsigned char stageStatus : 1; unsigned char speechStartPointDetected : 1; unsigned char twoPassRecognizerUsed : 1; unsigned char didTriggerFirstPass : 1; } _has;
}

@property (nonatomic) unsigned int pageNumber;
@property (nonatomic) char hasPageNumber;
@property (copy, nonatomic) NSString *phraseId;
@property (nonatomic) char hasPhraseId;
@property (nonatomic) unsigned int maxNumContinuousZeros;
@property (nonatomic) char hasMaxNumContinuousZeros;
@property (nonatomic) unsigned int maxNumAllowedContinuousZeros;
@property (nonatomic) char hasMaxNumAllowedContinuousZeros;
@property (nonatomic) char isMaxNumContinuousZerosOverThreshold;
@property (nonatomic) char hasIsMaxNumContinuousZerosOverThreshold;
@property (copy, nonatomic) NSString *vtAssetConfigVersion;
@property (nonatomic) char hasVtAssetConfigVersion;
@property (copy, nonatomic) NSString *locale;
@property (nonatomic) char hasLocale;
@property (nonatomic) int stageStatus;
@property (nonatomic) char hasStageStatus;
@property (nonatomic) char speechStartPointDetected;
@property (nonatomic) char hasSpeechStartPointDetected;
@property (nonatomic) char twoPassRecognizerUsed;
@property (nonatomic) char hasTwoPassRecognizerUsed;
@property (nonatomic) char didTriggerFirstPass;
@property (nonatomic) char hasDidTriggerFirstPass;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDidTriggerFirstPass;
- (void)deleteIsMaxNumContinuousZerosOverThreshold;
- (void)deleteLocale;
- (void)deleteMaxNumAllowedContinuousZeros;
- (void)deleteMaxNumContinuousZeros;
- (void)deletePageNumber;
- (void)deletePhraseId;
- (void)deleteSpeechStartPointDetected;
- (void)deleteStageStatus;
- (void)deleteTwoPassRecognizerUsed;
- (void)deleteVtAssetConfigVersion;
- (id)suppressMessageUnderConditions;

@end
