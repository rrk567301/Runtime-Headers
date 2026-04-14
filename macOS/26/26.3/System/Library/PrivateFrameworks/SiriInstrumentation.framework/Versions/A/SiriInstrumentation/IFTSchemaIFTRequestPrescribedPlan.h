@class IFTSchemaIFTRequestPrescribedPlanOpenSuccessValueFromLatestRequestTool, NSData, IFTSchemaIFTRequestPrescribedPlanTextTool, IFTSchemaIFTRequestPrescribedPlanSearchTool, IFTSchemaIFTRequestPrescribedPlanKnowledgeTool, IFTSchemaIFTRequestPrescribedPlanOpenTool, IFTSchemaIFTRequestPrescribedPlanConvertTool;

@interface IFTSchemaIFTRequestPrescribedPlan : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTRequestPrescribedPlanSearchTool *searchTool;
@property (nonatomic) BOOL hasSearchTool;
@property (retain, nonatomic) IFTSchemaIFTRequestPrescribedPlanTextTool *textTool;
@property (nonatomic) BOOL hasTextTool;
@property (retain, nonatomic) IFTSchemaIFTRequestPrescribedPlanConvertTool *convertTool;
@property (nonatomic) BOOL hasConvertTool;
@property (retain, nonatomic) IFTSchemaIFTRequestPrescribedPlanKnowledgeTool *knowledgeTool;
@property (nonatomic) BOOL hasKnowledgeTool;
@property (retain, nonatomic) IFTSchemaIFTRequestPrescribedPlanOpenTool *openTool;
@property (nonatomic) BOOL hasOpenTool;
@property (retain, nonatomic) IFTSchemaIFTRequestPrescribedPlanOpenSuccessValueFromLatestRequestTool *openSuccessValueFromLatestRequestTool;
@property (nonatomic) BOOL hasOpenSuccessValueFromLatestRequestTool;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Requestprescribedplan;

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
- (void)deleteConvertTool;
- (void)deleteKnowledgeTool;
- (void)deleteOpenSuccessValueFromLatestRequestTool;
- (void)deleteOpenTool;
- (void)deleteSearchTool;
- (void)deleteTextTool;

@end
