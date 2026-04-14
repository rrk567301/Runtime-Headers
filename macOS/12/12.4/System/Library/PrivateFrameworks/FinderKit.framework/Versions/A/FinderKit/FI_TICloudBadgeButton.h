@interface FI_TICloudBadgeButton : FI_TButton {
    BOOL _selected;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _primaryToolTip;
    long long _backgroundStyle;
}

@property (nonatomic, getter=isInBatchUpdate) BOOL inBatchUpdate;
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL acceptsClicks;
@property (nonatomic) int context;
@property (nonatomic) int bladeRunnerBadge;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id).cxx_construct;
- (void)viewDidChangeEffectiveAppearance;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityLabel;
- (void)setToolTip:(id)a0;
- (void)setBackgroundStyle:(long long)a0;
- (void)setSelected:(BOOL)a0;
- (void)initCommon;
- (void)updateBadgeImage;
- (id)iCloudBadgeImageWithMouseDown:(BOOL)a0;
- (void)SetiCloudBadge:(int)a0;

@end
