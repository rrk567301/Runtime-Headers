@class NSString, NSData;

@interface LTSchemaMTSpeechTranslationEvent : SISchemaInstrumentationMessage {
    struct { unsigned char responseTimeMs : 1; } _has;
}

@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) char hasRequestID;
@property (copy, nonatomic) NSString *selectedLocale;
@property (nonatomic) char hasSelectedLocale;
@property (nonatomic) int responseTimeMs;
@property (nonatomic) char hasResponseTimeMs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRequestID;
- (void)deleteResponseTimeMs;
- (void)deleteSelectedLocale;
- (id)suppressMessageUnderConditions;

@end
