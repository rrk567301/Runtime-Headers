@class NSString, EDMessagePersistence, EDPersistenceHookRegistry;
@protocol EMMutableDictionaryProtocol;

@interface EDReadLaterCloudStorage : NSObject <EMUbiquitouslyPersistedDictionaryDelegate, EDMessageChangeHookResponder, EDReadLaterCloudStorageDateProvider> {
    id<EMMutableDictionaryProtocol> _persistentDictionary;
}

@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_keyForMessage:(id)a0;
- (id)_dateFromDictionary:(id)a0 forKey:(id)a1;
- (id)_messageHashForKey:(id)a0;
- (void)addEntryForMessage:(id)a0 date:(id)a1;
- (id)cloudStorageReadLaterDateForMessage:(id)a0 displayDate:(id *)a1;
- (id)initWithHookRegistry:(id)a0;
- (id)initWithMutableDictionary:(id)a0 hookRegistry:(id)a1;
- (void)persistedDictionaryDidChangeRemotelyWithChangedItems:(id)a0 deletedItems:(id)a1;
- (void)persistenceDidChangeReadLaterDate:(id)a0 messages:(id)a1 changeIsRemote:(char)a2 generationWindow:(id)a3;
- (void)persistenceDidUpdateDisplayDateForMessages:(id)a0 changeIsRemote:(char)a1 generation:(long long)a2;
- (void)removeEntryForMessage:(id)a0;
- (void)updateDisplayDateForMessage:(id)a0 displayDate:(id)a1;

@end
