@class NSData, ODDSiriSchemaODDDictationDimensions, SISchemaUUID;

@interface ODDSiriSchemaODDDictationExperimentDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char experimentAllocationStatus : 1; unsigned char isFirstTriggerOrAfterFirstTrigger : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDDictationDimensions *dictationDimensions;
@property (nonatomic) BOOL hasDictationDimensions;
@property (nonatomic) int experimentAllocationStatus;
@property (nonatomic) BOOL hasExperimentAllocationStatus;
@property (nonatomic) BOOL isFirstTriggerOrAfterFirstTrigger;
@property (nonatomic) BOOL hasIsFirstTriggerOrAfterFirstTrigger;
@property (retain, nonatomic) SISchemaUUID *codePathId;
@property (nonatomic) BOOL hasCodePathId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteCodePathId;
- (void)deleteDictationDimensions;
- (void)deleteExperimentAllocationStatus;
- (void)deleteIsFirstTriggerOrAfterFirstTrigger;

@end
