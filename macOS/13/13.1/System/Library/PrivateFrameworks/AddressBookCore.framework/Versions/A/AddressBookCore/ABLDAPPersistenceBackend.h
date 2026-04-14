@class NSString;

@interface ABLDAPPersistenceBackend : NSObject <ABAccountPersistenceBackend> {
    NSString *_uid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)uid;
- (id)accountTypeIdentifier;
- (id)acAccountIdentifier;
- (id)parentAccountTypeIdentifier;
- (id)loadPersistentValues;
- (void)rediscoverPersistentValuesWithCompletionHandler:(id /* block */)a0;
- (BOOL)savePersistentValues:(id)a0 postNotifications:(BOOL)a1;
- (void)deletePersistentValuesWithAddressBook:(id)a0;
- (BOOL)savePersistentValues:(id)a0;
- (id)initWithUID:(id)a0;
- (id)userDefaultKeyToKeyPathMapping;
- (id)addressBookDomainName;

@end
