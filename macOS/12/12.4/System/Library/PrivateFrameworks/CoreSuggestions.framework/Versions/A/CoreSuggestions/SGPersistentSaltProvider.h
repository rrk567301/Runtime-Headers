@class _PASLock, NSString;

@interface SGPersistentSaltProvider : NSObject {
    _PASLock *_lock;
    NSString *_serviceIdentifier;
    NSString *_accessGroup;
}

+ (id)hexStringForData:(id)a0;
+ (id)saltProviderFromKeyChainWithServiceIdentifier:(id)a0 accessGroup:(id)a1;
+ (id)saltProviderWithString:(id)a0 serviceIdentifier:(id)a1 accessGroup:(id)a2;

- (void).cxx_destruct;
- (id)salt;
- (id)initWithServiceIdentifier:(id)a0 accessGroup:(id)a1;
- (id)_findOrCreateSalt;
- (id)_findExistingSaltError:(out id *)a0;
- (void)_deleteSalt;
- (id)_createSalt;
- (id)_queryKeychainError:(out id *)a0;

@end
