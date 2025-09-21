@class SISchemaUUID, NSData, ODDSiriSchemaODDAssistantDimensions;

@interface ODDSiriSchemaODDAssistantExperimentDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char experimentAllocationStatus : 1; unsigned char isTriggered : 1; unsigned char isFirstTriggerOrAfterFirstTrigger : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDAssistantDimensions *assistantDimensions;
@property (nonatomic) char hasAssistantDimensions;
@property (nonatomic) int experimentAllocationStatus;
@property (nonatomic) char hasExperimentAllocationStatus;
@property (nonatomic) char isTriggered;
@property (nonatomic) char hasIsTriggered;
@property (nonatomic) char isFirstTriggerOrAfterFirstTrigger;
@property (nonatomic) char hasIsFirstTriggerOrAfterFirstTrigger;
@property (retain, nonatomic) SISchemaUUID *codePathId;
@property (nonatomic) char hasCodePathId;
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
- (void)deleteAssistantDimensions;
- (void)deleteCodePathId;
- (void)deleteExperimentAllocationStatus;
- (void)deleteIsFirstTriggerOrAfterFirstTrigger;
- (void)deleteIsTriggered;
- (id)suppressMessageUnderConditions;

@end
