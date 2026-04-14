@class NSString, LTSchemaLocaleConfidence, NSData;

@interface LTSchemaLIDSpeechTranslationEvent : SISchemaInstrumentationMessage {
    struct { unsigned char responseTimeMs : 1; unsigned char speechElapsedTime : 1; } _has;
}

@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) BOOL hasRequestID;
@property (retain, nonatomic) LTSchemaLocaleConfidence *selectedLocale;
@property (nonatomic) BOOL hasSelectedLocale;
@property (retain, nonatomic) LTSchemaLocaleConfidence *alternateLocale;
@property (nonatomic) BOOL hasAlternateLocale;
@property (copy, nonatomic) NSString *userSelectedLocale;
@property (nonatomic) BOOL hasUserSelectedLocale;
@property (nonatomic) unsigned int responseTimeMs;
@property (nonatomic) BOOL hasResponseTimeMs;
@property (nonatomic) unsigned int speechElapsedTime;
@property (nonatomic) BOOL hasSpeechElapsedTime;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRequestID;
- (void)deleteAlternateLocale;
- (void)deleteResponseTimeMs;
- (void)deleteSelectedLocale;
- (void)deleteSpeechElapsedTime;
- (void)deleteUserSelectedLocale;

@end
