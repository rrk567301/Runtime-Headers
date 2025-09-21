@class FLSchemaFLToolCandidateCategory, NSData, FLSchemaFLParameterCandidateCategory;

@interface FLSchemaFLCandidateCategory : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLSchemaFLToolCandidateCategory *tool;
@property (nonatomic) char hasTool;
@property (retain, nonatomic) FLSchemaFLParameterCandidateCategory *parameter;
@property (nonatomic) char hasParameter;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichCategory;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteParameter;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteTool;
- (id)suppressMessageUnderConditions;

@end
