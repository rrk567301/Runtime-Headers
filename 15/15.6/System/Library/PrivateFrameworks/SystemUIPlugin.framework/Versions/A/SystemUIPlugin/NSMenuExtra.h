@class NSBundle, NSImage, NSArray, NSMenu, NSView;
@protocol NSMenuExtraController;

@interface NSMenuExtra : NSStatusItem {
    NSBundle *_bundle;
    NSMenu *_menu;
    NSView *_view;
    double _length;
    struct { unsigned char customView : 1; unsigned char menuDown : 1; unsigned int reserved : 30; } _flags;
    id _controller;
    char _reserved1;
    NSArray *_reserved2;
    double _reserved3;
    double _reserved4;
}

@property (weak, nonatomic) id<NSMenuExtraController> controller;
@property (nonatomic, getter=isMenuDown) char menuDown;
@property (readonly) NSBundle *bundle;
@property (retain, nonatomic) NSImage *alternateImage;
@property (readonly) char convertedForNewUI;
@property (readonly, getter=isMenuDownForAX) char menuDownForAX;
@property (nonatomic) char supportsAnimation;
@property (copy, nonatomic) NSArray *images;
@property (nonatomic) double imageFrameRate;
@property (nonatomic) double maxWidth;

+ (unsigned int)defaultLength;

- (double)length;
- (void).cxx_destruct;
- (void)setEnabled:(char)a0;
- (void)setLength:(double)a0;
- (void)setTarget:(id)a0;
- (id)target;
- (char)isEnabled;
- (void)setAction:(SEL)a0;
- (void)setAttributedTitle:(id)a0;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;
- (id)view;
- (id)image;
- (id)attributedTitle;
- (id)initWithBundle:(id)a0;
- (id)title;
- (void)unload;
- (void)setView:(id)a0;
- (SEL)action;
- (id)_window;
- (id)_button;
- (id)toolTip;
- (void)_adjustLength;
- (char)highlightMode;
- (long long)sendActionOn:(unsigned long long)a0;
- (void)setHighlightMode:(char)a0;
- (void)setToolTip:(id)a0;
- (id)statusBar;
- (void)willUnload;
- (void)_destroyAccessibilityElement;
- (id)_accessibilityElement;
- (id)_initInStatusBar:(id)a0 withLength:(float)a1 withPriority:(int)a2;
- (double)defaultLength;
- (void)drawMenuBackground:(char)a0;
- (id)initWithBundle:(id)a0 data:(id)a1;
- (char)menuDown;
- (void)popUpMenu:(id)a0;
- (void)setAnimationText:(id)a0;
- (void)setStaticText:(id)a0;
- (void)setsSupportsAnimation:(char)a0;
- (void)startImageAnimation;
- (void)startTextAnimation;
- (void)stopImageAnimation;
- (void)stopTextAnimation;

@end
