@class HDCoalescedTaskPoolQuota, _HKObjectTypeAnchor;

@interface HDObjectTypeAnchorQueryServer : HDQueryServer {
    char _needsRequery;
    _HKObjectTypeAnchor *_anchor;
    HDCoalescedTaskPoolQuota *_quota;
}

+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_start;
- (char)_shouldListenForUpdates;
- (char)_shouldObserveAllSampleTypes;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(char)a1;
- (void)didAddSamplesOfTypes:(id)a0 anchor:(id)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)samplesJournaled:(id)a0 type:(id)a1;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;

@end
