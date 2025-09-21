@class NSSet, NSString, CDPContext;

@interface CPUI_AuthKitAuth_SignInFlowControllerDelegate : NSObject <AASignInFlowControllerDelegate>

@property (retain, nonatomic) CDPContext *cdpContext;
@property (nonatomic) char skipCDPEnablement;
@property (nonatomic) char backgroundDataclassEnablement;
@property (nonatomic) char skipDataclassEnablement;
@property (copy, nonatomic) NSSet *requiredTerms;
@property (copy, nonatomic) NSString *deviceOSVersion;
@property (nonatomic) char newSignInReauth;
@property (nonatomic) char shouldStashLoginResponse;
@property (nonatomic) unsigned long long findMyActivationAction;
@property (nonatomic, getter=isFastSignInEnabled) char fastSignInEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
