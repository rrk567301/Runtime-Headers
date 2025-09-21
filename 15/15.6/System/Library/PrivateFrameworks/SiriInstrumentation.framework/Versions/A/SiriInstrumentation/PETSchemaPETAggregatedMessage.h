@class PETSchemaPETDistribution, NSData, PETSchemaPETAggregationKey;

@interface PETSchemaPETAggregatedMessage : SISchemaInstrumentationMessage {
    struct { unsigned char count : 1; } _has;
}

@property (retain, nonatomic) PETSchemaPETAggregationKey *key;
@property (nonatomic) char hasKey;
@property (nonatomic) unsigned int count;
@property (nonatomic) char hasCount;
@property (retain, nonatomic) PETSchemaPETDistribution *distribution;
@property (nonatomic) char hasDistribution;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteKey;
- (id)initWithJSON:(id)a0;
- (void)deleteCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDistribution;
- (id)suppressMessageUnderConditions;

@end
