@class PKPassViewController;

@interface PKPassScrollView : NSScrollView

@property char scrollEnabled;
@property char disregardFurtherScrolling;
@property (readonly) char inMomentumScrolling;
@property (retain) PKPassViewController *selectedViewController;

- (void).cxx_destruct;
- (void)scrollWheel:(id)a0;

@end
