@class NSArray, NSData;

@interface DialogEngineSchemaDLGENGNamedEntitiesUsed : SISchemaInstrumentationMessage {
    struct { unsigned char catId : 1; } _has;
}

@property (nonatomic) int catId;
@property (nonatomic) BOOL hasCatId;
@property (copy, nonatomic) NSArray *namedEntities;
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
- (void)addNamedEntities:(id)a0;
- (void)clearNamedEntities;
- (id)namedEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)namedEntitiesCount;
- (void)deleteCatId;
- (void)deleteNamedEntities;

@end
