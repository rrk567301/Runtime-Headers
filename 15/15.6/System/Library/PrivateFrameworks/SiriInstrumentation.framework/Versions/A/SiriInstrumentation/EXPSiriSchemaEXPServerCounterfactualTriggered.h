@class NSString, NSData, EXPSiriSchemaEXPSiriPegasusResponseSummary, SISchemaUUID;

@interface EXPSiriSchemaEXPServerCounterfactualTriggered : SISchemaInstrumentationMessage {
    struct { unsigned char isCounterfactualDifferent : 1; unsigned char diffOutcome : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *pegasusId;
@property (nonatomic) char hasPegasusId;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) char hasResultCandidateId;
@property (retain, nonatomic) SISchemaUUID *codepathId;
@property (nonatomic) char hasCodepathId;
@property (nonatomic) char isCounterfactualDifferent;
@property (nonatomic) char hasIsCounterfactualDifferent;
@property (nonatomic) int diffOutcome;
@property (nonatomic) char hasDiffOutcome;
@property (retain, nonatomic) EXPSiriSchemaEXPSiriPegasusResponseSummary *treatmentSummary;
@property (nonatomic) char hasTreatmentSummary;
@property (retain, nonatomic) EXPSiriSchemaEXPSiriPegasusResponseSummary *counterfactualSummary;
@property (nonatomic) char hasCounterfactualSummary;
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
- (void)deleteIsCounterfactualDifferent;
- (void)deletePegasusId;
- (void)deleteCodepathId;
- (void)deleteCounterfactualSummary;
- (void)deleteDiffOutcome;
- (void)deleteResultCandidateId;
- (void)deleteTreatmentSummary;
- (id)suppressMessageUnderConditions;

@end
