@interface PopupWindowUnifiedField : UnifiedField

@property (nonatomic) long long lockdownModeStatus;

+ (double)urlTextYOffset;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)allowsVibrancy;
- (BOOL)mouseDownCanMoveWindow;
- (void)_windowChangedKeyState;
- (void)_commonInitialization;
- (void)setBrowsingMode:(unsigned long long)a0;
- (BOOL)willHandleMouseDraggedEvent:(id)a0;
- (void)updateActiveAppearance;
- (double)mediaIndicatorYOffset;
- (id)deemphasizedTextColor;
- (id)lockButtonColor;
- (id)pageStatusStringColor;
- (id)contextMenuForEvent:(id)a0;
- (id)_mediaCaptureIndicatorWithColor:(id)a0;
- (long long)_muteButtonStateForAudioIndicator;
- (BOOL)_shouldShowAlternativeStaticURLForAboutBlank;
- (double)_urlTextHeight;
- (double)_urlFieldHeight;
- (struct CGSize { double x0; double x1; })_defaultButtonSize;
- (double)_defaultButtonYOffset;
- (double)_lockButtonVerticalOffset;
- (double)_siteIconYOffset;

@end
