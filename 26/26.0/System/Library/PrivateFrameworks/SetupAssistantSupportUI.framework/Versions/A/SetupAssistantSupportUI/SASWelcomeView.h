@class NSGlassEffectView, NSTextField, NSImage, NSEvent, NSImageView, NSProgressIndicator, NSButton;

@interface SASWelcomeView : NSView

@property (retain, nonatomic) NSImage *ltrButtonImage;
@property (retain, nonatomic) NSImage *rtlButtonImage;
@property (nonatomic) BOOL spinning;
@property (nonatomic) BOOL allowsExit;
@property (retain) NSEvent *eventMonitor;
@property (retain) NSGlassEffectView *imageBackgroundView;
@property (retain) NSTextField *buttonLabel;
@property (retain) NSImageView *buttonImageView;
@property (retain) NSProgressIndicator *spinnerView;
@property (retain) NSButton *button;

- (void)configure;
- (void).cxx_destruct;
- (void)animateOut;
- (void)showSpinner:(BOOL)a0;
- (void)addIcon;
- (void)addLabel;
- (id)configureButtonImageForImage:(id)a0;
- (id)imageForLanguage:(id)a0;
- (void)prepareEnclosedView:(id)a0 enclosingView:(id)a1 inset:(double)a2;
- (void)removeEventMonitor;
- (void)setButtonLabelString:(id)a0 writingDirection:(long long)a1;

@end
