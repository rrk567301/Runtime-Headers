@class PLUSSchemaPLUSSuggestionAccuracySignal, NSData, SISchemaUUID;

@interface PLUSSchemaPLUSContactSuggestionAccuracySignalReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originalPlusId;
@property (nonatomic) char hasOriginalPlusId;
@property (retain, nonatomic) SISchemaUUID *suggestionId;
@property (nonatomic) char hasSuggestionId;
@property (retain, nonatomic) PLUSSchemaPLUSSuggestionAccuracySignal *accuracySignal;
@property (nonatomic) char hasAccuracySignal;
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
- (void)deleteAccuracySignal;
- (void)deleteOriginalPlusId;
- (void)deleteSuggestionId;
- (id)suppressMessageUnderConditions;

@end
