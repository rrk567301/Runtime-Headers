@class FLSchemaFLToolCandidateCategory, NSData, FLSchemaFLParameterCandidateCategory;

@interface FLSchemaFLCandidateCategory : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLSchemaFLToolCandidateCategory *tool;
@property (nonatomic) BOOL hasTool;
@property (retain, nonatomic) FLSchemaFLParameterCandidateCategory *parameter;
@property (nonatomic) BOOL hasParameter;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichCategory;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteParameter;
- (void)deleteTool;

@end
