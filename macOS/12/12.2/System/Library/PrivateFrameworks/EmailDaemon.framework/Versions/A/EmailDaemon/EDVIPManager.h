@class NSString, NSURL, NSUbiquitousKeyValueStore, NSSet, NSMutableDictionary, CNContactStore, NSObject, EAEmailAddressSet;
@protocol OS_os_log, OS_dispatch_queue;

@interface EDVIPManager : NSObject <EFLoggable, EMVIPManager> {
    NSMutableDictionary *_vipsByIdentifier;
    EAEmailAddressSet *_cachedEmailAddresses;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) NSUbiquitousKeyValueStore *keyValueStore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (readonly, nonatomic) NSURL *plistURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *allVIPs;
@property (readonly, copy, nonatomic) EAEmailAddressSet *allVIPEmailAddresses;
@property (readonly, nonatomic) BOOL hasVIPs;

+ (id)_contactDescriptors;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDirectoryURL:(id)a0;
- (id)_serializedData;
- (BOOL)isVIPAddress:(id)a0;
- (id)initWithDirectoryURL:(id)a0 keyValueStore:(id)a1 contactStore:(id)a2;
- (void)_loadVIPs;
- (void)_synchronizeKVStore;
- (void)_updateLocalWithCloud:(id)a0 refresh:(BOOL)a1;
- (void)_keyValueStoreChanged:(id)a0;
- (id)_allVIPEmailAddresses;
- (id)_contactForName:(id)a0 emailAddresses:(id)a1;
- (BOOL)_isVIPForContact:(id)a0 orAddresses:(id)a1;
- (void)_saveVIPs;
- (void)_removeVIPsWithIdentifiers:(id)a0;
- (id)_vipsDictionary;
- (void)_saveVIPsLocally;
- (void)_updateCloudWithLocal;
- (id)_cloudKeyForIdentifier:(id)a0;
- (id)_validatedCloudVIPFromStore:(id)a0 withCloudKey:(id)a1;
- (void)_mergeVIPs;
- (id)_contactFromContacts:(id)a0 matchingMostAddresses:(id)a1;
- (void)getAllVIPsWithCompletion:(id /* block */)a0;
- (id)vipWithIdentifier:(id)a0;
- (void)saveVIPs:(id)a0;
- (void)removeVIPsWithIdentifiers:(id)a0;
- (void)removeVIPsWithEmailAddresses:(id)a0;
- (id)allVIPWaitForResult;

@end
