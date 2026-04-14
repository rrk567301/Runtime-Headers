@class NSCountedSet;

@interface _NSBalancedModelObservingTracker : _NSModelObservingTracker {
    NSCountedSet *_modelAndProxyKeysSet;
}

- (void)_dealloc;
- (void)addObservedKey:(id)a0;
- (id)initWithModelObserver:(id)a0 availableModelAndProxyKeys:(id)a1;
- (id)modelAndProxyKeysObserved;
- (void)removeObservedKey:(id)a0;

@end
