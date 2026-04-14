@class NSString, NSSet, NSArray, NSDictionary, NSNumber;

@interface HDObserverQueryServer : HDQueryServer <HDQuantitySeriesObserver> {
    BOOL _deliverOnUnlock;
    BOOL _observeUnfrozenSeries;
    NSNumber *_anchor;
    NSNumber *_subscriptionAnchor;
    NSSet *_updatedSampleTypes;
    NSArray *_queryDescriptors;
    NSDictionary *_sampleTypeToFilterMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (BOOL)supportsAnchorBasedAuthorization;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)_queue_start;
- (id)objectTypes;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (BOOL)_shouldListenForUpdates;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;
- (void)_queue_stop;
- (void)profile:(id)a0 didDiscardSeriesOfType:(id)a1;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (void)associationsUpdatedForObject:(id)a0 subObject:(id)a1 type:(unsigned long long)a2 behavior:(unsigned long long)a3 objects:(id)a4 anchor:(id)a5;
- (id /* block */)transactionalQuantityInsertHandlerForProfile:(id)a0 journaled:(BOOL)a1 count:(long long)a2;

@end
