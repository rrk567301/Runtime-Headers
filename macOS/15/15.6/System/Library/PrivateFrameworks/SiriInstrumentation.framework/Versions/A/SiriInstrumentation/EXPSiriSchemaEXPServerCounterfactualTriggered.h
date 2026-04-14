@class NSString, NSData, EXPSiriSchemaEXPSiriPegasusResponseSummary, SISchemaUUID;

@interface EXPSiriSchemaEXPServerCounterfactualTriggered : SISchemaInstrumentationMessage {
    struct { unsigned char isCounterfactualDifferent : 1; unsigned char diffOutcome : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *pegasusId;
@property (nonatomic) BOOL hasPegasusId;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (retain, nonatomic) SISchemaUUID *codepathId;
@property (nonatomic) BOOL hasCodepathId;
@property (nonatomic) BOOL isCounterfactualDifferent;
@property (nonatomic) BOOL hasIsCounterfactualDifferent;
@property (nonatomic) int diffOutcome;
@property (nonatomic) BOOL hasDiffOutcome;
@property (retain, nonatomic) EXPSiriSchemaEXPSiriPegasusResponseSummary *treatmentSummary;
@property (nonatomic) BOOL hasTreatmentSummary;
@property (retain, nonatomic) EXPSiriSchemaEXPSiriPegasusResponseSummary *counterfactualSummary;
@property (nonatomic) BOOL hasCounterfactualSummary;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteIsCounterfactualDifferent;
- (void)deletePegasusId;
- (void)deleteCodepathId;
- (void)deleteCounterfactualSummary;
- (void)deleteDiffOutcome;
- (void)deleteResultCandidateId;
- (void)deleteTreatmentSummary;
- (id)suppressMessageUnderConditions;

@end
