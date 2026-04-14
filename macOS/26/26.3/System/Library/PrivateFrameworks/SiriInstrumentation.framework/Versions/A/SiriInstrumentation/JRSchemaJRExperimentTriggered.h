@class NSArray, NSData, SISchemaUUID;

@interface JRSchemaJRExperimentTriggered : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *allocations;
@property (retain, nonatomic) SISchemaUUID *codepathId;
@property (nonatomic) BOOL hasCodepathId;
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
- (unsigned long long)allocationCount;
- (void)addAllocation:(id)a0;
- (void)clearAllocation;
- (id)allocationAtIndex:(unsigned long long)a0;
- (void)deleteAllocation;
- (void)deleteCodepathId;

@end
