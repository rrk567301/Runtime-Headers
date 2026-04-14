@class NSArray, NSString, NSData;

@interface INFERENCESchemaINFERENCEDisambiguationPromptContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *anonymizedEntitiesPresenteds;
@property (copy, nonatomic) NSString *anonymizedEntitySelected;
@property (nonatomic) BOOL hasAnonymizedEntitySelected;
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
- (void)clearAnonymizedEntitiesPresented;
- (void)deleteAnonymizedEntitiesPresented;
- (void)addAnonymizedEntitiesPresented:(id)a0;
- (unsigned long long)anonymizedEntitiesPresentedCount;
- (id)anonymizedEntitiesPresentedAtIndex:(unsigned long long)a0;
- (void)deleteAnonymizedEntitySelected;

@end
