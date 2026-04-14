@class NSProgressIndicator, NSString, NSTextField;

@interface PMmacOSProgressIndicatorView : NSView

@property (retain, nonatomic) NSProgressIndicator *progressIndicator;
@property (retain, nonatomic) NSTextField *textField;
@property (nonatomic) double progress;
@property (retain, nonatomic) NSString *text;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToSuperview;

@end
