@class NSString, _PASLock;

@interface ATXTrialAssets : NSObject {
    _PASLock *_lock;
}

@property (readonly, nonatomic) NSString *trialTreatmentId;
@property (readonly, nonatomic) NSString *trialExperimentId;
@property (readonly, nonatomic) NSString *trialDeploymentId;

- (id)filePathForClass:(Class)a0;
- (id)filePathForClassName:(id)a0;
- (id)dictionaryForClass:(Class)a0;
- (id)client;
- (id)dictionaryForResource:(id)a0;
- (id)init;
- (id)directoryPathForTrialResource:(id)a0;
- (void)fetchTrialExperimentIdentifiers;
- (void).cxx_destruct;
- (id)filePathForResource:(id)a0;
- (void)addUpdateHandlerWithBlock:(id /* block */)a0;
- (id)trialFactorName:(id)a0;
- (id)dictionaryForClassName:(id)a0;

@end
