@class NSString;

@interface CPLNewChainedRecordExtractionStep : CPLBatchExtractionStep

@property (readonly, nonatomic) Class recordClass;
@property (readonly, nonatomic) NSString *classDescription;
@property (readonly, nonatomic) unsigned long long maximumCount;

- (void).cxx_destruct;
- (id)shortDescription;
- (char)extractToBatch:(id)a0 maximumCount:(unsigned long long)a1 maximumResourceSize:(unsigned long long)a2 error:(id *)a3;
- (id)initWithStorage:(id)a0 class:(Class)a1 classDescription:(id)a2 scopeIdentifier:(id)a3 maximumCount:(unsigned long long)a4;
- (char)shouldResetFromThisStepWithIncomingChange:(id)a0;

@end
