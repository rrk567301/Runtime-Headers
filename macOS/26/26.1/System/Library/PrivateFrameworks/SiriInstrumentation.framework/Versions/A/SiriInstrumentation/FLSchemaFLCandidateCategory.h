@class FLSchemaFLToolCandidateCategory, NSData, FLSchemaFLParameterCandidateCategory;

@interface FLSchemaFLCandidateCategory : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLSchemaFLToolCandidateCategory *tool;
@property (nonatomic) BOOL hasTool;
@property (retain, nonatomic) FLSchemaFLParameterCandidateCategory *parameter;
@property (nonatomic) BOOL hasParameter;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichCategory;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteParameter;
- (void)deleteTool;

@end
