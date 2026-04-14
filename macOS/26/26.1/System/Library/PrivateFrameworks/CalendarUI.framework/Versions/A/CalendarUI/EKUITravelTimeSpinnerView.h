@class NSProgressIndicator, NSTextField;

@interface EKUITravelTimeSpinnerView : NSView

@property (retain) NSProgressIndicator *spinner;
@property (retain) NSTextField *textfield;

- (void)animate;
- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (id)init;

@end
