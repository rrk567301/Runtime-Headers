@class NSDictionary, ACDAccountStore, ACAccount, NSError;

@interface AccountsDaemon.ACDAsyncAuthenticationPluginManager : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ authPluginLoader;
    void /* unknown type, empty encoding */ authPluginsByType;
    void /* unknown type, empty encoding */ renewalTasksByKey;
}

- (id)init;
- (id)initWith:(id)a0;
- (void)renewCredentialFor:(ACAccount *)a0 with:(ACDAccountStore *)a1 options:(NSDictionary *)a2 completionHandler:(void (^)(long long, NSError *))a3;

@end
