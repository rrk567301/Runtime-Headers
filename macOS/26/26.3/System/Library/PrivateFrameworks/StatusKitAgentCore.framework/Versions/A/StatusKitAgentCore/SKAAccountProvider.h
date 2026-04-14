@class NSError;

@interface SKAAccountProvider : SwiftNativeNSObject <SKAAccountProviding> {
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ credentialRenewalTask;
}

- (id)presenceJwtTokenForPrimaryAccountWithError:(id *)a0;
- (id)init;
- (void)refreshCredentialForPrimaryAccountWithCompletion:(void (^)(NSError *))a0;
- (id)statusJwtTokenForPrimaryAccountWithError:(id *)a0;

@end
