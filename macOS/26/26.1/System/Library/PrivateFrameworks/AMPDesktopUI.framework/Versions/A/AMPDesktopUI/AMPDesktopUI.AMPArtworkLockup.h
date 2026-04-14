@class NSImage;
@protocol AMPArtworkItemLockupModel;

@interface AMPDesktopUI.AMPArtworkLockup : AMPBindableView {
    void /* function */ onEditBlock;
    void /* function */ onAssignBlock;
    void /* unknown type, empty encoding */ watchingForChanges;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ pullingArtwork;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ radiosityShadowLayer;
    void /* unknown type, empty encoding */ baseShadow;
    void /* unknown type, empty encoding */ borderLayer;
    void /* unknown type, empty encoding */ radiosityFadeInDuration;
}

@property (nonatomic, retain) id<AMPArtworkItemLockupModel> viewModel;
@property (nonatomic, copy) id /* block */ onEditBlock;
@property (nonatomic, retain) NSImage *emptyImage;
@property (nonatomic, copy) id /* block */ onAssignBlock;
@property (nonatomic, readonly) NSImage *currentImage;
@property (nonatomic) BOOL padTo16By9;
@property (nonatomic) long long ibStyle;
@property (nonatomic) double radiosityVerticalOffset;
@property (nonatomic) double radiosityExpansion;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)appKitEditedImage:(id)a0;
- (id)propertyKeysForViewSpy;
- (id)stringValueForViewSpyPropertyKey:(id)a0;

@end
