@class AAIdentity, ACAccount;

@interface AAIdentityStore : NSObject {
    void /* unknown type, empty encoding */ daemonConnection;
}

- (id)init;
- (void).cxx_destruct;
- (void)fetchIdentityFor:(ACAccount *)a0 completionHandler:(void (^)(AAIdentity *))a1;

@end
