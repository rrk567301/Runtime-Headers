@class NSData;

@interface SISchemaSiriVoiceTriggerSettings : SISchemaInstrumentationMessage {
    struct { unsigned char isHeySiriTriggerPhraseEnabled : 1; unsigned char isJustSiriTriggerPhraseEnabled : 1; unsigned char isEnrollmentReprompted : 1; } _has;
}

@property (nonatomic) BOOL isHeySiriTriggerPhraseEnabled;
@property (nonatomic) BOOL hasIsHeySiriTriggerPhraseEnabled;
@property (nonatomic) BOOL isJustSiriTriggerPhraseEnabled;
@property (nonatomic) BOOL hasIsJustSiriTriggerPhraseEnabled;
@property (nonatomic) BOOL isEnrollmentReprompted;
@property (nonatomic) BOOL hasIsEnrollmentReprompted;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteIsEnrollmentReprompted;
- (void)deleteIsHeySiriTriggerPhraseEnabled;
- (void)deleteIsJustSiriTriggerPhraseEnabled;

@end
