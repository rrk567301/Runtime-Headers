@class SISchemaISOLocale, NSData;

@interface ODMSiriSchemaODMDynamicDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char viewMode : 1; unsigned char audioInterface : 1; unsigned char taskType : 1; unsigned char taskAppBundleId : 1; } _has;
}

@property (retain, nonatomic) SISchemaISOLocale *siriInputLocale;
@property (nonatomic) char hasSiriInputLocale;
@property (nonatomic) int viewMode;
@property (nonatomic) char hasViewMode;
@property (nonatomic) int audioInterface;
@property (nonatomic) char hasAudioInterface;
@property (nonatomic) int taskType;
@property (nonatomic) char hasTaskType;
@property (nonatomic) int taskAppBundleId;
@property (nonatomic) char hasTaskAppBundleId;
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
- (void)deleteAudioInterface;
- (void)deleteSiriInputLocale;
- (void)deleteTaskAppBundleId;
- (void)deleteTaskType;
- (void)deleteViewMode;
- (id)suppressMessageUnderConditions;

@end
