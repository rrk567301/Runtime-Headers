@class AVConferenceXPCClient, NSObject;
@protocol OS_dispatch_queue, AVCScreenCapturePickerDelegate;

@interface AVCScreenCapturePicker : NSObject {
    NSObject<OS_dispatch_queue> *_screenCapturePickerQueue;
    AVConferenceXPCClient *_connection;
    id<AVCScreenCapturePickerDelegate> _delegate;
    BOOL _isValid;
}

@property (nonatomic) BOOL excludeCurrentApplication;

- (void)invalidate;
- (id)delegate;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (void)dealloc;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)show;
- (void)deregisterBlocksForNotifications;
- (void)registerBlocksForNotifications;
- (void)showUsingContentStyle:(long long)a0;

@end
