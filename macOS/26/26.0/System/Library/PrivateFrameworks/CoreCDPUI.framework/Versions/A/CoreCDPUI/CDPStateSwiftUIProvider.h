@class NSArray, NSImage, CDPContext, CDPRemoteDeviceSecretValidator, NSViewController, NSWindow;

@interface CDPStateSwiftUIProvider : NSObject

+ (id)makeSwiftUIViewForEDPTokenInSpyglassWithRecoveryToken:(id)a0 parentWindow:(id)a1;
+ (id)makeSwiftUIViewForDeviceSelectionWithDevices:(id)a0 scrollAfterHeight:(double)a1 onDeviceSelected:(id /* block */)a2;
+ (id)makeSwiftUIViewForEDPTokenIntroScreenWithDelegate:(id)a0 secondaryButtonTitle:(id)a1 isHSA2Enabled:(BOOL)a2;
+ (id)makeSwiftUIViewForEDPTokenSuccessScreenWithFullDataAccessRestored:(BOOL)a0 buttonHandler:(id /* block */)a1;
+ (void)makeSwiftUIViewForRemoteSecretDuringSignInCdpContext:(CDPContext *)a0 validator:(CDPRemoteDeviceSecretValidator *)a1 devices:(NSArray *)a2 presentingWindow:(NSWindow *)a3 displayImage:(NSImage *)a4 offeringRemoteApproval:(BOOL)a5 canShowRPD:(BOOL)a6 performingAccountRecovery:(BOOL)a7 completionHandler:(void (^)(NSViewController *))a8;

- (id)init;

@end
