@class NSMutableArray;

@interface PKPaymentProvisioningControllerCredentialQueue : NSObject {
    NSMutableArray *_credentials;
    NSMutableArray *_completedCredentials;
    unsigned long long _currentIndex;
}

- (id)init;
- (unsigned long long)count;
- (void).cxx_destruct;
- (unsigned long long)completedCount;
- (void)setCredentialsToProvision:(id)a0;
- (void)removeCredential:(id)a0;
- (id)nextCredentialToProvision;
- (void)setCurrentCredential:(id)a0;
- (unsigned long long)remaining;
- (id)credentials;
- (id)completedCredentials;

@end
