@class NSString;

@interface KeychainMasterHandler : NSObject {
    struct __SecKeychain { } *_keychainRef;
    long long _moduleHandle;
    int _errorStatus;
    NSString *_errorString;
}

- (void)dealloc;
- (int)errorStatus;
- (id)errorString;
- (char)_checkStatus:(int)a0 context:(id)a1;
- (id)extractMasterKey;
- (id)initWithKeychain:(struct __SecKeychain { } *)a0;
- (char)prepareKeychainWithPasswordCredential:(id)a0;

@end
