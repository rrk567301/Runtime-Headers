@class NSArray, NSData;

@interface JRSchemaRiskTuple : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *risks;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)addRisks:(unsigned int)a0;
- (void)clearRisks;
- (void)deleteRisks;
- (unsigned int)risksAtIndex:(unsigned long long)a0;
- (unsigned long long)risksCount;

@end
