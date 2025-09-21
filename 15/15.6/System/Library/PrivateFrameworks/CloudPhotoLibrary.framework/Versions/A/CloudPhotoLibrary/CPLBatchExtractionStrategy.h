@class NSEnumerator, NSString, NSArray, CPLBatchExtractionStep;
@protocol CPLBatchExtractionStrategyStorage;

@interface CPLBatchExtractionStrategy : NSObject {
    NSArray *_steps;
    NSEnumerator *_stepEnumerator;
    CPLBatchExtractionStep *_currentStep;
    char _loggedForThisStep;
    char _finished;
}

@property (class, nonatomic) unsigned long long maximumRecordCountPerBatch;
@property (class, readonly, nonatomic) unsigned long long minimumRecordCountPerBatch;
@property (class, nonatomic) unsigned long long maximumAlbumsPerBatch;

@property (readonly, copy, nonatomic) NSString *strategyName;
@property (readonly, weak, nonatomic) id<CPLBatchExtractionStrategyStorage> storage;
@property (readonly, nonatomic) NSString *scopeIdentifier;
@property (nonatomic) unsigned long long maximumRecordCountPerBatch;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *currentStepDescription;
@property (readonly, copy, nonatomic) NSString *stepsDescription;

+ (id)minglingStrategyWithStorage:(id)a0 coveringScopeIdentifier:(id)a1 maximumBatchSize:(unsigned long long)a2;
+ (id)overQuotaStrategyWithStorage:(id)a0 coveringScopeIdentifier:(id)a1;
+ (id)usualStrategyWithStorage:(id)a0 coveringScopeIdentifier:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (char)_hasChanges;
- (id)cplFullDescription;
- (void)_computeNextStep;
- (char)extractBatch:(out id *)a0 maximumResourceSize:(unsigned long long)a1 error:(id *)a2;
- (id)initWithName:(id)a0 storage:(id)a1 scopeIdentifier:(id)a2 steps:(id)a3;
- (void)resetConditionallyFromNewIncomingChange:(id)a0;

@end
