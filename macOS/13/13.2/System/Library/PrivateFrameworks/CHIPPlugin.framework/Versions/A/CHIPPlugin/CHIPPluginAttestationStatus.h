@class NSNumber, NSString, CHIPPluginUIDialogPresenter, CHIPAccessoryServer, NSObject;
@protocol OS_dispatch_queue;

@interface CHIPPluginAttestationStatus : NSObject <MTRDeviceAttestationDelegate>

@property (retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) CHIPAccessoryServer *accessoryServer;
@property (retain, nonatomic) CHIPPluginUIDialogPresenter *uiDialogPresenter;
@property (readonly, copy) NSNumber *failSafeExpiryTimeoutSecs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
