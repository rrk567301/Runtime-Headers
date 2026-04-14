@class INFERENCESchemaINFERENCETaskSpecificInfo, NSData, SISchemaUUID;

@interface INFERENCESchemaINFERENCESimpleTaskInfoGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char taskSuccessType : 1; unsigned char isSuccess : 1; unsigned char isExecuted : 1; unsigned char isSuccessfulDirectExecution : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalResolutionContextId;
@property (nonatomic) BOOL hasOriginalResolutionContextId;
@property (nonatomic) int taskSuccessType;
@property (nonatomic) BOOL hasTaskSuccessType;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) BOOL hasIsSuccess;
@property (nonatomic) BOOL isExecuted;
@property (nonatomic) BOOL hasIsExecuted;
@property (nonatomic) BOOL isSuccessfulDirectExecution;
@property (nonatomic) BOOL hasIsSuccessfulDirectExecution;
@property (retain, nonatomic) INFERENCESchemaINFERENCETaskSpecificInfo *taskSpecificInfo;
@property (nonatomic) BOOL hasTaskSpecificInfo;
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
- (void)deleteOriginalResolutionContextId;
- (void)deleteTaskSuccessType;
- (void)deleteIsSuccess;
- (void)deleteIsExecuted;
- (void)deleteIsSuccessfulDirectExecution;
- (void)deleteTaskSpecificInfo;

@end
