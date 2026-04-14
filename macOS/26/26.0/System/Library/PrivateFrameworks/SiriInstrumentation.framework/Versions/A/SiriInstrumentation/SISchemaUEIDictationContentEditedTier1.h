@class NSArray, NSData;

@interface SISchemaUEIDictationContentEditedTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *autoPunctuationEdits;
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
- (void)addAutoPunctuationEdits:(id)a0;
- (id)autoPunctuationEditsAtIndex:(unsigned long long)a0;
- (unsigned long long)autoPunctuationEditsCount;
- (void)clearAutoPunctuationEdits;
- (void)deleteAutoPunctuationEdits;

@end
