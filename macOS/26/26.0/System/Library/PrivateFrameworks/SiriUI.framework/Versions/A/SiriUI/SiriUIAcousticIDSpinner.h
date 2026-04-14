@class NSImageView, NSVisualEffectView;
@protocol SiriUIAcousticIDSpinnerDelegate;

@interface SiriUIAcousticIDSpinner : NSView {
    NSImageView *_musicNoteView;
    NSImageView *_spinnerView;
    NSVisualEffectView *_vibrancyView;
}

@property (weak, nonatomic) id<SiriUIAcousticIDSpinnerDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)animateIn;
- (void)animateOut;
- (BOOL)isShowing;
- (id)_imageForSpinner;
- (id)_spinningAnimation;

@end
