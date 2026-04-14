@class NSString, NSURL, NSUbiquitousKeyValueStore, NSSet, NSMutableDictionary, CNContactStore, NSObject, EAEmailAddressSet;
@protocol OS_os_log, EDVIPManagerDelegate, EDAccountsProvider, OS_dispatch_queue;

@interface EDVIPManager : NSObject <EFLoggable, EMVIPManager> {
    NSMutableDictionary *_vipsByIdentifier;
    EAEmailAddressSet *_cachedEmailAddresses;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _initializeLock;
    BOOL _initialized;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSUbiquitousKeyValueStore *keyValueStore;
@property (readonly, nonatomic) id<EDAccountsProvider> accountsProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (readonly, nonatomic) NSURL *plistURL;
@property (weak, nonatomic) id<EDVIPManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *allVIPs;
@property (readonly, copy, nonatomic) EAEmailAddressSet *allVIPEmailAddresses;
@property (readonly, nonatomic) BOOL hasVIPs;

+ (id)_contactDescriptors;

- (void)_updateLocalWithCloud:(id)a0 refresh:(BOOL)a1;
- (void)removeVIPsWithEmailAddresses:(id)a0;
- (id)initWithDirectoryURL:(id)a0 accountsProvider:(id)a1 delegate:(id)a2;
- (void)_loadVIPs;
- (id)_contactFromContacts:(id)a0 matchingMostAddresses:(id)a1;
- (void)_removeVIPsWithIdentifiers:(id)a0;
- (void)_keyValueStoreChanged:(id)a0;
- (void)_synchronizeKVStore;
- (id)vipWithIdentifier:(id)a0;
- (void)getAllVIPsWithCompletion:(id /* block */)a0;
- (BOOL)isVIPAddress:(id)a0;
- (id)_cloudKeyForIdentifier:(id)a0;
- (id)_allVIPEmailAddresses;
- (BOOL)_isVIPForContact:(id)a0 orAddresses:(id)a1;
- (void)_saveVIPs;
- (void)_saveVIPsLocally;
- (void).cxx_destruct;
- (id)_validatedCloudVIPFromStore:(id)a0 withCloudKey:(id)a1;
- (void)removeVIPsWithIdentifiers:(id)a0;
- (id)_contactForName:(id)a0 emailAddresses:(id)a1;
- (id)initWithDirectoryURL:(id)a0 keyValueStore:(id)a1 accountsProvider:(id)a2 contactStore:(id)a3 delegate:(id)a4;
- (id)_vipsDictionary;
- (void)dealloc;
- (void)_updateCloudWithLocal;
- (id)_serializedData;
- (void)saveVIPs:(id)a0;
- (void)_initializeKVSStore;
- (id)allVIPWaitForResult;
- (void)_accountsChanged:(id)a0;
- (void)gatherStatisticsWithVIPCount:(unsigned long long)a0;
- (id)_partiallyRedactedVIPDictionary:(id)a0;
- (void)_mergeVIPs;

@end
