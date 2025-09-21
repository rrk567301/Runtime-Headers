@class NSControl, NSString, NSImage, QLControlCommon;

@interface QLControlButton : NSButton <QLControl> {
    NSImage *_originalImage;
}

@property (retain) QLControlCommon *common;
@property (copy) id /* block */ menuProvider;
@property (readonly) NSControl *control;
@property (copy) NSString *controlIdentifier;
@property int style;
@property int segmentedStyle;
@property char alternate;
@property char sendActionOnMouseDown;
@property double tooltipMargin;
@property (getter=isEnabled) char enabled;
@property (getter=isShown) char shown;
@property (retain) NSImage *image;
@property (readonly) NSImage *originalImage;
@property (copy) NSString *toolTip;
@property (copy) NSString *title;
@property (copy) NSString *keyEquivalent;
@property (getter=isHidden) char hidden;
@property SEL action;
@property (weak) id target;
@property double preferredButtonWidth;
@property double buttonPadding;
@property unsigned long long trackingMode;
@property (nonatomic) char highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(char)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)rightMouseDown:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)sizeToFit;
- (void)viewDidHide;
- (void)viewDidMoveToWindow;
- (void)viewDidUnhide;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_updateStyle;
- (double)MediaUI_slice;
- (void)_updateTooltip;

@end
