@class NSString, NSData, SISchemaUUID;

@interface ASRSchemaASRStarted : SISchemaInstrumentationMessage {
    struct { unsigned char task : 1; unsigned char modelLocale : 1; unsigned char isHighQualityAsset : 1; unsigned char geoLanguageModelLoaded : 1; unsigned char speechProfileAgeInNs : 1; unsigned char startState : 1; unsigned char atypicalSpeechEnabled : 1; unsigned char isEmptyTextField : 1; } _has;
}

@property (nonatomic) int task;
@property (nonatomic) char hasTask;
@property (nonatomic) int modelLocale;
@property (nonatomic) char hasModelLocale;
@property (copy, nonatomic) NSString *datapackVersion;
@property (nonatomic) char hasDatapackVersion;
@property (nonatomic) char isHighQualityAsset;
@property (nonatomic) char hasIsHighQualityAsset;
@property (copy, nonatomic) NSString *hammerVersion;
@property (nonatomic) char hasHammerVersion;
@property (copy, nonatomic) NSString *geoLanguageModelRegion;
@property (nonatomic) char hasGeoLanguageModelRegion;
@property (nonatomic) char geoLanguageModelLoaded;
@property (nonatomic) char hasGeoLanguageModelLoaded;
@property (nonatomic) unsigned long long speechProfileAgeInNs;
@property (nonatomic) char hasSpeechProfileAgeInNs;
@property (retain, nonatomic) SISchemaUUID *dictationUiInteractionId;
@property (nonatomic) char hasDictationUiInteractionId;
@property (copy, nonatomic) NSString *portraitExperimentVariantName;
@property (nonatomic) char hasPortraitExperimentVariantName;
@property (nonatomic) int startState;
@property (nonatomic) char hasStartState;
@property (nonatomic) char atypicalSpeechEnabled;
@property (nonatomic) char hasAtypicalSpeechEnabled;
@property (nonatomic) char isEmptyTextField;
@property (nonatomic) char hasIsEmptyTextField;
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
- (void)deleteAtypicalSpeechEnabled;
- (void)deleteDatapackVersion;
- (void)deleteDictationUiInteractionId;
- (void)deleteGeoLanguageModelLoaded;
- (void)deleteGeoLanguageModelRegion;
- (void)deleteHammerVersion;
- (void)deleteIsEmptyTextField;
- (void)deleteIsHighQualityAsset;
- (void)deleteModelLocale;
- (void)deletePortraitExperimentVariantName;
- (void)deleteSpeechProfileAgeInNs;
- (void)deleteStartState;
- (void)deleteTask;
- (id)suppressMessageUnderConditions;

@end
