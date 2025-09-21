@class NSTimer, NSView, NSString, OBAnimationController, CALayer, NSColor, _BKUIImageView, NSLayoutConstraint, NSImage, NSObject;
@protocol OS_os_log;

@interface BKUIDeviceImageView : NSView {
    NSObject<OS_os_log> *bkui_device_image_log;
}

@property (retain) CALayer *viewLayer;
@property (retain) _BKUIImageView *imageView;
@property (retain) NSImage *deviceImage;
@property (retain, nonatomic) OBAnimationController *animationController;
@property (retain, nonatomic) NSTimer *animationTimer;
@property (retain, nonatomic) NSView *animationView;
@property (retain, nonatomic) NSLayoutConstraint *animationLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *animationTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *animationWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *animationHeightConstraint;
@property (nonatomic) char inDemo;
@property (nonatomic) char inBuddy;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) struct ImageDisplayModel { NSString *baseDeviceImageName; NSString *middleDeviceImageName; NSString *topDeviceImageName; NSColor *baseTintColor; NSColor *middleTintColor; NSColor *topTintColor; NSString *animationAssetName; struct CGPoint { double x; double y; } animationLayoutPoint; struct CGSize { double width; double height; } animationSize; double animationScale; } imageDisplayModel;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (char)hasTouchBar;
- (char)isDark;
- (char)_isJ31x;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_A222deviceDisplayModel;
- (void)_initTouchIDIntroView;
- (struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })_j31xDisplayModel;
- (void)_performIntialAnimationSetup;
- (void)_restartAnimation;
- (id)initForDemo;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayModel:(struct ImageDisplayModel { id x0; id x1; id x2; id x3; id x4; id x5; id x6; struct CGPoint { double x0; double x1; } x7; struct CGSize { double x0; double x1; } x8; double x9; })a1;
- (char)isA2xxDevice:(unsigned short)a0;
- (void)updateDeviceImage;

@end
