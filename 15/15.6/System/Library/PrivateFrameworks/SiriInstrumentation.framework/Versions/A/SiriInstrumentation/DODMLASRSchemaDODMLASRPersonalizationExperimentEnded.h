@class DODMLASRSchemaDODMLASRPersonalizedLanguageModelMetrics, NSString, NSArray, NSData, DODMLASRSchemaDODMLASRAudioFileResult;

@interface DODMLASRSchemaDODMLASRPersonalizationExperimentEnded : SISchemaInstrumentationMessage {
    struct { unsigned char numAudioFilesAvailable : 1; unsigned char numAudioFilesSelected : 1; unsigned char experimentStatusCode : 1; unsigned char textFetchDurationInNs : 1; unsigned char textProcessingDurationInNs : 1; unsigned char deviceThermalState : 1; } _has;
}

@property (copy, nonatomic) NSString *datapackVersion;
@property (nonatomic) char hasDatapackVersion;
@property (nonatomic) unsigned int numAudioFilesAvailable;
@property (nonatomic) char hasNumAudioFilesAvailable;
@property (nonatomic) unsigned int numAudioFilesSelected;
@property (nonatomic) char hasNumAudioFilesSelected;
@property (nonatomic) int experimentStatusCode;
@property (nonatomic) char hasExperimentStatusCode;
@property (copy, nonatomic) NSArray *audioFileResults;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRPersonalizedLanguageModelMetrics *personalizedLanguageModelMetrics;
@property (nonatomic) char hasPersonalizedLanguageModelMetrics;
@property (nonatomic) unsigned long long textFetchDurationInNs;
@property (nonatomic) char hasTextFetchDurationInNs;
@property (nonatomic) unsigned long long textProcessingDurationInNs;
@property (nonatomic) char hasTextProcessingDurationInNs;
@property (nonatomic) int deviceThermalState;
@property (nonatomic) char hasDeviceThermalState;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRAudioFileResult *audioFileResult;
@property (nonatomic) char hasAudioFileResult;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addAudioFileResults:(id)a0;
- (id)audioFileResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)audioFileResultsCount;
- (void)clearAudioFileResults;
- (void)deleteAudioFileResult;
- (void)deleteAudioFileResults;
- (void)deleteDatapackVersion;
- (void)deleteDeviceThermalState;
- (void)deleteExperimentStatusCode;
- (void)deleteNumAudioFilesAvailable;
- (void)deleteNumAudioFilesSelected;
- (void)deletePersonalizedLanguageModelMetrics;
- (void)deleteTextFetchDurationInNs;
- (void)deleteTextProcessingDurationInNs;
- (id)suppressMessageUnderConditions;

@end
