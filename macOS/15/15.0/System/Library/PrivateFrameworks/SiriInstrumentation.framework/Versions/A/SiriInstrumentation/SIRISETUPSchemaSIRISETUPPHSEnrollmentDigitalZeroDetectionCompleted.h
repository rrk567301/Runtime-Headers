@class NSString, NSData;

@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentDigitalZeroDetectionCompleted : SISchemaInstrumentationMessage {
    struct { unsigned char pageNumber : 1; unsigned char maxNumContinuousZeros : 1; unsigned char maxNumAllowedContinuousZeros : 1; unsigned char isMaxNumContinuousZerosOverThreshold : 1; unsigned char stageStatus : 1; } _has;
}

@property (nonatomic) unsigned int pageNumber;
@property (nonatomic) BOOL hasPageNumber;
@property (copy, nonatomic) NSString *phraseId;
@property (nonatomic) BOOL hasPhraseId;
@property (nonatomic) unsigned int maxNumContinuousZeros;
@property (nonatomic) BOOL hasMaxNumContinuousZeros;
@property (nonatomic) unsigned int maxNumAllowedContinuousZeros;
@property (nonatomic) BOOL hasMaxNumAllowedContinuousZeros;
@property (nonatomic) BOOL isMaxNumContinuousZerosOverThreshold;
@property (nonatomic) BOOL hasIsMaxNumContinuousZerosOverThreshold;
@property (copy, nonatomic) NSString *vtAssetConfigVersion;
@property (nonatomic) BOOL hasVtAssetConfigVersion;
@property (copy, nonatomic) NSString *locale;
@property (nonatomic) BOOL hasLocale;
@property (nonatomic) int stageStatus;
@property (nonatomic) BOOL hasStageStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsMaxNumContinuousZerosOverThreshold;
- (void)deleteLocale;
- (void)deleteMaxNumAllowedContinuousZeros;
- (void)deleteMaxNumContinuousZeros;
- (void)deletePageNumber;
- (void)deletePhraseId;
- (void)deleteStageStatus;
- (void)deleteVtAssetConfigVersion;
- (id)suppressMessageUnderConditions;

@end
