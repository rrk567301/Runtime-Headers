@class SISchemaISOLocale, NSData;

@interface ODDSiriSchemaODDDeviceAndUsageDynamicDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char viewInterface : 1; unsigned char audioInterface : 1; unsigned char appTaskType : 1; unsigned char taskAppBundleId : 1; } _has;
}

@property (retain, nonatomic) SISchemaISOLocale *siriInputLocale;
@property (nonatomic) char hasSiriInputLocale;
@property (nonatomic) int viewInterface;
@property (nonatomic) char hasViewInterface;
@property (nonatomic) int audioInterface;
@property (nonatomic) char hasAudioInterface;
@property (nonatomic) int appTaskType;
@property (nonatomic) char hasAppTaskType;
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
- (void)deleteAppTaskType;
- (void)deleteAudioInterface;
- (void)deleteSiriInputLocale;
- (void)deleteTaskAppBundleId;
- (void)deleteViewInterface;
- (id)suppressMessageUnderConditions;

@end
