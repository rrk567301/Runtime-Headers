@class NSArray, SASWelcomeView, NSBundle, CAShapeLayer, SASCursiveTextPath;

@interface SASCursiveTextView : NSView {
    CAShapeLayer *textLayer;
    SASCursiveTextPath *textPath;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } textTransform;
}

@property (retain) SASWelcomeView *welcomeView;
@property (nonatomic) NSBundle *locBundle;
@property (readonly) float duration;
@property (readonly) NSArray *languages;

+ (id)languages;

- (void)layout;
- (void)configure;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTime:(float)a0;
- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)setCurrentLanguageCode:(id)a0;
- (void)configureWelcomeView;
- (void)loadText:(id)a0 pointSize:(double)a1;
- (id)localizedButtonStringForLanguageCode:(id)a0;

@end
