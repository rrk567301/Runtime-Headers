@protocol NSContentStyle;

@interface NSSegmentItemLabelCell : NSTextFieldCell

@property (copy, nonatomic, setter=_setContentStyleOverride:) id<NSContentStyle> _contentStyleOverride;

+ (id)_getParentSegmentedControlViewFromView:(id)a0;

- (void)dealloc;
- (id)_textAttributes;
- (id)_effectiveContentStyleForTextInView:(id)a0;
- (BOOL)_shouldUseStyledTextInView:(id)a0;
- (int)_vibrancyBlendModeForControlView:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (long long)interiorBackgroundStyle;

@end
