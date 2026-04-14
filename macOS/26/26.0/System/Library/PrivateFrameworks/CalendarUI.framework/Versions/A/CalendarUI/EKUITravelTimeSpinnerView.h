@class NSProgressIndicator, NSTextField;

@interface EKUITravelTimeSpinnerView : NSView

@property (retain) NSProgressIndicator *spinner;
@property (retain) NSTextField *textfield;

- (void)animate;
- (void)dealloc;
- (void)stop;
- (id)init;
- (void).cxx_destruct;

@end
