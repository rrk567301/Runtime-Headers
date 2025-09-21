@class NSString;

@interface AMSMediaTokenServiceKeychainStore : AMSKeychainStore <AMSMediaTokenServiceKeychainStoreProtocol>

@property (copy, nonatomic) NSString *keychainAccessGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)retrieveToken;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1;
- (BOOL)storeToken:(id)a0;
- (id)initWithIdentifier:(id)a0 keychainAccessGroup:(id)a1 keychainAddFunc:(void /* function */ *)a2 keychainCopyFunc:(void /* function */ *)a3 keychainDeleteFunc:(void /* function */ *)a4;
- (BOOL)deleteToken;

@end
