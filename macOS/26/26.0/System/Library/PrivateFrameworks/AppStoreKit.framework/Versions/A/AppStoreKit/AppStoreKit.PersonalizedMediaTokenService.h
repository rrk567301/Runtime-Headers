@interface AppStoreKit.PersonalizedMediaTokenService : NSObject <AMSMediaTokenServiceProtocol> {
    void /* unknown type, empty encoding */ tokenService;
    void /* unknown type, empty encoding */ accounts;
    void /* unknown type, empty encoding */ queue;
}

- (id)init;
- (void)invalidateMediaToken;
- (id)fetchMediaToken;
- (void).cxx_destruct;
- (void)accountsDidChange;

@end
