@interface GameStoreKit.PersonalizedMediaTokenService : NSObject <AMSMediaTokenServiceProtocol> {
    void /* unknown type, empty encoding */ tokenService;
    void /* unknown type, empty encoding */ accounts;
    void /* unknown type, empty encoding */ queue;
}

- (void).cxx_destruct;
- (id)fetchMediaToken;
- (id)init;
- (void)invalidateMediaToken;
- (void)accountsDidChange;

@end
