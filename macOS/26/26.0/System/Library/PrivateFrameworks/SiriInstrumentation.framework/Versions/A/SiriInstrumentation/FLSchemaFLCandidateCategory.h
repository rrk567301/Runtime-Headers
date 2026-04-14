@class FLSchemaFLToolCandidateCategory, NSData, FLSchemaFLParameterCandidateCategory;

@interface FLSchemaFLCandidateCategory : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLSchemaFLToolCandidateCategory *tool;
@property (nonatomic) BOOL hasTool;
@property (retain, nonatomic) FLSchemaFLParameterCandidateCategory *parameter;
@property (nonatomic) BOOL hasParameter;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichCategory;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteParameter;
- (void)deleteTool;

@end
