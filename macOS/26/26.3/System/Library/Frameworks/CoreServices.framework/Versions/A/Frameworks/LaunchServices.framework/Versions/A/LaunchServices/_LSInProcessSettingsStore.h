@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _LSInProcessSettingsStore : LSSettingsStore {
    NSObject<OS_dispatch_source> *_dbCloseTimer;
}

@property (nonatomic) struct sqlite3 { } *database;
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue;

- (unsigned char)userElectionForExtensionKey:(id)a0;
- (id)init;
- (void)_internalQueue_purgeDatabase;
- (unsigned char)_internalQueue_selectUserElectionForIdentifier:(id)a0;
- (void)_internalQueue_loadDatabase;
- (void).cxx_destruct;
- (void)dealloc;

@end
