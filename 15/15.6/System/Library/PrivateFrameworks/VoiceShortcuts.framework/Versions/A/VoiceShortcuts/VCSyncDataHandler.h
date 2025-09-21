@class NSArray, NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface VCSyncDataHandler : NSObject <VCSyncDataHandling>

@property (class, readonly, nonatomic) Class changeClass;
@property (class, readonly, nonatomic) int messageType;

@property (readonly, nonatomic) NSHashTable *servicesTable;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) NSArray *services;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)requestSync;
- (char)resetSyncStateForService:(id)a0 error:(id *)a1;
- (char)applyChanges:(id)a0 fromSyncService:(id)a1 error:(id *)a2;
- (char)deleteSyncedData:(id *)a0;
- (void)deregisterSyncService:(id)a0;
- (char)markChangesAsSynced:(id)a0 withSyncService:(id)a1 metadata:(id)a2 error:(id *)a3;
- (void)registerSyncService:(id)a0;
- (void)requestFullResync;
- (id)unsyncedChangesForSyncService:(id)a0 metadata:(id *)a1 error:(id *)a2;

@end
