@protocol NSContentStyle;

@interface NSSegmentItemLabelCell : NSTextFieldCell

@property (copy, nonatomic, setter=_setContentStyleOverride:) id<NSContentStyle> _contentStyleOverride;

+ (id)_getParentSegmentedControlViewFromView:(id)a0;

- (void)dealloc;
- (BOOL)accessibilityIsIgnored;
- (long long)interiorBackgroundStyle;
- (id)_effectiveContentStyleForTextInView:(id)a0;
- (id)_textAttributes;
- (BOOL)_shouldUseStyledTextInView:(id)a0;
- (int)_vibrancyBlendModeForControlView:(id)a0;

@end
