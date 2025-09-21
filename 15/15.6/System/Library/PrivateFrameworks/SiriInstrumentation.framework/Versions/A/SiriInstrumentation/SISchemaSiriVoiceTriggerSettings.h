@class NSData;

@interface SISchemaSiriVoiceTriggerSettings : SISchemaInstrumentationMessage {
    struct { unsigned char isHeySiriTriggerPhraseEnabled : 1; unsigned char isJustSiriTriggerPhraseEnabled : 1; unsigned char isEnrollmentReprompted : 1; } _has;
}

@property (nonatomic) char isHeySiriTriggerPhraseEnabled;
@property (nonatomic) char hasIsHeySiriTriggerPhraseEnabled;
@property (nonatomic) char isJustSiriTriggerPhraseEnabled;
@property (nonatomic) char hasIsJustSiriTriggerPhraseEnabled;
@property (nonatomic) char isEnrollmentReprompted;
@property (nonatomic) char hasIsEnrollmentReprompted;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsEnrollmentReprompted;
- (void)deleteIsHeySiriTriggerPhraseEnabled;
- (void)deleteIsJustSiriTriggerPhraseEnabled;
- (id)suppressMessageUnderConditions;

@end
