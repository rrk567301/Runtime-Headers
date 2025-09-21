@class NSString;

@interface AMSMediaTokenServiceKeychainStore : NSObject

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *keychainAccessGroup;

- (void).cxx_destruct;
- (struct __CFDictionary { } *)_copyKeychainQuery;
- (char)_removeTokenFromKeychain;
- (char)deleteToken;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1;
- (id)retrieveToken;
- (char)storeToken:(id)a0;

@end
