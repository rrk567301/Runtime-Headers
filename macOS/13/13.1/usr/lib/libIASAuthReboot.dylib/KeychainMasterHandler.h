@class NSString;

@interface KeychainMasterHandler : NSObject {
    struct __SecKeychain { } *_keychainRef;
    long long _moduleHandle;
    int _errorStatus;
    NSString *_errorString;
}

- (void)dealloc;
- (id)errorString;
- (int)errorStatus;
- (id)initWithKeychain:(struct __SecKeychain { } *)a0;
- (id)extractMasterKey;
- (BOOL)prepareKeychainWithPasswordCredential:(id)a0;
- (BOOL)prepareKeychainWithMasterKeyCredential:(id)a0;
- (BOOL)_checkStatus:(int)a0 context:(id)a1;

@end
