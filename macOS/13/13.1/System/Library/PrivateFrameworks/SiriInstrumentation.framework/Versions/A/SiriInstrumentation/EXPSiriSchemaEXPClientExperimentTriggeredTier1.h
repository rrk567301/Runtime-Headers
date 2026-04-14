@class NSArray, NSData, SISchemaUUID;

@interface EXPSiriSchemaEXPClientExperimentTriggeredTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *allocations;
@property (retain, nonatomic) SISchemaUUID *codepathId;
@property (nonatomic) BOOL hasCodepathId;
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
- (void)clearAllocation;
- (void)deleteAllocation;
- (void)addAllocation:(id)a0;
- (unsigned long long)allocationCount;
- (id)allocationAtIndex:(unsigned long long)a0;
- (void)deleteCodepathId;

@end
