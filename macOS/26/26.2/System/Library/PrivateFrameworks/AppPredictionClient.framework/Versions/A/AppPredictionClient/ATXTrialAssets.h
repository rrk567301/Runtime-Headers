@class NSString, _PASLock;

@interface ATXTrialAssets : NSObject {
    _PASLock *_lock;
}

@property (readonly, nonatomic) NSString *trialTreatmentId;
@property (readonly, nonatomic) NSString *trialExperimentId;
@property (readonly, nonatomic) NSString *trialDeploymentId;

- (id)filePathForClass:(Class)a0;
- (id)filePathForResource:(id)a0;
- (void)addUpdateHandlerWithBlock:(id /* block */)a0;
- (id)directoryPathForTrialResource:(id)a0;
- (id)dictionaryForClassName:(id)a0;
- (void).cxx_destruct;
- (id)trialFactorName:(id)a0;
- (id)client;
- (id)init;
- (id)dictionaryForClass:(Class)a0;
- (void)fetchTrialExperimentIdentifiers;
- (id)filePathForClassName:(id)a0;
- (id)dictionaryForResource:(id)a0;

@end
