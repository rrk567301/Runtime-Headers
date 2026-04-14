@class NSTextField, NSArray, SASCursiveTextPath, CAShapeLayer, NSBundle, NSImage, NSImageView, NSEvent;

@interface SASCursiveTextView : NSView {
    CAShapeLayer *textLayer;
    SASCursiveTextPath *textPath;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } textTransform;
    NSEvent *eventMonitor;
    NSTextField *dismissButtonLabel;
    NSImageView *dismissButtonImageView;
}

@property (retain, nonatomic) NSImage *ltrButtonImage;
@property (retain, nonatomic) NSImage *rtlButtonImage;
@property (nonatomic) NSBundle *locBundle;
@property (readonly) float duration;
@property (readonly) NSArray *languages;

- (void).cxx_destruct;
- (void)layout;
- (void)setTime:(float)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)animateOut;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configure;
- (void)setCurrentLanguageCode:(id)a0;
- (void)addGetStartedIcon;
- (void)addGetStartedLabel;
- (id)configureButtonImageForImage:(id)a0;
- (id)imageForLanguage:(id)a0;
- (void)loadText:(id)a0 pointSize:(double)a1;
- (id)localizedGetStartedStringForLanguageCode:(id)a0;
- (void)removeEventMonitor;

@end
