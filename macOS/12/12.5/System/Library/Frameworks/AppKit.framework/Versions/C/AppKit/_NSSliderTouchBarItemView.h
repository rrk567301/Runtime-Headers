@class NSUserInterfaceCompressionOptions, NSString, NSSliderAccessory, NSSlider, NSLayoutConstraint, NSStackView;

@interface _NSSliderTouchBarItemView : NSView <NSSliderAccessoryContainer, NSUserInterfaceCompression> {
    id _autounbinder;
    NSSlider *_slider;
    NSLayoutConstraint *_minimumSliderWidthConstraint;
    NSLayoutConstraint *_maximumSliderWidthConstraint;
}

@property double value;
@property double minimumValue;
@property double maximumValue;
@property double incrementValue;
@property (readonly) NSSliderAccessory *minimumValueAccessory;
@property (readonly) NSSliderAccessory *maximumValueAccessory;
@property (readonly) BOOL _hasStepBehaviorContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSStackView *_layoutView;
@property BOOL _modelCollapsed;
@property BOOL _presentationCollapsed;
@property BOOL _showsLabel;
@property BOOL _showsValueAccessories;
@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } _layoutEdgeInsets;
@property (readonly) BOOL _labelIsHidden;
@property (readonly) BOOL _minValueAccessoryIsHidden;
@property (readonly) BOOL _sliderIsHidden;
@property (readonly) BOOL _maxValueAccessoryIsHidden;
@property (retain) NSSlider *slider;
@property (weak) id target;
@property SEL action;
@property (copy) NSString *label;
@property (retain) NSSliderAccessory *minimumValueAccessory;
@property (retain) NSSliderAccessory *maximumValueAccessory;
@property double valueAccessoryWidth;
@property double minimumSliderWidth;
@property double maximumSliderWidth;
@property (getter=isCollapsed) BOOL collapsed;
@property (readonly, copy) NSUserInterfaceCompressionOptions *activeCompressionOptions;

+ (id)keyPathsForValuesAffecting_layoutEdgeInsets;
+ (id)keyPathsForValuesAffecting_labelIsHidden;
+ (id)keyPathsForValuesAffecting_minValueAccessoryIsHidden;
+ (id)keyPathsForValuesAffecting_sliderIsHidden;
+ (id)keyPathsForValuesAffecting_maxValueAccessoryIsHidden;
+ (id)keyPathsForValuesAffectingCollapsed;
+ (BOOL)automaticallyNotifiesObserversOfCollapsed;
+ (id)keyPathsForValuesAffecting_hasStepBehaviorContext;

- (oneway void)release;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (Class)_animatorClass;
- (id)_autounbinder;
- (void)updateConstraints;
- (void)sendAction;
- (id)animationForKey:(id)a0;
- (void)compressWithPrioritizedCompressionOptions:(id)a0;
- (struct CGSize { double x0; double x1; })minimumSizeWithPrioritizedCompressionOptions:(id)a0;
- (void)_commonInit;
- (void)_incrementValue:(BOOL)a0;
- (void)_sliderWillBeginTracking;
- (void)_sliderDidEndTracking;
- (void)_loadViewHierarchy;
- (void)_sliderDidChange:(id)a0;
- (void)_sliderDidCancelTracking;
- (id)_displayImageForImage:(id)a0;
- (void)_minValueAccessoryDidFire:(id)a0;
- (void)_maxValueAccessoryDidFire:(id)a0;

@end
