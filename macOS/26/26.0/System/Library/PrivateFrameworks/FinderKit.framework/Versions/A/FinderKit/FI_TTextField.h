@class NSColor, NSString;

@interface FI_TTextField : NSTextField <TBestFitStringSelectorDelegate> {
    NSColor *_enabledTextColor;
    NSColor *_disabledTextColor;
    BOOL _sizingInProgress;
    struct TriStateBool { unsigned char fState; } _isEnabledCacheWhenNotKey;
    BOOL _isInsideWindowChangedKeyState;
    BOOL _stringSelectorUpdateTextWithAttributedString;
    struct unique_ptr<FI_TBestFitStringSelector, std::default_delete<FI_TBestFitStringSelector>> { struct FI_TBestFitStringSelector *__ptr_; } _bestFitStringSelector;
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

- (void)setObjectValue:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (unsigned long long)controlSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setStringValue:(id)a0;
- (void)setAttributedStringValue:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setFont:(id)a0;
- (void)setControlSize:(unsigned long long)a0;
- (void)setFormatter:(id)a0;
- (id)textAttributes;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)sizeToFit;
- (void)initCommon;
- (void).cxx_destruct;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)awakeFromNib;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setAccessibilityElement:(BOOL)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)a0;
- (void)_updateBestFitFormatterInWidth:(double)a0;
- (void)_setAttributedStringValue:(id)a0;
- (void)_setBestFitAttributedString:(id)a0;
- (void)_setFormatter:(id)a0;
- (void)_setStringValue:(id)a0;
- (void)_updateBestFitStringInWidth:(double)a0;
- (void)adjustHeightToFit;
- (void)applySettingsFrom:(id)a0;
- (void)awakeCommon;
- (struct set<double, std::less<double>, std::allocator<double>> { struct __tree<double, std::less<double>, std::allocator<double>> { void *x0; struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x1; unsigned long long x2; } x0; })bestFitWidths;
- (double)calcHeightToFit:(struct CGSize { double x0; double x1; })a0;
- (void)calcIdealSize;
- (struct CGSize { double x0; double x1; })calcIdealSizeImpl;
- (struct CGSize { double x0; double x1; })calcSizeToFit;
- (void)clearBestFitStringSelector;
- (id)copyTextField;
- (BOOL)hasBestFitFormatterSelector;
- (BOOL)hasBestFitStringSelector;
- (struct CGSize { double x0; double x1; })minIntrinsicContentSize;
- (void)setAttributedStringSet:(id)a0 extraContentInsets:(const struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a1 updateTextWithAttributedString:(BOOL)a2;
- (void)setFormatter:(id)a0 withAttributes:(id)a1;
- (void)setFormattersAndAttributes:(const void *)a0 extraContentInsets:(const struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (void)setSharedBestFitFormatterSelector:(const void *)a0;
- (void)setStringSet:(const void *)a0 extraContentInsets:(const struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (void)setSubpixelAntialiasing:(BOOL)a0;
- (void)stringSelector:(void *)a0 didChangeMinStringWidth:(double)a1 maxStringWidth:(double)a2;

@end
