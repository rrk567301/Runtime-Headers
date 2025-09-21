@class NSString, NSTimer, NSTrackingArea, QLControlTooltip, NSLayoutConstraint;
@protocol QLControl;

@interface QLControlCommon : NSObject {
    NSTrackingArea *_trackingArea;
    QLControlTooltip *_tooltipWindow;
    id /* block */ _menuProvider;
    NSTimer *_menuTimer;
    BOOL _canShowMenu;
    BOOL _trackingButton;
    NSLayoutConstraint *_widthConstraint;
}

@property (readonly, weak) id<QLControl> qlcontrol;
@property (copy, nonatomic) NSString *controlIdentifier;
@property (copy) id /* block */ menuProvider;

- (void)mouseDown:(id)a0;
- (void)tearDown;
- (void)dealloc;
- (BOOL)imageButton;
- (void)sizeToFit;
- (void).cxx_destruct;
- (void)rightMouseDown:(id)a0;
- (void)updateTooltip;
- (void)updateTitle;
- (void)setupTrackingArea;
- (void)_showButtonMenuFromTimer:(id)a0;
- (void)_showButtonMenuWithEvent:(id)a0;
- (void)_showTooltipWithText:(id)a0;
- (void)closeTooltip;
- (id)initWithQLControl:(id)a0;
- (id)processImage:(id)a0;
- (void)tearDownTrackingArea;

@end
