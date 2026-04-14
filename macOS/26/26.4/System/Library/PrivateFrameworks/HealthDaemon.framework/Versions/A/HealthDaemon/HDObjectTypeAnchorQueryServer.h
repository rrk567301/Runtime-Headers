@class HDCoalescedTaskPoolQuota, _HKObjectTypeAnchor;

@interface HDObjectTypeAnchorQueryServer : HDQueryServer {
    BOOL _needsRequery;
    _HKObjectTypeAnchor *_anchor;
    HDCoalescedTaskPoolQuota *_quota;
}

+ (Class)queryClass;

- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)didAddSamplesOfTypes:(id)a0 anchor:(id)a1;
- (void)samplesJournaled:(id)a0 type:(id)a1;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)_queue_start;
- (BOOL)_shouldListenForUpdates;
- (BOOL)_shouldObserveAllSampleTypes;

@end
