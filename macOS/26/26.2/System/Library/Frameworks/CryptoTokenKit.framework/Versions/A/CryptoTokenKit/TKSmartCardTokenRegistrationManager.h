@class NSArray;
@protocol TKSmartCardTokenRegistrationXPCClient;

@interface TKSmartCardTokenRegistrationManager : NSObject {
    id<TKSmartCardTokenRegistrationXPCClient> _remoteObjectProxy;
}

@property (class, readonly) TKSmartCardTokenRegistrationManager *defaultManager;

@property (readonly) NSArray *registeredSmartCardTokens;

- (void).cxx_destruct;
- (id)init;
- (BOOL)registerSmartCardWithTokenID:(id)a0 promptMessage:(id)a1 error:(id *)a2;
- (BOOL)unregisterSmartCardWithTokenID:(id)a0 error:(id *)a1;

@end
