@class NSString, NSDictionary, NSArray, NSMutableArray, HKQueryAnchor;

@interface HDAnchoredObjectQueryServer : HDBatchedQueryServer {
    BOOL _deliversUpdates;
    BOOL _initialResultsSent;
    BOOL _objectsDeleted;
    BOOL _includeDeletedObjects;
    HKQueryAnchor *_startAnchor;
    NSString *_secureClientToken;
    unsigned long long _deliveredResults;
    NSMutableArray *_addedSamplesPendingDidAddNotification;
    NSMutableArray *_addedSamplesPendingResume;
    NSMutableArray *_deletedSamplesPendingResume;
    NSDictionary *_sampleTypeToFilterMap;
    NSMutableArray *_pendingUpdateBlocks;
    BOOL _updateInProgress;
    BOOL _includeAutomaticTimeZones;
    BOOL _includeContributorInformation;
    HKQueryAnchor *_anchor;
    unsigned long long _limit;
    NSArray *_queryDescriptors;
    NSString *_localSourceUUIDString;
}

+ (BOOL)supportsAnchorBasedAuthorization;
+ (id)requiredEntitlements;
+ (Class)queryClass;

- (BOOL)_supportsBackgroundDataCollection;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)_supportedTypesForBackgroundRunningCollection;
- (void)_queue_didChangeStateFromPreviousState:(long long)a0 state:(long long)a1;
- (void)_queue_didDeactivate;
- (void)didAddSamplesOfTypes:(id)a0 anchor:(id)a1;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (id)description;
- (BOOL)validateConfiguration:(id *)a0;
- (BOOL)_shouldObserveOnPause;
- (void).cxx_destruct;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void)_queue_start;
- (BOOL)prepareToActivateServerWithError:(id *)a0;
- (BOOL)_shouldListenForUpdates;
- (id)objectTypes;

@end
