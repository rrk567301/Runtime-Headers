@class NSString, NSArray;

@interface FigCaptureClientSessionMonitorClient : NSObject

@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *applicationID;
@property (readonly, nonatomic) int clientType;
@property (readonly, nonatomic, getter=isForThirdPartyTorch) BOOL forThirdPartyTorch;
@property (readonly, nonatomic, getter=isSwiftPlaygroundsDevelopmentApp) BOOL swiftPlaygroundsDevelopmentApp;
@property (readonly, nonatomic, getter=hasBackgroundCameraAccess) BOOL backgroundCameraAccess;
@property (readonly, nonatomic, getter=isExtension) BOOL extension;
@property (readonly, nonatomic) int extensionRootHostPID;
@property (readonly, nonatomic) NSString *extensionRootHostApplicationID;
@property (readonly, nonatomic) NSArray *avconferenceClientApplicationIDs;
@property (readonly, nonatomic) id /* block */ applicationAndLayoutStateHandler;
@property (readonly, nonatomic) id /* block */ interruptionHandler;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)invalidate;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 forThirdPartyTorch:(BOOL)a1 applicationAndLayoutStateHandler:(id /* block */)a2 interruptionHandler:(id /* block */)a3;

@end
