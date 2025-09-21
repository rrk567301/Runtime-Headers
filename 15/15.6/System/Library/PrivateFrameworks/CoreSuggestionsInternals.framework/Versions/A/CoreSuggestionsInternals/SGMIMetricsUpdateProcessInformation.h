@class SGMIMetricsTrialMetadata, SGMIMetricsSubmodelsStats;

@interface SGMIMetricsUpdateProcessInformation : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _ctsJobConstraints;
    struct { unsigned char biomeAggregationPerformanceInMilliSeconds : 1; unsigned char cumulatedSubmodelsRollbackForPostDeletionPolicyPerformanceInMilliSeconds : 1; unsigned char submodelsPruningForCappingPolicyPerformanceInMilliSeconds : 1; unsigned char submodelsUpdatePerformanceInMilliSeconds : 1; unsigned char daysAvailableDuringIncrementalUpdate : 1; unsigned char daysProcessedDuringIncrementalUpdate : 1; unsigned char deletedEmailsCount : 1; unsigned char deletedTokensCountToComplyToCappingPolicy : 1; unsigned char hoursSinceLastIncrementalUpdate : 1; unsigned char hoursSinceReference : 1; unsigned char mailsProcessedDuringIncrementalUpdate : 1; unsigned char rollbackedEmailsCountToComplyToPostDeletionPolicy : 1; unsigned char rollbackedSlicesCountToComplyToPostDeletionPolicy : 1; unsigned char isSubmodelRebuilt : 1; } _has;
}

@property (readonly, nonatomic) char hasTrialMetadata;
@property (retain, nonatomic) SGMIMetricsTrialMetadata *trialMetadata;
@property (readonly, nonatomic) char hasBackgroundTrialMetadata;
@property (retain, nonatomic) SGMIMetricsTrialMetadata *backgroundTrialMetadata;
@property (nonatomic) char hasHoursSinceReference;
@property (nonatomic) unsigned int hoursSinceReference;
@property (readonly, nonatomic) unsigned long long ctsJobConstraintsCount;
@property (readonly, nonatomic) int *ctsJobConstraints;
@property (nonatomic) char hasHoursSinceLastIncrementalUpdate;
@property (nonatomic) unsigned int hoursSinceLastIncrementalUpdate;
@property (nonatomic) char hasIsSubmodelRebuilt;
@property (nonatomic) char isSubmodelRebuilt;
@property (nonatomic) char hasDaysAvailableDuringIncrementalUpdate;
@property (nonatomic) unsigned int daysAvailableDuringIncrementalUpdate;
@property (nonatomic) char hasDaysProcessedDuringIncrementalUpdate;
@property (nonatomic) unsigned int daysProcessedDuringIncrementalUpdate;
@property (nonatomic) char hasMailsProcessedDuringIncrementalUpdate;
@property (nonatomic) unsigned int mailsProcessedDuringIncrementalUpdate;
@property (nonatomic) char hasDeletedTokensCountToComplyToCappingPolicy;
@property (nonatomic) unsigned int deletedTokensCountToComplyToCappingPolicy;
@property (nonatomic) char hasDeletedEmailsCount;
@property (nonatomic) unsigned int deletedEmailsCount;
@property (nonatomic) char hasRollbackedSlicesCountToComplyToPostDeletionPolicy;
@property (nonatomic) unsigned int rollbackedSlicesCountToComplyToPostDeletionPolicy;
@property (nonatomic) char hasRollbackedEmailsCountToComplyToPostDeletionPolicy;
@property (nonatomic) unsigned int rollbackedEmailsCountToComplyToPostDeletionPolicy;
@property (readonly, nonatomic) char hasSubmodelsStats;
@property (retain, nonatomic) SGMIMetricsSubmodelsStats *submodelsStats;
@property (nonatomic) char hasBiomeAggregationPerformanceInMilliSeconds;
@property (nonatomic) unsigned long long biomeAggregationPerformanceInMilliSeconds;
@property (nonatomic) char hasSubmodelsUpdatePerformanceInMilliSeconds;
@property (nonatomic) unsigned long long submodelsUpdatePerformanceInMilliSeconds;
@property (nonatomic) char hasSubmodelsPruningForCappingPolicyPerformanceInMilliSeconds;
@property (nonatomic) unsigned long long submodelsPruningForCappingPolicyPerformanceInMilliSeconds;
@property (nonatomic) char hasCumulatedSubmodelsRollbackForPostDeletionPolicyPerformanceInMilliSeconds;
@property (nonatomic) unsigned long long cumulatedSubmodelsRollbackForPostDeletionPolicyPerformanceInMilliSeconds;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsCtsJobConstraints:(id)a0;
- (void)addCtsJobConstraints:(int)a0;
- (void)clearCtsJobConstraints;
- (id)ctsJobConstraintsAsString:(int)a0;
- (int)ctsJobConstraintsAtIndex:(unsigned long long)a0;
- (void)setCtsJobConstraints:(int *)a0 count:(unsigned long long)a1;

@end
