@class NSArray, NSData;

@interface DialogEngineSchemaDLGENGNamedEntitiesUsed : SISchemaInstrumentationMessage {
    struct { unsigned char catId : 1; } _has;
}

@property (nonatomic) int catId;
@property (nonatomic) BOOL hasCatId;
@property (copy, nonatomic) NSArray *namedEntities;
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
- (void)addNamedEntities:(id)a0;
- (void)clearNamedEntities;
- (id)namedEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)namedEntitiesCount;
- (void)deleteCatId;
- (void)deleteNamedEntities;

@end
