@class NSString, MTSchemaMTLocalePair, NSData;

@interface MTSchemaMTAppTimedOutTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *translationPayload;
@property (nonatomic) BOOL hasTranslationPayload;
@property (retain, nonatomic) MTSchemaMTLocalePair *localePair;
@property (nonatomic) BOOL hasLocalePair;
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
- (void)deleteLocalePair;
- (void)deleteTranslationPayload;

@end
