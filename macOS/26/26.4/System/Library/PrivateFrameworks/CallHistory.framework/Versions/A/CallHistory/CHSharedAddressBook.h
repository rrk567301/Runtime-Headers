@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable

@property (retain) NSMutableDictionary *addressBookCache;

+ (id)get;

- (void)sendABChangedNotificationSyncWithUserInfo:(id)a0;
- (void)registerForContactsNotifications;
- (void)revertAddressBook:(id)a0;
- (void).cxx_destruct;
- (void)insertAddressBookInfoDictionaryIntoCache:(id)a0;
- (void)cleanUpAddressBookCache_sync;
- (id)init;
- (id)fetchAddressBookInfoFromCacheForKey:(id)a0;
- (unsigned long long)cachedCount;
- (void)dealloc;
- (void)insertAddressBookInfoIntoCache:(id)a0 forKey:(id)a1;

@end
