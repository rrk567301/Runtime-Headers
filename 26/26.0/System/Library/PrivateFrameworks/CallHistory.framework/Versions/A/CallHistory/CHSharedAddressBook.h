@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable

@property (retain) NSMutableDictionary *addressBookCache;

+ (id)get;

- (void)dealloc;
- (id)fetchAddressBookInfoFromCacheForKey:(id)a0;
- (unsigned long long)cachedCount;
- (void)sendABChangedNotificationSyncWithUserInfo:(id)a0;
- (void)revertAddressBook:(id)a0;
- (id)init;
- (void)registerForContactsNotifications;
- (void)insertAddressBookInfoIntoCache:(id)a0 forKey:(id)a1;
- (void)insertAddressBookInfoDictionaryIntoCache:(id)a0;
- (void).cxx_destruct;
- (void)cleanUpAddressBookCache_sync;

@end
