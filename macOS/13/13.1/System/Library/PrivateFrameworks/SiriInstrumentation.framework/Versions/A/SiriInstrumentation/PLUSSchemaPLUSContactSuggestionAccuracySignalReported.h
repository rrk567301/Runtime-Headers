@class PLUSSchemaPLUSSuggestionAccuracySignal, NSData, SISchemaUUID;

@interface PLUSSchemaPLUSContactSuggestionAccuracySignalReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originalPlusId;
@property (nonatomic) BOOL hasOriginalPlusId;
@property (retain, nonatomic) SISchemaUUID *suggestionId;
@property (nonatomic) BOOL hasSuggestionId;
@property (retain, nonatomic) PLUSSchemaPLUSSuggestionAccuracySignal *accuracySignal;
@property (nonatomic) BOOL hasAccuracySignal;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteOriginalPlusId;
- (void)deleteSuggestionId;
- (void)deleteAccuracySignal;

@end
