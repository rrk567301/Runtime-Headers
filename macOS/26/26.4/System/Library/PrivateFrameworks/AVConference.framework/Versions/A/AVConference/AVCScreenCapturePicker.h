@class AVConferenceXPCClient, NSObject;
@protocol OS_dispatch_queue, AVCScreenCapturePickerDelegate;

@interface AVCScreenCapturePicker : NSObject {
    NSObject<OS_dispatch_queue> *_screenCapturePickerQueue;
    AVConferenceXPCClient *_connection;
    id<AVCScreenCapturePickerDelegate> _delegate;
    BOOL _isValid;
}

@property (nonatomic) BOOL excludeCurrentApplication;

- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (id)delegate;
- (void)invalidate;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (void)dealloc;
- (void)show;
- (void)deregisterBlocksForNotifications;
- (void)registerBlocksForNotifications;
- (void)showUsingContentStyle:(long long)a0;

@end
