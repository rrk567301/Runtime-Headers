@class NSString, NSData;

@interface LTSchemaDisambiguationSpeechTranslationEvent : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) char hasRequestID;
@property (copy, nonatomic) NSString *sourceLocale;
@property (nonatomic) char hasSourceLocale;
@property (copy, nonatomic) NSString *senseID;
@property (nonatomic) char hasSenseID;
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
- (void)deleteSenseID;
- (void)deleteSourceLocale;
- (id)suppressMessageUnderConditions;

@end
