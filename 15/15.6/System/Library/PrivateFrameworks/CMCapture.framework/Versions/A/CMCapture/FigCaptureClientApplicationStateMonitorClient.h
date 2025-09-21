@class FigCaptureProcessHandle, NSString, NSArray, NSObject;
@protocol OS_tcc_identity;

@interface FigCaptureClientApplicationStateMonitorClient : NSObject

@property (readonly, nonatomic) FigCaptureProcessHandle *processHandle;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *applicationID;
@property (readonly, nonatomic) NSString *mediaEnvironment;
@property (retain, nonatomic) NSString *mediaEnvironmentBundleID;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *mediaEnvironmentTCCIdentity;
@property (readonly, nonatomic) int clientType;
@property (readonly, nonatomic, getter=isForThirdPartyTorch) char forThirdPartyTorch;
@property (readonly, nonatomic, getter=isSwiftPlaygroundsDevelopmentApp) char swiftPlaygroundsDevelopmentApp;
@property (readonly, nonatomic, getter=isSecureCaptureExtension) char secureCaptureExtension;
@property (readonly, nonatomic, getter=hasBackgroundCameraAccess) char backgroundCameraAccess;
@property (readonly, nonatomic, getter=isXPCService) char xpcService;
@property (readonly, nonatomic) int xpcServiceRootHostPID;
@property (readonly, nonatomic) NSString *xpcServiceRootHostApplicationID;
@property (readonly, nonatomic) NSArray *avconferenceClientApplicationIDs;
@property (readonly, nonatomic) id /* block */ applicationAndLayoutStateHandler;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)invalidate;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 mediaEnvironment:(id)a1 forThirdPartyTorch:(char)a2 applicationAndLayoutStateHandler:(id /* block */)a3;

@end
