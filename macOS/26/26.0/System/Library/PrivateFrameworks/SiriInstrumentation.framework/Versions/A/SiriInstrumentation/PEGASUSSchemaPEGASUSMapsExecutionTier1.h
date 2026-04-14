@class NSArray, NSData;

@interface PEGASUSSchemaPEGASUSMapsExecutionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *mapsEntities;
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
- (void)addMapsEntities:(id)a0;
- (void)clearMapsEntities;
- (void)deleteMapsEntities;
- (id)mapsEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)mapsEntitiesCount;

@end
