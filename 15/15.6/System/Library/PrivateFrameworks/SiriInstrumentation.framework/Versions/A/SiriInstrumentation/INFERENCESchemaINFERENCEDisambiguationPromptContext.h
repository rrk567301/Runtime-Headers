@class NSArray, NSString, NSData;

@interface INFERENCESchemaINFERENCEDisambiguationPromptContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *anonymizedEntitiesPresenteds;
@property (copy, nonatomic) NSString *anonymizedEntitySelected;
@property (nonatomic) char hasAnonymizedEntitySelected;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addAnonymizedEntitiesPresented:(id)a0;
- (id)anonymizedEntitiesPresentedAtIndex:(unsigned long long)a0;
- (unsigned long long)anonymizedEntitiesPresentedCount;
- (void)clearAnonymizedEntitiesPresented;
- (void)deleteAnonymizedEntitiesPresented;
- (void)deleteAnonymizedEntitySelected;
- (id)suppressMessageUnderConditions;

@end
