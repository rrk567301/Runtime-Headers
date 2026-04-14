@class NSArray, NSData;

@interface JRSchemaRiskTuple : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *risks;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addRisks:(unsigned int)a0;
- (void)clearRisks;
- (void)deleteRisks;
- (unsigned int)risksAtIndex:(unsigned long long)a0;
- (unsigned long long)risksCount;

@end
