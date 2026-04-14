@class NSProgressIndicator, NSTextField;

@interface EKUITravelTimeSpinnerView : NSView

@property (retain) NSProgressIndicator *spinner;
@property (retain) NSTextField *textfield;

- (void)stop;
- (void)animate;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
