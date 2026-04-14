@class NSColor, NSString;

@interface FI_TTextField : NSTextField <TBestFitStringSelectorDelegate> {
    NSColor *_enabledTextColor;
    NSColor *_disabledTextColor;
    BOOL _sizingInProgress;
    struct TriStateBool { int fState; } _isEnabledCacheWhenNotKey;
    BOOL _isInsideWindowChangedKeyState;
    BOOL _stringSelectorUpdateTextWithAttributedString;
    struct unique_ptr<FI_TBestFitStringSelector, std::default_delete<FI_TBestFitStringSelector>> { struct __compressed_pair<FI_TBestFitStringSelector *, std::default_delete<FI_TBestFitStringSelector>> { struct FI_TBestFitStringSelector *__value_; } __ptr_; } _bestFitStringSelector;
    struct shared_ptr<TBestFitFormatterSelector> { struct TBestFitFormatterSelector *__ptr_; struct __shared_weak_count *__cntrl_; } _bestFitFormatterSelector;
}

@property (nonatomic) BOOL idealSizeIsDirty;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (nonatomic) struct CGSize { double width; double height; } minSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } idealSize;
@property (retain, nonatomic) NSColor *enabledTextColor;
@property (retain, nonatomic) NSColor *disabledTextColor;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } truncateInRange;
@property (nonatomic) BOOL disableIntegralFrames;
@property (nonatomic) BOOL autoSizeToFit;
@property (nonatomic) BOOL autoAdjustHeightToFit;
@property (nonatomic) BOOL drawGrayTextWhenDisabled;
@property (nonatomic) BOOL delayWindowOrderingOnClickThrough;
@property (nonatomic) BOOL textHitTestingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellClass;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (id).cxx_construct;
- (void)setFormatter:(id)a0;
- (void)setObjectValue:(id)a0;
- (void)setStringValue:(id)a0;
- (unsigned long long)controlSize;
- (void)setControlSize:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setFont:(id)a0;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)sizeToFit;
- (void)setAttributedStringValue:(id)a0;
- (void)awakeFromNib;
- (void)setAccessibilityElement:(BOOL)a0;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)disabledTextColor;
- (void)setDisabledTextColor:(id)a0;
- (id)textAttributes;
- (void)initCommon;
- (id)enabledTextColor;
- (void)awakeCommon;
- (void)applySettingsFrom:(id)a0;
- (void)setTruncateInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)copyTextField;
- (void)stringSelector:(void *)a0 didChangeMinStringWidth:(double)a1 maxStringWidth:(double)a2;
- (void)setStringSet:(const void *)a0 extraContentInsets:(const struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (struct CGSize { double x0; double x1; })minIntrinsicContentSize;
- (void)setAttributedStringSet:(id)a0 extraContentInsets:(const struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a1 updateTextWithAttributedString:(BOOL)a2;
- (void)setEnabledTextColor:(id)a0;
- (void)setSubpixelAntialiasing:(BOOL)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })truncateInRange;
- (void)calcIdealSize;
- (void)_updateBestFitStringInWidth:(double)a0;
- (void)_updateBestFitFormatterInWidth:(double)a0;
- (void)clearBestFitStringSelector;
- (void)_setFormatter:(id)a0;
- (void)_setStringValue:(id)a0;
- (void)_setAttributedStringValue:(id)a0;
- (void)adjustHeightToFit;
- (struct CGSize { double x0; double x1; })calcSizeToFit;
- (double)calcHeightToFit:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })calcIdealSizeImpl;
- (void)_setBestFitAttributedString:(id)a0;
- (void)setFormatter:(id)a0 withAttributes:(id)a1;
- (BOOL)hasBestFitStringSelector;
- (BOOL)hasBestFitFormatterSelector;
- (void)setSharedBestFitFormatterSelector:(const void *)a0;
- (void)setFormattersAndAttributes:(const void *)a0 extraContentInsets:(const struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;

@end
