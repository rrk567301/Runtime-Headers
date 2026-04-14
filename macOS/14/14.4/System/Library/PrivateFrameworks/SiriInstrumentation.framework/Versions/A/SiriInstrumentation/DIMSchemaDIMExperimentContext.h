@class NSArray, NSData;

@interface DIMSchemaDIMExperimentContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *experimentInfos;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addExperimentInfo:(id)a0;
- (void)clearExperimentInfo;
- (id)experimentInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)experimentInfoCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteExperimentInfo;
- (id)suppressMessageUnderConditions;

@end
