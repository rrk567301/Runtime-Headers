@class NSCountedSet;

@interface _NSBalancedModelObservingTracker : _NSModelObservingTracker {
    NSCountedSet *_modelAndProxyKeysSet;
}

- (id)initWithModelObserver:(id)a0 availableModelAndProxyKeys:(id)a1;
- (void)_dealloc;
- (id)modelAndProxyKeysObserved;
- (void)addObservedKey:(id)a0;
- (void)removeObservedKey:(id)a0;

@end
