@class NSObject;
@protocol ScreenReaderCaptureReceiver;

@interface _OutputCaptureClientPortListener : _BaseClientPortListener

@property (retain, nonatomic) NSObject<ScreenReaderCaptureReceiver> *receiver;

- (void)onStart;
- (id)initWithServerPort:(unsigned int)a0 receiver:(id)a1;
- (void)onStop;
- (void)receiveCapturedOutput:(id)a0;
- (void)receiveEventReply:(id)a0;
- (void)receiveHighlightRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)receiveLeaveSharedScreen;

@end
