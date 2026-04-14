@class SISchemaUUID, NSData, ODDSiriSchemaODDAssistantDimensions;

@interface ODDSiriSchemaODDAssistantExperimentDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char experimentAllocationStatus : 1; unsigned char isTriggered : 1; unsigned char isFirstTriggerOrAfterFirstTrigger : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDAssistantDimensions *assistantDimensions;
@property (nonatomic) BOOL hasAssistantDimensions;
@property (nonatomic) int experimentAllocationStatus;
@property (nonatomic) BOOL hasExperimentAllocationStatus;
@property (nonatomic) BOOL isTriggered;
@property (nonatomic) BOOL hasIsTriggered;
@property (nonatomic) BOOL isFirstTriggerOrAfterFirstTrigger;
@property (nonatomic) BOOL hasIsFirstTriggerOrAfterFirstTrigger;
@property (retain, nonatomic) SISchemaUUID *codePathId;
@property (nonatomic) BOOL hasCodePathId;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteAssistantDimensions;
- (void)deleteCodePathId;
- (void)deleteExperimentAllocationStatus;
- (void)deleteIsFirstTriggerOrAfterFirstTrigger;
- (void)deleteIsTriggered;

@end
