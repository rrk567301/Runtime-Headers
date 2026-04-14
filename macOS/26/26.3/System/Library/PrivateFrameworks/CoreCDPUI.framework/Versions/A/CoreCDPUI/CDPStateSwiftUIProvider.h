@class NSArray, NSImage, CDPContext, CDPRemoteDeviceSecretValidator, NSViewController, NSWindow;

@interface CDPStateSwiftUIProvider : NSObject

+ (id)makeSwiftUIViewForDeviceSelectionWithDevices:(id)a0 scrollAfterHeight:(double)a1 onDeviceSelected:(id /* block */)a2;
+ (void)makeSwiftUIViewForRemoteSecretDuringSignInCdpContext:(CDPContext *)a0 validator:(CDPRemoteDeviceSecretValidator *)a1 devices:(NSArray *)a2 presentingWindow:(NSWindow *)a3 displayImage:(NSImage *)a4 offeringRemoteApproval:(BOOL)a5 canShowRPD:(BOOL)a6 performingAccountRecovery:(BOOL)a7 completionHandler:(void (^)(NSViewController *))a8;

- (id)init;

@end
