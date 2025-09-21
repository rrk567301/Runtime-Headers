@class NSString, NSData;

@interface SMTSchemaSMTAppLanguageModelBuildEnded : SISchemaInstrumentationMessage {
    struct { unsigned char trainingDataSizeInTokens : 1; unsigned char numOutOfVocabulary : 1; unsigned char numCustomPronunciations : 1; unsigned char trainingTimeInNs : 1; unsigned char languageModelFileSizeInBytes : 1; } _has;
}

@property (nonatomic) unsigned long long trainingDataSizeInTokens;
@property (nonatomic) char hasTrainingDataSizeInTokens;
@property (nonatomic) unsigned long long numOutOfVocabulary;
@property (nonatomic) char hasNumOutOfVocabulary;
@property (nonatomic) unsigned long long numCustomPronunciations;
@property (nonatomic) char hasNumCustomPronunciations;
@property (copy, nonatomic) NSString *assetName;
@property (nonatomic) char hasAssetName;
@property (nonatomic) unsigned long long trainingTimeInNs;
@property (nonatomic) char hasTrainingTimeInNs;
@property (nonatomic) unsigned long long languageModelFileSizeInBytes;
@property (nonatomic) char hasLanguageModelFileSizeInBytes;
@property (copy, nonatomic) NSString *artifactFilepath;
@property (nonatomic) char hasArtifactFilepath;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAssetName;
- (void)deleteArtifactFilepath;
- (void)deleteLanguageModelFileSizeInBytes;
- (void)deleteNumCustomPronunciations;
- (void)deleteNumOutOfVocabulary;
- (void)deleteTrainingDataSizeInTokens;
- (void)deleteTrainingTimeInNs;
- (id)suppressMessageUnderConditions;

@end
