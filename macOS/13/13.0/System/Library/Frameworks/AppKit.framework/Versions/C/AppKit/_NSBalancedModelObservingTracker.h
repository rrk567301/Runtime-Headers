@class NSCountedSet;

@interface _NSBalancedModelObservingTracker : _NSModelObservingTracker {
    NSCountedSet *_modelAndProxyKeysSet;
}

- (void)_dealloc;
- (id)initWithModelObserver:(id)a0 availableModelAndProxyKeys:(id)a1;
- (void)addObservedKey:(id)a0;
- (void)removeObservedKey:(id)a0;
- (id)modelAndProxyKeysObserved;

@end
