@class AAIdentity, ACAccount;

@interface AAIdentityStore : NSObject {
    void /* unknown type, empty encoding */ daemonConnection;
}

- (void).cxx_destruct;
- (id)init;
- (void)fetchIdentityForAccount:(ACAccount *)a0 withCompletion:(void (^)(AAIdentity *))a1;

@end
