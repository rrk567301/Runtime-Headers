@class NSArray, NSData;

@interface SISchemaDictationContentEdited : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (copy, nonatomic) NSArray *autoPunctuationEdits;
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
- (void)deleteExists;
- (void)clearAutoPunctuationEdits;
- (void)deleteAutoPunctuationEdits;
- (void)addAutoPunctuationEdits:(id)a0;
- (unsigned long long)autoPunctuationEditsCount;
- (id)autoPunctuationEditsAtIndex:(unsigned long long)a0;

@end
