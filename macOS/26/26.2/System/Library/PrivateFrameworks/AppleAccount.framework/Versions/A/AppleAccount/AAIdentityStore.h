@class AAIdentity, ACAccount;

@interface AAIdentityStore : NSObject {
    void /* unknown type, empty encoding */ daemonConnection;
}

- (void).cxx_destruct;
- (id)init;
- (void)fetchIdentityFor:(ACAccount *)a0 completionHandler:(void (^)(AAIdentity *))a1;

@end
