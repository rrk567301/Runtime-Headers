@class NSData, ORCHSchemaORCHMemoryUsageMetadata;

@interface ORCHSchemaORCHResourceUtilizationMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) ORCHSchemaORCHMemoryUsageMetadata *memoryUsageMetadata;
@property (nonatomic) BOOL hasMemoryUsageMetadata;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMemoryUsageMetadata;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
