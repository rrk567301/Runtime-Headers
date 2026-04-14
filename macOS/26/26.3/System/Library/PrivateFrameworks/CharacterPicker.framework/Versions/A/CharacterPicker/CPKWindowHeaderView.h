@class NSButton;

@interface CPKWindowHeaderView : NSView

@property (retain, nonatomic) NSButton *closeButton;
@property (retain, nonatomic) NSButton *showCVButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)connectTargetActionsToCPKWindow:(id)a0;
- (id)createCloseButton;

@end
