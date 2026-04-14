@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable

@property (retain) NSMutableDictionary *addressBookCache;

+ (id)get;

- (void)sendABChangedNotificationSyncWithUserInfo:(id)a0;
- (void)insertAddressBookInfoDictionaryIntoCache:(id)a0;
- (unsigned long long)cachedCount;
- (void)cleanUpAddressBookCache_sync;
- (id)fetchAddressBookInfoFromCacheForKey:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)insertAddressBookInfoIntoCache:(id)a0 forKey:(id)a1;
- (void)revertAddressBook:(id)a0;
- (void)registerForContactsNotifications;
- (id)init;

@end
