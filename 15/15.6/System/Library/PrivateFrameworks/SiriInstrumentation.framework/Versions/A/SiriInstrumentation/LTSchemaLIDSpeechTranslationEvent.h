@class NSString, LTSchemaLocaleConfidence, NSData;

@interface LTSchemaLIDSpeechTranslationEvent : SISchemaInstrumentationMessage {
    struct { unsigned char responseTimeMs : 1; unsigned char speechElapsedTime : 1; } _has;
}

@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) char hasRequestID;
@property (retain, nonatomic) LTSchemaLocaleConfidence *selectedLocale;
@property (nonatomic) char hasSelectedLocale;
@property (retain, nonatomic) LTSchemaLocaleConfidence *alternateLocale;
@property (nonatomic) char hasAlternateLocale;
@property (copy, nonatomic) NSString *userSelectedLocale;
@property (nonatomic) char hasUserSelectedLocale;
@property (nonatomic) unsigned int responseTimeMs;
@property (nonatomic) char hasResponseTimeMs;
@property (nonatomic) unsigned int speechElapsedTime;
@property (nonatomic) char hasSpeechElapsedTime;
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
- (void)deleteRequestID;
- (void)deleteAlternateLocale;
- (void)deleteResponseTimeMs;
- (void)deleteSelectedLocale;
- (void)deleteSpeechElapsedTime;
- (void)deleteUserSelectedLocale;
- (id)suppressMessageUnderConditions;

@end
