@class LARecoveryCredential;

@interface ODLARecoveryCredential : NSObject {
    LARecoveryCredential *_underlying;
}

+ (id)iCloudRecoveryCredentialWithPassword:(id)a0;
+ (id)installerRecoveryCredentialWithPassword:(id)a0;
+ (id)institutionalRecoveryCredentialWithPassword:(id)a0;
+ (id)mdmRecoveryCredentialWithPassword:(id)a0;
+ (id)personalRecoveryCredentialWithPassword:(id)a0;

- (void)dealloc;

@end
