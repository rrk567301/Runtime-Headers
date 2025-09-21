@class NSString;

@interface GameStoreKit.JSMediaTokenServiceObject : NSObject <_TtP12GameStoreKitP33_6E9851FFB5729873336226EDC9072A8032JSMediaTokenServiceObjectExports_> {
    void /* unknown type, empty encoding */ tokenService;
}

@property (nonatomic, readonly) NSString *tokenString;

- (id)init;
- (void)resetToken;
- (void).cxx_destruct;
- (id)refreshToken;
- (id)overrideToken:(id)a0;

@end
