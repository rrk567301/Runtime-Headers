@class NSArray, NSData;

@interface FLOWSchemaFLOWMapsExecutionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *mapsEntities;
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
- (void)clearMapsEntities;
- (void)deleteMapsEntities;
- (void)addMapsEntities:(id)a0;
- (unsigned long long)mapsEntitiesCount;
- (id)mapsEntitiesAtIndex:(unsigned long long)a0;

@end
