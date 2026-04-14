@class NSObject;
@protocol OS_dispatch_queue;

@interface _LSInProcessSettingsStore : LSSettingsStore

@property struct sqlite3 { } *database;
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned char)userElectionForExtensionKey:(id)a0;
- (void)_internalQueue_loadDatabase;
- (unsigned char)_internalQueue_selectUserElectionForIdentifier:(id)a0;

@end
