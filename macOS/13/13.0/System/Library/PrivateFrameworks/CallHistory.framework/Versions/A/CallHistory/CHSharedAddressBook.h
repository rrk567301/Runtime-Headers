@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable

@property (retain) NSMutableDictionary *addressBookCache;

+ (id)get;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)cachedCount;
- (void)revertAddressBook:(id)a0;
- (void)registerForContactsNotifications;
- (void)sendABChangedNotificationSyncWithUserInfo:(id)a0;
- (void)cleanUpAddressBookCache_sync;
- (void)insertAddressBookInfoDictionaryIntoCache:(id)a0;
- (void)insertAddressBookInfoIntoCache:(id)a0 forKey:(id)a1;
- (id)fetchAddressBookInfoFromCacheForKey:(id)a0;

@end
