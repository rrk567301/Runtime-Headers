@class OSIPowerButtonMonitor, OSInstallOptions, NSString, IASUnifiedProgressClient, NSObject, OSIPowerController;
@protocol OSIUABaseControllerDelegate;

@interface OSIUABaseController : NSObject <OSIPowerControllerDelegate, OSIPowerButtonMonitorDelegate>

@property (retain) OSIPowerController *powerManager;
@property (retain) OSIPowerButtonMonitor *powerButtonMonitor;
@property (retain) IASUnifiedProgressClient *progressClient;
@property (weak) NSObject<OSIUABaseControllerDelegate> *delegate;
@property (retain) OSInstallOptions *options;
@property char operationWasSuccessful;
@property (retain) NSString *overrideProgressPhaseName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)failureReasonForError:(id)a0;
+ (id)progressPhaseName;

- (id)init;
- (void).cxx_destruct;
- (char)startOperation;
- (void)lowBatteryStatusChanged:(char)a0;
- (void)powerButtonPressed;
- (char)prepareForReboot;
- (void)quitOrReboot;

@end
