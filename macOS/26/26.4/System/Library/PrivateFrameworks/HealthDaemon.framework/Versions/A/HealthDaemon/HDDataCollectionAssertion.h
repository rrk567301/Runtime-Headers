@class NSSet, HDDataCollectionManager, HDDataCollectionObserverState;

@interface HDDataCollectionAssertion : HDAssertion {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDDataCollectionObserverState *_observerState;
    NSSet *_sampleTypes;
    double _collectionInterval;
    HDDataCollectionManager *_dataCollectionManager;
}

@property (copy, nonatomic) HDDataCollectionObserverState *observerState;

- (void).cxx_destruct;
- (id)description;

@end
