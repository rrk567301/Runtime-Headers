@class NSString, NSData;

@interface SMTSchemaSMTAppLanguageModelBuildEnded : SISchemaInstrumentationMessage {
    struct { unsigned char trainingDataSizeInTokens : 1; unsigned char numOutOfVocabulary : 1; unsigned char numCustomPronunciations : 1; unsigned char trainingTimeInNs : 1; unsigned char languageModelFileSizeInBytes : 1; } _has;
}

@property (nonatomic) unsigned long long trainingDataSizeInTokens;
@property (nonatomic) BOOL hasTrainingDataSizeInTokens;
@property (nonatomic) unsigned long long numOutOfVocabulary;
@property (nonatomic) BOOL hasNumOutOfVocabulary;
@property (nonatomic) unsigned long long numCustomPronunciations;
@property (nonatomic) BOOL hasNumCustomPronunciations;
@property (copy, nonatomic) NSString *assetName;
@property (nonatomic) BOOL hasAssetName;
@property (nonatomic) unsigned long long trainingTimeInNs;
@property (nonatomic) BOOL hasTrainingTimeInNs;
@property (nonatomic) unsigned long long languageModelFileSizeInBytes;
@property (nonatomic) BOOL hasLanguageModelFileSizeInBytes;
@property (copy, nonatomic) NSString *artifactFilepath;
@property (nonatomic) BOOL hasArtifactFilepath;
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
- (void)deleteAssetName;
- (void)deleteTrainingDataSizeInTokens;
- (void)deleteNumOutOfVocabulary;
- (void)deleteNumCustomPronunciations;
- (void)deleteTrainingTimeInNs;
- (void)deleteLanguageModelFileSizeInBytes;
- (void)deleteArtifactFilepath;

@end
