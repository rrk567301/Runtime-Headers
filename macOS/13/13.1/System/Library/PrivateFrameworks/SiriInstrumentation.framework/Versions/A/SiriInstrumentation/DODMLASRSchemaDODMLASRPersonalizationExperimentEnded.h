@class DODMLASRSchemaDODMLASRPersonalizedLanguageModelMetrics, NSString, NSArray, NSData;

@interface DODMLASRSchemaDODMLASRPersonalizationExperimentEnded : SISchemaInstrumentationMessage {
    struct { unsigned char numAudioFilesAvailable : 1; unsigned char numAudioFilesSelected : 1; unsigned char experimentStatusCode : 1; unsigned char textFetchDurationInNs : 1; unsigned char textProcessingDurationInNs : 1; unsigned char deviceThermalState : 1; } _has;
}

@property (copy, nonatomic) NSString *datapackVersion;
@property (nonatomic) BOOL hasDatapackVersion;
@property (nonatomic) unsigned int numAudioFilesAvailable;
@property (nonatomic) BOOL hasNumAudioFilesAvailable;
@property (nonatomic) unsigned int numAudioFilesSelected;
@property (nonatomic) BOOL hasNumAudioFilesSelected;
@property (nonatomic) int experimentStatusCode;
@property (nonatomic) BOOL hasExperimentStatusCode;
@property (copy, nonatomic) NSArray *audioFileResults;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRPersonalizedLanguageModelMetrics *personalizedLanguageModelMetrics;
@property (nonatomic) BOOL hasPersonalizedLanguageModelMetrics;
@property (nonatomic) unsigned long long textFetchDurationInNs;
@property (nonatomic) BOOL hasTextFetchDurationInNs;
@property (nonatomic) unsigned long long textProcessingDurationInNs;
@property (nonatomic) BOOL hasTextProcessingDurationInNs;
@property (nonatomic) int deviceThermalState;
@property (nonatomic) BOOL hasDeviceThermalState;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDatapackVersion;
- (void)deleteNumAudioFilesAvailable;
- (void)deleteNumAudioFilesSelected;
- (void)deleteExperimentStatusCode;
- (void)clearAudioFileResults;
- (void)deleteAudioFileResults;
- (void)addAudioFileResults:(id)a0;
- (unsigned long long)audioFileResultsCount;
- (id)audioFileResultsAtIndex:(unsigned long long)a0;
- (void)deletePersonalizedLanguageModelMetrics;
- (void)deleteTextFetchDurationInNs;
- (void)deleteTextProcessingDurationInNs;
- (void)deleteDeviceThermalState;

@end
