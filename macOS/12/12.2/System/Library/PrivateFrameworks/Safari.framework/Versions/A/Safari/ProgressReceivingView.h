@protocol ProgressReceivingViewDelegate;

@interface ProgressReceivingView : NSView <ProgressReceiver>

@property (weak, nonatomic) id<ProgressReceivingViewDelegate> delegate;

- (void).cxx_destruct;
- (void)progressSenderProgressWillStart:(id)a0;
- (void)progressSenderProgressDidChange:(id)a0;
- (void)progressSenderProgressDidComplete:(id)a0;

@end
