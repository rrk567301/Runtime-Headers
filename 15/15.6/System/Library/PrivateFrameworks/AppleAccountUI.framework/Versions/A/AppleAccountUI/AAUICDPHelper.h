@class NSWindow;

@interface AAUICDPHelper : NSObject

@property (nonatomic) char forceInline;
@property (readonly, weak, nonatomic) NSWindow *presentingWindow;

+ (char)isWalrusEnabled;
+ (id)cdpContextForPrimaryAccount;
+ (id)cdpContextForPrimaryAccountWithAuthenticationResults:(id)a0;
+ (id)helperWithPresenter:(id)a0;
+ (char)isEDPEligible;

- (void).cxx_destruct;
- (id)cdpStateControllerForPrimaryAccount;
- (id)cdpStateControllerWithContext:(id)a0;

@end
