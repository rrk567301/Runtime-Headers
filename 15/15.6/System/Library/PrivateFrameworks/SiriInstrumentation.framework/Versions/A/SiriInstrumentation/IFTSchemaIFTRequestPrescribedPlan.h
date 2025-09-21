@class IFTSchemaIFTRequestPrescribedPlanOpenSuccessValueFromLatestRequestTool, NSData, IFTSchemaIFTRequestPrescribedPlanTextTool, IFTSchemaIFTRequestPrescribedPlanSearchTool, IFTSchemaIFTRequestPrescribedPlanKnowledgeTool, IFTSchemaIFTRequestPrescribedPlanOpenTool, IFTSchemaIFTRequestPrescribedPlanConvertTool;

@interface IFTSchemaIFTRequestPrescribedPlan : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTRequestPrescribedPlanSearchTool *searchTool;
@property (nonatomic) char hasSearchTool;
@property (retain, nonatomic) IFTSchemaIFTRequestPrescribedPlanTextTool *textTool;
@property (nonatomic) char hasTextTool;
@property (retain, nonatomic) IFTSchemaIFTRequestPrescribedPlanConvertTool *convertTool;
@property (nonatomic) char hasConvertTool;
@property (retain, nonatomic) IFTSchemaIFTRequestPrescribedPlanKnowledgeTool *knowledgeTool;
@property (nonatomic) char hasKnowledgeTool;
@property (retain, nonatomic) IFTSchemaIFTRequestPrescribedPlanOpenTool *openTool;
@property (nonatomic) char hasOpenTool;
@property (retain, nonatomic) IFTSchemaIFTRequestPrescribedPlanOpenSuccessValueFromLatestRequestTool *openSuccessValueFromLatestRequestTool;
@property (nonatomic) char hasOpenSuccessValueFromLatestRequestTool;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Requestprescribedplan;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteConvertTool;
- (void)deleteKnowledgeTool;
- (void)deleteOpenSuccessValueFromLatestRequestTool;
- (void)deleteOpenTool;
- (void)deleteSearchTool;
- (void)deleteTextTool;
- (id)suppressMessageUnderConditions;

@end
