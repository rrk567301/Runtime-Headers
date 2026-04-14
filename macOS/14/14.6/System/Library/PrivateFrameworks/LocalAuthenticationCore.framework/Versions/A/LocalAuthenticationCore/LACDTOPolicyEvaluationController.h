@class NSString, NSHashTable;
@protocol LACDTODeviceInfoProvider, LACDTOEnvironmentProviding, LACDTOPolicyEvaluationIdentifierFactory;

@interface LACDTOPolicyEvaluationController : NSObject <LACDTOPolicyEvaluationController> {
    id<LACDTOEnvironmentProviding> _environment;
    id<LACDTOPolicyEvaluationIdentifierFactory> _evaluationIdentifierFactory;
    id<LACDTODeviceInfoProvider> _device;
    NSHashTable *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_forEachObserver:(id /* block */)a0;
- (BOOL)_checkDeviceHasBeenUnlockedSinceBoot;
- (id)_errorCodesToFilterForOptions:(id)a0;
- (void)_evaluatePolicy:(long long)a0 options:(id)a1 client:(id)a2 environment:(id)a3 evaluationBlock:(id /* block */)a4 reply:(id /* block */)a5;
- (void)_mapResult:(id)a0 error:(id)a1 filterCodes:(id)a2 completion:(id /* block */)a3;
- (id /* block */)_noAuthenticationOnFallbackEvaluationBlockWithBlock:(id /* block */)a0;
- (void)_notifyObserversAboutEvaluation:(id)a0;
- (void)_notifyObserversAboutEvaluation:(id)a0 result:(id)a1;
- (BOOL)_verifyHasRequiredOptions:(id)a0 forPolicy:(long long)a1 error:(id *)a2;
- (id)entitlementsForPolicy:(long long)a0 options:(id)a1;
- (void)evaluatePolicy:(long long)a0 options:(id)a1 client:(id)a2 evaluationBlock:(id /* block */)a3 reply:(id /* block */)a4;
- (BOOL)handlesPolicy:(long long)a0 options:(id)a1;
- (id)initWithEnvironment:(id)a0 evaluationIdentifierFactory:(id)a1 device:(id)a2;

@end
