@class NSError;

@interface SKAAccountProvider : SwiftNativeNSObject <SKAAccountProviding> {
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ credentialRenewalTask;
}

- (id)presenceJwtTokenForPrimaryAccountWithError:(id *)a0;
- (id)init;
- (id)statusJwtTokenForPrimaryAccountWithError:(id *)a0;
- (void)refreshCredentialForPrimaryAccountWithCompletion:(void (^)(NSError *))a0;

@end
