@class NSArray, NSImage, CDPContext, NSViewController, NSWindow;
@protocol CDPRemoteDeviceSecretValidatorProtocol;

@interface CoreCDPUI.CDPStateSwiftUIProvider : NSObject

+ (void)makeSwiftUIViewForRemoteSecretDuringSignInCdpContext:(CDPContext *)a0 validator:(id<CDPRemoteDeviceSecretValidatorProtocol>)a1 devices:(NSArray *)a2 presentingWindow:(NSWindow *)a3 displayImage:(NSImage *)a4 offeringRemoteApproval:(BOOL)a5 canShowRPD:(BOOL)a6 performingAccountRecovery:(BOOL)a7 completionHandler:(void (^)(NSViewController *))a8;

- (id)init;

@end
