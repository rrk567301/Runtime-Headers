@class NSView;

@interface NSTabBarTrackView : NSView {
    void /* unknown type, empty encoding */ glassEffectView;
    void /* unknown type, empty encoding */ isOnBlurredBackground;
    void /* unknown type, empty encoding */ glassEffectViewFlippingTimer;
}

@property (nonatomic, retain) NSView *contentView;

- (void)didChangeValueForKey:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
