@class NSArray, NSData;

@interface PEGASUSSchemaPEGASUSMapsExecutionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *mapsEntities;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addMapsEntities:(id)a0;
- (void)clearMapsEntities;
- (void)deleteMapsEntities;
- (id)mapsEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)mapsEntitiesCount;

@end
