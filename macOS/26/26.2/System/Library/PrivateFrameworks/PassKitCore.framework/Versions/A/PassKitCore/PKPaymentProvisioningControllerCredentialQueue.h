@class NSMutableArray;

@interface PKPaymentProvisioningControllerCredentialQueue : NSObject {
    NSMutableArray *_credentials;
    NSMutableArray *_completedCredentials;
    unsigned long long _currentIndex;
}

- (unsigned long long)count;
- (unsigned long long)remaining;
- (void).cxx_destruct;
- (id)credentials;
- (id)init;
- (unsigned long long)completedCount;
- (id)completedCredentials;
- (id)nextCredentialToProvision;
- (void)removeCredential:(id)a0;
- (void)setCredentialsToProvision:(id)a0;
- (void)setCurrentCredential:(id)a0;

@end
