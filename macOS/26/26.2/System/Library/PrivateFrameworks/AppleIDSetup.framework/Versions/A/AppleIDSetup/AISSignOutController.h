@class AISSignOutContext, NSError;

@interface AISSignOutController : NSObject {
    void /* unknown type, empty encoding */ listenerEndpoint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_daemonConnection;
}

- (void).cxx_destruct;
- (id)init;
- (void)signOutAllAccountsWithContext:(AISSignOutContext *)a0 completion:(void (^)(BOOL, NSError *))a1;

@end
