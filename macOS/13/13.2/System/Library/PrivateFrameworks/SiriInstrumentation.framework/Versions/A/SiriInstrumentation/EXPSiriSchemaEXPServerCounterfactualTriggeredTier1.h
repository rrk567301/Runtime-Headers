@class NSArray, NSData, EXPSiriSchemaEXPSiriPegasusResponseSummary, SISchemaUUID;

@interface EXPSiriSchemaEXPServerCounterfactualTriggeredTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char isCounterfactualDifferent : 1; unsigned char compareRankingAtK : 1; unsigned char kValue : 1; unsigned char diffOutcome : 1; } _has;
}

@property (copy, nonatomic) NSArray *allocations;
@property (retain, nonatomic) SISchemaUUID *codepathId;
@property (nonatomic) BOOL hasCodepathId;
@property (retain, nonatomic) SISchemaUUID *pegasusId;
@property (nonatomic) BOOL hasPegasusId;
@property (copy, nonatomic) NSArray *counterfactualAllocations;
@property (nonatomic) BOOL isCounterfactualDifferent;
@property (nonatomic) BOOL hasIsCounterfactualDifferent;
@property (nonatomic) float compareRankingAtK;
@property (nonatomic) BOOL hasCompareRankingAtK;
@property (nonatomic) long long kValue;
@property (nonatomic) BOOL hasKValue;
@property (nonatomic) int diffOutcome;
@property (nonatomic) BOOL hasDiffOutcome;
@property (retain, nonatomic) EXPSiriSchemaEXPSiriPegasusResponseSummary *treatmentSummary;
@property (nonatomic) BOOL hasTreatmentSummary;
@property (retain, nonatomic) EXPSiriSchemaEXPSiriPegasusResponseSummary *counterfactualSummary;
@property (nonatomic) BOOL hasCounterfactualSummary;
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
- (void)clearAllocation;
- (void)deleteAllocation;
- (void)addAllocation:(id)a0;
- (unsigned long long)allocationCount;
- (id)allocationAtIndex:(unsigned long long)a0;
- (void)deleteCodepathId;
- (void)deletePegasusId;
- (void)clearCounterfactualAllocation;
- (void)deleteCounterfactualAllocation;
- (void)addCounterfactualAllocation:(id)a0;
- (unsigned long long)counterfactualAllocationCount;
- (id)counterfactualAllocationAtIndex:(unsigned long long)a0;
- (void)deleteIsCounterfactualDifferent;
- (void)deleteCompareRankingAtK;
- (void)deleteKValue;
- (void)deleteDiffOutcome;
- (void)deleteTreatmentSummary;
- (void)deleteCounterfactualSummary;

@end
