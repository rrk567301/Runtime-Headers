@class NSBundle, NSImage, NSArray, NSMenu, NSView;
@protocol NSMenuExtraController;

@interface NSMenuExtra : NSStatusItem {
    NSBundle *_bundle;
    NSMenu *_menu;
    NSView *_view;
    double _length;
    struct { unsigned char customView : 1; unsigned char menuDown : 1; unsigned int reserved : 30; } _flags;
    id _controller;
    BOOL _reserved1;
    NSArray *_reserved2;
    double _reserved3;
    double _reserved4;
}

@property (weak, nonatomic) id<NSMenuExtraController> controller;
@property (nonatomic, getter=isMenuDown) BOOL menuDown;
@property (readonly) NSBundle *bundle;
@property (retain, nonatomic) NSImage *alternateImage;
@property (readonly) BOOL convertedForNewUI;
@property (readonly, getter=isMenuDownForAX) BOOL menuDownForAX;
@property (nonatomic) BOOL supportsAnimation;
@property (copy, nonatomic) NSArray *images;
@property (nonatomic) double imageFrameRate;
@property (nonatomic) double maxWidth;

+ (unsigned int)defaultLength;

- (double)length;
- (void)setLength:(double)a0;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (id)target;
- (void)setTarget:(id)a0;
- (void)setAction:(SEL)a0;
- (void)setTitle:(id)a0;
- (void)setAttributedTitle:(id)a0;
- (id)view;
- (void)setImage:(id)a0;
- (BOOL)isEnabled;
- (SEL)action;
- (id)image;
- (void)unload;
- (id)attributedTitle;
- (id)initWithBundle:(id)a0;
- (id)title;
- (void)setView:(id)a0;
- (id)_window;
- (long long)sendActionOn:(unsigned long long)a0;
- (id)_button;
- (void)setToolTip:(id)a0;
- (id)toolTip;
- (id)statusBar;
- (void)_adjustLength;
- (BOOL)highlightMode;
- (void)setHighlightMode:(BOOL)a0;
- (id)_accessibilityElement;
- (void)willUnload;
- (double)defaultLength;
- (id)initWithBundle:(id)a0 data:(id)a1;
- (void)drawMenuBackground:(BOOL)a0;
- (void)popUpMenu:(id)a0;
- (id)_initInStatusBar:(id)a0 withLength:(float)a1 withPriority:(int)a2;
- (void)setAnimationText:(id)a0;
- (void)setStaticText:(id)a0;
- (void)startImageAnimation;
- (void)stopImageAnimation;
- (void)startTextAnimation;
- (void)stopTextAnimation;
- (void)setsSupportsAnimation:(BOOL)a0;
- (BOOL)menuDown;
- (void)_destroyAccessibilityElement;

@end
