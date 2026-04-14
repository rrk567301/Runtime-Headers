@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable

@property (retain) NSMutableDictionary *addressBookCache;

+ (id)get;

- (void)registerForContactsNotifications;
- (void)insertAddressBookInfoIntoCache:(id)a0 forKey:(id)a1;
- (void)cleanUpAddressBookCache_sync;
- (unsigned long long)cachedCount;
- (id)fetchAddressBookInfoFromCacheForKey:(id)a0;
- (void).cxx_destruct;
- (void)revertAddressBook:(id)a0;
- (void)sendABChangedNotificationSyncWithUserInfo:(id)a0;
- (void)insertAddressBookInfoDictionaryIntoCache:(id)a0;
- (id)init;
- (void)dealloc;

@end
