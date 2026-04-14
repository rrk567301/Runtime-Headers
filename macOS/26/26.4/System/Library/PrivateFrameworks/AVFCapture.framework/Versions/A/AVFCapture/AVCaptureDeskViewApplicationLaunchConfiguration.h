@class NSUUID, AVCaptureDevice;

@interface AVCaptureDeskViewApplicationLaunchConfiguration : NSObject {
    BOOL _requiresSetupCompletion;
    AVCaptureDevice *_preferredDeskViewCamera;
    NSUUID *_screenSharingSessionUUID;
}

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mainWindowFrame;
@property BOOL requiresSetUpModeCompletion;

- (id)init;
- (void)dealloc;
- (id)preferredDeskViewCamera;
- (id)screenSharingSessionUUID;
- (void)setPreferredDeskViewCamera:(id)a0;
- (void)setScreenSharingSessionUUID:(id)a0;

@end
