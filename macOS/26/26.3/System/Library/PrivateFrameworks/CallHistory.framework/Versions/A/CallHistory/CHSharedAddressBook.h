@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable

@property (retain) NSMutableDictionary *addressBookCache;

+ (id)get;

- (id)init;
- (void)insertAddressBookInfoDictionaryIntoCache:(id)a0;
- (void).cxx_destruct;
- (void)revertAddressBook:(id)a0;
- (void)dealloc;
- (void)insertAddressBookInfoIntoCache:(id)a0 forKey:(id)a1;
- (void)registerForContactsNotifications;
- (unsigned long long)cachedCount;
- (void)cleanUpAddressBookCache_sync;
- (id)fetchAddressBookInfoFromCacheForKey:(id)a0;
- (void)sendABChangedNotificationSyncWithUserInfo:(id)a0;

@end
