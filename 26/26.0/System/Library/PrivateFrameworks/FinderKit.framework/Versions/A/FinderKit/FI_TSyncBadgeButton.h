@interface FI_TSyncBadgeButton : FI_TButton {
    BOOL _selected;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _primaryToolTip;
    long long _backgroundStyle;
}

@property (nonatomic) int syncBadge;
@property (nonatomic) struct optional<TSharedWithYouBadge> { union { char __null_state_; int __val_; } ; BOOL __engaged_; } sharedWithYouBadge;
@property (nonatomic, getter=isInBatchUpdate) BOOL inBatchUpdate;
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL acceptsClicks;
@property (nonatomic) int context;

- (id)accessibilityLabel;
- (void)setSelected:(BOOL)a0;
- (id).cxx_construct;
- (void)setBackgroundStyle:(long long)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)initCommon;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setToolTip:(id)a0;
- (void)setBadges:(const void *)a0;
- (id)iCloudBadgeImageWithMouseDown:(BOOL)a0;
- (id)sharedBadgeImageWithMouseDown:(BOOL)a0;
- (void)updateBadgeImage;

@end
