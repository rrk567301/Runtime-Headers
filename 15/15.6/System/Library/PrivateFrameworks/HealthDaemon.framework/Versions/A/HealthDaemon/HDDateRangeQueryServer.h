@class NSString, NSMutableDictionary, NSMutableSet;

@interface HDDateRangeQueryServer : HDQueryServer <HDDataObserver, HDDatabaseProtectedDataObserver> {
    char _resultsDirty;
    NSMutableDictionary *_dateIntervalsBySampleType;
    NSMutableSet *_sampleTypesToReFetch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_start;
- (char)_shouldListenForUpdates;
- (char)_shouldObserveAllSampleTypes;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(char)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;

@end
