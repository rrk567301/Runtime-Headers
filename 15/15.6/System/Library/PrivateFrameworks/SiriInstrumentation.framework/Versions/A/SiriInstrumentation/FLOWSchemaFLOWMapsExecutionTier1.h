@class NSArray, NSData;

@interface FLOWSchemaFLOWMapsExecutionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *mapsEntities;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addMapsEntities:(id)a0;
- (void)clearMapsEntities;
- (void)deleteMapsEntities;
- (id)mapsEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)mapsEntitiesCount;
- (id)suppressMessageUnderConditions;

@end
