@class HDCoalescedTaskPoolQuota, _HKObjectTypeAnchor;

@interface HDObjectTypeAnchorQueryServer : HDQueryServer {
    BOOL _needsRequery;
    _HKObjectTypeAnchor *_anchor;
    HDCoalescedTaskPoolQuota *_quota;
}

+ (Class)queryClass;

- (BOOL)_shouldListenForUpdates;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;
- (void)samplesJournaled:(id)a0 type:(id)a1;
- (void).cxx_destruct;
- (void)didAddSamplesOfTypes:(id)a0 anchor:(id)a1;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (BOOL)_shouldObserveAllSampleTypes;

@end
