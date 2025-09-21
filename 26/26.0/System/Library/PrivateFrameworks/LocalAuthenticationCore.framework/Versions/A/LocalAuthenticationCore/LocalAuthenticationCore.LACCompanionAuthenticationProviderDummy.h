@protocol LACCompanionAuthenticationProviderDelegate;

@interface LocalAuthenticationCore.LACCompanionAuthenticationProviderDummy : NSObject <LACCompanionAuthenticationProviding> {
    void /* unknown type, empty encoding */ companion;
    void /* unknown type, empty encoding */ replyQueue;
}

@property (nonatomic, retain) id<LACCompanionAuthenticationProviderDelegate> delegate;
@property (nonatomic, readonly) BOOL isAvailable;

- (id)init;
- (void).cxx_destruct;
- (id)authenticateWithRequest:(id)a0;
- (void)cancelAuthenticationWithID:(id)a0;
- (void)domainStateForRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithCompanion:(long long)a0 replyQueue:(id)a1;

@end
