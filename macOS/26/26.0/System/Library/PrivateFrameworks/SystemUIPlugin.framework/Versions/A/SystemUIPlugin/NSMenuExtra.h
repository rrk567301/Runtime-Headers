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

- (void)setAction:(SEL)a0;
- (SEL)action;
- (void)setAttributedTitle:(id)a0;
- (void)setLength:(double)a0;
- (id)attributedTitle;
- (void)unload;
- (BOOL)isEnabled;
- (void)setImage:(id)a0;
- (id)initWithBundle:(id)a0;
- (void)setView:(id)a0;
- (id)_window;
- (id)_button;
- (void)setEnabled:(BOOL)a0;
- (id)target;
- (id)image;
- (id)title;
- (void)setTitle:(id)a0;
- (void)setHighlightMode:(BOOL)a0;
- (double)length;
- (void)setTarget:(id)a0;
- (id)view;
- (id)statusBar;
- (void).cxx_destruct;
- (BOOL)highlightMode;
- (id)toolTip;
- (void)_adjustLength;
- (long long)sendActionOn:(unsigned long long)a0;
- (void)setToolTip:(id)a0;
- (void)willUnload;
- (void)_destroyAccessibilityElement;
- (id)_accessibilityElement;
- (id)_initInStatusBar:(id)a0 withLength:(float)a1 withPriority:(int)a2;
- (double)defaultLength;
- (void)drawMenuBackground:(BOOL)a0;
- (id)initWithBundle:(id)a0 data:(id)a1;
- (BOOL)menuDown;
- (void)popUpMenu:(id)a0;
- (void)setAnimationText:(id)a0;
- (void)setStaticText:(id)a0;
- (void)setsSupportsAnimation:(BOOL)a0;
- (void)startImageAnimation;
- (void)startTextAnimation;
- (void)stopImageAnimation;
- (void)stopTextAnimation;

@end
