@class SISchemaISOLocale, NSData;

@interface ODMSiriSchemaODMDynamicDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char viewMode : 1; unsigned char audioInterface : 1; unsigned char taskType : 1; unsigned char taskAppBundleId : 1; } _has;
}

@property (retain, nonatomic) SISchemaISOLocale *siriInputLocale;
@property (nonatomic) BOOL hasSiriInputLocale;
@property (nonatomic) int viewMode;
@property (nonatomic) BOOL hasViewMode;
@property (nonatomic) int audioInterface;
@property (nonatomic) BOOL hasAudioInterface;
@property (nonatomic) int taskType;
@property (nonatomic) BOOL hasTaskType;
@property (nonatomic) int taskAppBundleId;
@property (nonatomic) BOOL hasTaskAppBundleId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteAudioInterface;
- (void)deleteSiriInputLocale;
- (void)deleteTaskAppBundleId;
- (void)deleteTaskType;
- (void)deleteViewMode;

@end
