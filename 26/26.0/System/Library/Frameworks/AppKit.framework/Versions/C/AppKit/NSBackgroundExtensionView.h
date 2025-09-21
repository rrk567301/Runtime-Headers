@class NSView;

@interface NSBackgroundExtensionView : NSView {
    void /* function */ observationToken;
    void /* unknown type, empty encoding */ effectsView;
}

@property (nonatomic) BOOL disableBlurEffects;
@property (nonatomic) BOOL disableAutomaticLayout;
@property (nonatomic, copy) id observationToken;
@property (nonatomic, retain) NSView *contentView;
@property (nonatomic) BOOL _disableBlurEffects;
@property (nonatomic) BOOL automaticallyPlacesContentView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)updateEffectsView;

@end
