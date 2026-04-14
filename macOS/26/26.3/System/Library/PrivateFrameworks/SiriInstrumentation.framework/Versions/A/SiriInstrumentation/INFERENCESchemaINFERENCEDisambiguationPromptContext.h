@class NSArray, NSString, NSData;

@interface INFERENCESchemaINFERENCEDisambiguationPromptContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *anonymizedEntitiesPresenteds;
@property (copy, nonatomic) NSString *anonymizedEntitySelected;
@property (nonatomic) BOOL hasAnonymizedEntitySelected;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addAnonymizedEntitiesPresented:(id)a0;
- (id)anonymizedEntitiesPresentedAtIndex:(unsigned long long)a0;
- (unsigned long long)anonymizedEntitiesPresentedCount;
- (void)clearAnonymizedEntitiesPresented;
- (void)deleteAnonymizedEntitiesPresented;
- (void)deleteAnonymizedEntitySelected;

@end
