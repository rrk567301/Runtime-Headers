@class NWPathEvaluator;

@interface RTReachabilityManager : RTService {
    BOOL _observingReachabilityChanges;
}

@property (retain, nonatomic) NWPathEvaluator *pathEvaluator;
@property (nonatomic) unsigned long long currentReachability;

+ (id)reachabilityToString:(unsigned long long)a0;

- (void)internalAddObserver:(id)a0 name:(id)a1;
- (id)initWithPathEvaluator:(id)a0;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_fetchCurrentReachability:(id /* block */)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_processReachabilityChange:(id)a0;
- (void)fetchCurrentReachability:(id /* block */)a0;
- (id)currentReachabilityString;
- (void).cxx_destruct;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void)dealloc;
- (unsigned long long)reachability;

@end
