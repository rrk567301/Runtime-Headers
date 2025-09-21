@class NSArray, NSString, NSData, EXPSiriSchemaEXPSiriPegasusResponseSummary, SISchemaUUID;

@interface EXPSiriSchemaEXPServerCounterfactualTriggeredTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char isCounterfactualDifferent : 1; unsigned char compareRankingAtK : 1; unsigned char kValue : 1; unsigned char diffOutcome : 1; } _has;
}

@property (copy, nonatomic) NSArray *allocations;
@property (retain, nonatomic) SISchemaUUID *codepathId;
@property (nonatomic) char hasCodepathId;
@property (retain, nonatomic) SISchemaUUID *pegasusId;
@property (nonatomic) char hasPegasusId;
@property (copy, nonatomic) NSArray *counterfactualAllocations;
@property (nonatomic) char isCounterfactualDifferent;
@property (nonatomic) char hasIsCounterfactualDifferent;
@property (nonatomic) float compareRankingAtK;
@property (nonatomic) char hasCompareRankingAtK;
@property (nonatomic) long long kValue;
@property (nonatomic) char hasKValue;
@property (nonatomic) int diffOutcome;
@property (nonatomic) char hasDiffOutcome;
@property (retain, nonatomic) EXPSiriSchemaEXPSiriPegasusResponseSummary *treatmentSummary;
@property (nonatomic) char hasTreatmentSummary;
@property (retain, nonatomic) EXPSiriSchemaEXPSiriPegasusResponseSummary *counterfactualSummary;
@property (nonatomic) char hasCounterfactualSummary;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) char hasResultCandidateId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)allocationCount;
- (void)addAllocation:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearAllocation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteIsCounterfactualDifferent;
- (void)deletePegasusId;
- (void)addCounterfactualAllocation:(id)a0;
- (id)allocationAtIndex:(unsigned long long)a0;
- (void)clearCounterfactualAllocation;
- (id)counterfactualAllocationAtIndex:(unsigned long long)a0;
- (unsigned long long)counterfactualAllocationCount;
- (void)deleteAllocation;
- (void)deleteCodepathId;
- (void)deleteCompareRankingAtK;
- (void)deleteCounterfactualAllocation;
- (void)deleteCounterfactualSummary;
- (void)deleteDiffOutcome;
- (void)deleteKValue;
- (void)deleteResultCandidateId;
- (void)deleteTreatmentSummary;
- (id)suppressMessageUnderConditions;

@end
