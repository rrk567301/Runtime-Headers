@class INFERENCESchemaINFERENCETaskSpecificInfo, NSData, SISchemaUUID;

@interface INFERENCESchemaINFERENCESimpleTaskInfoGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char taskSuccessType : 1; unsigned char isSuccess : 1; unsigned char isExecuted : 1; unsigned char isSuccessfulDirectExecution : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalResolutionContextId;
@property (nonatomic) char hasOriginalResolutionContextId;
@property (nonatomic) int taskSuccessType;
@property (nonatomic) char hasTaskSuccessType;
@property (nonatomic) char isSuccess;
@property (nonatomic) char hasIsSuccess;
@property (nonatomic) char isExecuted;
@property (nonatomic) char hasIsExecuted;
@property (nonatomic) char isSuccessfulDirectExecution;
@property (nonatomic) char hasIsSuccessfulDirectExecution;
@property (retain, nonatomic) INFERENCESchemaINFERENCETaskSpecificInfo *taskSpecificInfo;
@property (nonatomic) char hasTaskSpecificInfo;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteIsSuccess;
- (void)deleteIsExecuted;
- (void)deleteIsSuccessfulDirectExecution;
- (void)deleteOriginalResolutionContextId;
- (void)deleteTaskSpecificInfo;
- (void)deleteTaskSuccessType;
- (id)suppressMessageUnderConditions;

@end
