@class NSArray, NSData, SISchemaUUID;

@interface EXPSiriSchemaEXPClientSiriRequestExperimentTriggeredTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *allocations;
@property (retain, nonatomic) SISchemaUUID *codepathId;
@property (nonatomic) char hasCodepathId;
@property (retain, nonatomic) SISchemaUUID *requestId;
@property (nonatomic) char hasRequestId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)allocationCount;
- (void)addAllocation:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearAllocation;
- (void)deleteRequestId;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)allocationAtIndex:(unsigned long long)a0;
- (void)deleteAllocation;
- (void)deleteCodepathId;
- (id)suppressMessageUnderConditions;

@end
