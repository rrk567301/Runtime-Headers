@class EDTransactionService, NSString, EDConversationRemoteCloudKitStorage, NSObject;
@protocol OS_os_log, EDConversationRemoteStorageDelegate, OS_dispatch_queue, EDConversationRemoteStorage;

@interface EDConversationMultipleRemoteStorage : NSObject <EDConversationRemoteStorageDelegate, EDConversationRemoteStorage, EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (weak, nonatomic) id<EDConversationRemoteStorageDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (retain, nonatomic) id<EDConversationRemoteStorage> kvsStorage;
@property (retain, nonatomic) EDConversationRemoteCloudKitStorage *cloudKitStorage;
@property (retain, nonatomic) EDTransactionService *dataReplicationTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)conversationRemoteStorage:(id)a0 didChangeEntries:(id)a1 reason:(long long)a2;
- (void)refresh;
- (id)dictionaryForKey:(id)a0;
- (BOOL)isInitialized;
- (BOOL)synchronize;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)_replicateAllContentFromStore:(id)a0 toStore:(id)a1 synchronize:(BOOL)a2;
- (void)conversationRemoteStorageDidInitialize:(id)a0;
- (void)_saveChanges:(id)a0 fromStorage:(id)a1 toStorage:(id)a2 synchronize:(BOOL)a3;
- (void).cxx_destruct;
- (void)conversationRemoteStorageWillResetData:(id)a0;
- (void)_handleStorageReady:(id)a0;
- (void)conversationRemoteStorageDidResetData:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDelegate:(id)a0;
- (id)storageName;
- (void)removeDictionaryForKey:(id)a0;

@end
