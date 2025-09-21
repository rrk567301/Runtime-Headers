@class NSError, NSString, NSArray, WBSCloudTabDevice, NSHashTable, NSMutableDictionary, NSDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, WBSCloudTabStoreDelegate;

@interface WBSCloudTabStore : NSObject <WBSCloudTabDeviceProvider> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    char _isFetchingDataFromCloudKit;
    char _hasAttemptedToFetchDevicesAtLeastOnce;
    NSMutableArray *_syncedCloudTabDevicesFromCloudKit;
    NSArray *_filteredAndSortedSyncedCloudTabDevicesFromCloudKit;
    WBSCloudTabDevice *_currentDevice;
    NSMutableDictionary *_deviceUUIDsToCloseRequestsFromCloudKit;
    NSError *_lastFetchError;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) char atLeastOneOtherActiveDeviceIsRegistered;
@property (readonly, copy, nonatomic) NSArray *syncedCloudTabDevices;
@property (weak, nonatomic) id<WBSCloudTabStoreDelegate> wbsDelegate;
@property (readonly, nonatomic) char syncAgentIsAvailable;
@property (readonly, nonatomic) long long uniqueDeviceMultiplicity;
@property (readonly, nonatomic) char currentDeviceIsRegisteredInCloudKit;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentationOfCurrentDeviceInCloudKit;
@property (readonly, nonatomic) NSError *lastFetchError;
@property (readonly, nonatomic) unsigned long long totalSyncedCloudTabDeviceCount;
@property (readonly, nonatomic) char cloudTabsAreEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)pruneExpiredDevicesFromCloudKit;
- (void)clearTabsForFirstDuplicateDeviceInCloudKitWithName:(id)a0 passingTest:(id /* block */)a1;
- (void)_addCloseRequestDictionary:(id)a0 toDeviceUUIDsToCloseRequestsDictionary:(id)a1 requestUUID:(id)a2;
- (void)_closeRequestedTabIfPossible:(id)a0;
- (char)_closeTabs:(id)a0 onDevice:(id)a1;
- (id)_currentDeviceUUID;
- (id)_deviceWithTabsWithOutstandingCloseRequestsRemoved:(id)a0 closeRequestsForDevice:(id)a1;
- (id)_devicesByFilteringAndSortingDevices:(id)a0;
- (void)_didFetchDeviceDictionariesFromCloudKit:(id)a0 fetchedCloseRequests:(id)a1 error:(id)a2;
- (void)_didFetchDeviceDictionariesFromCloudKit:(id)a0 fetchedCloseRequests:(id)a1 fetchedDevicesBySyncing:(char)a2 error:(id)a3;
- (unsigned long long)_indexOfDeviceInSyncedCloudTabDevicesFromCloudKit:(id)a0;
- (void)_syncAgentProxyConnectionWasInvalidated:(id)a0;
- (void)_tabWasClosed:(id)a0 onDevice:(id)a1;
- (void)_tabsWereClosed:(id)a0 onDevice:(id)a1;
- (char)_writeCloseRequestForTab:(id)a0 onDevice:(id)a1;
- (void)addCloudTabsObserver:(id)a0;
- (void)clearTabsForFirstDuplicateDeviceInCloudKitWithName:(id)a0;
- (char)closeAllTabsOnDevice:(id)a0;
- (char)closeTab:(id)a0 onDevice:(id)a1;
- (void)deleteAllDevicesFromCloudKit;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
- (void)handleCloseTabRequestsFromCloudKit;
- (void)notifyObserversOfSyncedCloudTabDevicesChanged;
- (void)resetSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
- (void)saveCurrentCloudTabDeviceDictionaryToCloudKit:(id)a0 completionHandler:(id /* block */)a1;
- (id)syncedRemoteCloudTabDevicesForProfileWithIdentifier:(id)a0;

@end
