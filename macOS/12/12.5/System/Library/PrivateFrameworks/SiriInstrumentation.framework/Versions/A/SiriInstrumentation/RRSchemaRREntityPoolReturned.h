@class NSArray, NSData;

@interface RRSchemaRREntityPoolReturned : SISchemaInstrumentationMessage {
    struct { unsigned char entityCount : 1; } _has;
}

@property (copy, nonatomic) NSArray *candidateEntities;
@property (nonatomic) unsigned int entityCount;
@property (nonatomic) BOOL hasEntityCount;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearCandidateEntities;
- (void)addCandidateEntities:(id)a0;
- (void)deleteCandidateEntities;
- (unsigned long long)candidateEntitiesCount;
- (id)candidateEntitiesAtIndex:(unsigned long long)a0;
- (void)deleteEntityCount;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
