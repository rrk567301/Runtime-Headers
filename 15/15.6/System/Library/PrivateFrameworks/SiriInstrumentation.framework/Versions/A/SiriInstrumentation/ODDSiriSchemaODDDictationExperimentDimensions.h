@class NSData, ODDSiriSchemaODDDictationDimensions, SISchemaUUID;

@interface ODDSiriSchemaODDDictationExperimentDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char experimentAllocationStatus : 1; unsigned char isFirstTriggerOrAfterFirstTrigger : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDDictationDimensions *dictationDimensions;
@property (nonatomic) char hasDictationDimensions;
@property (nonatomic) int experimentAllocationStatus;
@property (nonatomic) char hasExperimentAllocationStatus;
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
- (void)deleteCodePathId;
- (void)deleteDictationDimensions;
- (void)deleteExperimentAllocationStatus;
- (void)deleteIsFirstTriggerOrAfterFirstTrigger;
- (id)suppressMessageUnderConditions;

@end
