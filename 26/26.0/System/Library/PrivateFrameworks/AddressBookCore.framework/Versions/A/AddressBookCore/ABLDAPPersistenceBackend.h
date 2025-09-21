@class NSString;

@interface ABLDAPPersistenceBackend : NSObject <ABAccountPersistenceBackend> {
    NSString *_uid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)uid;
- (id)accountTypeIdentifier;
- (void)dealloc;
- (id)initWithUID:(id)a0;
- (id)acAccountIdentifier;
- (id)addressBookDomainName;
- (void)deletePersistentValuesWithAddressBook:(id)a0;
- (id)loadPersistentValues;
- (id)parentAccountTypeIdentifier;
- (void)rediscoverPersistentValuesWithCompletionHandler:(id /* block */)a0;
- (BOOL)savePersistentValues:(id)a0;
- (BOOL)savePersistentValues:(id)a0 postNotifications:(BOOL)a1;
- (id)userDefaultKeyToKeyPathMapping;

@end
