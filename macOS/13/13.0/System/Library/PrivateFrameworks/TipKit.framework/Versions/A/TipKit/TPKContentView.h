@class NSImageView, NSVisualEffectView, _TtC6TipKit17UITraitCollection, NSColor;

@interface TPKContentView : TPKBaseContentView {
    void /* unknown type, empty encoding */ preferredTraitCollection;
    void /* unknown type, empty encoding */ displayBottomSeparator;
    void /* unknown type, empty encoding */ imageProxy;
}

@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } defaultMicaSize;

@property (nonatomic, readonly) NSImageView *iconImageView;
@property (nonatomic) BOOL displaysBottomSeparator;
@property (nonatomic, retain) NSColor *preferredActionTintColor;
@property (nonatomic, retain) NSColor *preferredIconImageTintColor;
@property (nonatomic) struct CGSize { double x0; double x1; } preferredMicaLayerSize;
@property (nonatomic, retain) _TtC6TipKit17UITraitCollection *_preferredTraitCollection;
@property (nonatomic, retain) NSVisualEffectView *visualEffect;

+ (id)SiriIconWithTraitCollection:(id)a0;
+ (id)TipsIconWithTraitCollection:(id)a0;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithController:(id)a0 content:(id)a1;
- (id)initWithReusableTipView:(id)a0;
- (void)bottomSeperatorNeedsUpdate;
- (void)updateDisplaysBottomSeparator:(BOOL)a0;
- (void)updatePreferredTraitCollection:(id)a0;
- (void)monitorDeviceOrientationChanges;
- (void)setupHostingViewWithController:(id)a0 content:(id)a1;
- (id)createHostingView;

@end
