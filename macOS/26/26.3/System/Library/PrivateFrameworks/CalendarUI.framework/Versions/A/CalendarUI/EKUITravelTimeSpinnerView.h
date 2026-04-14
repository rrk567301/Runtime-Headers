@class NSProgressIndicator, NSTextField;

@interface EKUITravelTimeSpinnerView : NSView

@property (retain) NSProgressIndicator *spinner;
@property (retain) NSTextField *textfield;

- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)animate;

@end
