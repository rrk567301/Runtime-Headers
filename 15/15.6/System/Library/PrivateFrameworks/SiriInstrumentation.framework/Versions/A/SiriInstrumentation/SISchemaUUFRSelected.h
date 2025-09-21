@class SISchemaUUFRSnippetViewSelected, SISchemaUUFRCasinoCardSelected, NSData;

@interface SISchemaUUFRSelected : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUFRCasinoCardSelected *casinoCardSelected;
@property (nonatomic) char hasCasinoCardSelected;
@property (retain, nonatomic) SISchemaUUFRSnippetViewSelected *snippetViewSelected;
@property (nonatomic) char hasSnippetViewSelected;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichSelectionevent;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCasinoCardSelected;
- (void)deleteSnippetViewSelected;
- (id)suppressMessageUnderConditions;

@end
