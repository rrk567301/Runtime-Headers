@class NSString;

@interface AMSMediaTokenServiceKeychainStore : NSObject

@property (readonly) NSString *clientIdentifier;
@property (retain) NSString *keychainAccessGroup;

- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1;
- (id)retrieveToken;
- (BOOL)storeToken:(id)a0;
- (struct __CFDictionary { } *)_copyKeychainQuery;
- (void)_removeTokenFromKeychain;

@end
