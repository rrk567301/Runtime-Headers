@class NSMutableSet;

@interface CPLNewAssetExtractionStep : CPLBatchExtractionStep {
    NSMutableSet *_alreadySeenMasterScopedIdentifiers;
}

@property (readonly, nonatomic) unsigned long long maximumCount;

- (void).cxx_destruct;
- (void)reset;
- (id)shortDescription;
- (char)extractToBatch:(id)a0 maximumCount:(unsigned long long)a1 maximumResourceSize:(unsigned long long)a2 error:(id *)a3;
- (id)initWithStorage:(id)a0 scopeIdentifier:(id)a1 maximumCount:(unsigned long long)a2;
- (char)shouldResetFromThisStepWithIncomingChange:(id)a0;

@end
