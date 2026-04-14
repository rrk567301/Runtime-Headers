@class GCDTimer, NSString, NSMutableDictionary, GEOObserverHashTable, IDSBatchIDQueryController, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface MSPSharedTripCapabilityLevelFetcher : NSObject <IDSBatchIDQueryControllerDelegate> {
    GEOObserverHashTable *_observers;
    NSMutableDictionary *_identifierToMapsStatus;
    NSMutableDictionary *_identifierToMessagesStatus;
    IDSBatchIDQueryController *_mapsBatchController;
    IDSBatchIDQueryController *_messagesBatchController;
    NSMutableSet *_mapsStatusFetchQueue;
    NSMutableSet *_messagesStatusFetchQueue;
    GCDTimer *_retryAfterBackoffTimer;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedFetcher;

- (id)init;
- (void).cxx_destruct;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)notifyObservers:(id)a0;
- (void)_fetchQueuesDidUpdate;
- (id)_processResult:(id)a0 forContainer:(id)a1 fetchQueue:(id)a2;
- (void)_retryAfterBackoff;
- (void)cancelCapabilityLevelRequestForContact:(id)a0;
- (void)cancelCapabilityLevelRequestForContacts:(id)a0;
- (unsigned long long)capabilityLevelForContact:(id)a0;
- (void)fetchCapabilityLevelForContact:(id)a0 timeout:(double)a1 queue:(id)a2 completion:(id /* block */)a3;
- (id)processMapsDictionary:(id)a0;
- (id)processMessagesDictionary:(id)a0;
- (void)requestCapabilityLevelsForContacts:(id)a0;
- (void)verifyBlockedStatuses;

@end
