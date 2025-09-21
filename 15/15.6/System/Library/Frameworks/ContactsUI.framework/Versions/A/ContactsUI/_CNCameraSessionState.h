@class AVCaptureSession;

@interface _CNCameraSessionState : NSObject

@property (retain, nonatomic) AVCaptureSession *session;
@property (nonatomic, getter=isActive) char active;
@property (nonatomic, getter=isConfigured) char configured;

- (void).cxx_destruct;

@end
