@class NSArray, NSData;

@interface PEGASUSSchemaPEGASUSMapsExecutionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *mapsEntities;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addMapsEntities:(id)a0;
- (void)clearMapsEntities;
- (void)deleteMapsEntities;
- (id)mapsEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)mapsEntitiesCount;

@end
