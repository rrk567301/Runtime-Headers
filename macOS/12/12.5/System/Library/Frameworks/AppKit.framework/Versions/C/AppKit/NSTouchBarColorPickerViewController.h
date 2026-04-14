@class _NSTouchBarColorPickerContainerView, NSArray, NSView, NSString, NSColorList, NSColor;
@protocol NSTouchBarColorPickerViewControllerDelegate, NSTouchBarColorPickerView;

@interface NSTouchBarColorPickerViewController : NSViewController <NSTouchBarColorPickerSwitcherDelegate> {
    long long _currentMode;
    id<NSTouchBarColorPickerViewControllerDelegate> _delegate;
}

@property (retain) _NSTouchBarColorPickerContainerView *view;
@property (readonly) NSView<NSTouchBarColorPickerView> *_currentPreferredPickerView;
@property (readonly) BOOL _shouldSwatchBeHidden;
@property (readonly) BOOL _swatchIsPrearmed;
@property (readonly, copy) NSColor *workingColor;
@property (weak) id<NSTouchBarColorPickerViewControllerDelegate> delegate;
@property (copy) NSColor *currentColor;
@property BOOL allowsAlpha;
@property (copy) NSArray *allowedColorSpaces;
@property long long currentMode;
@property (retain) NSColorList *colorList;
@property BOOL colorListSupportsPressAndHoldVariants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffecting_shouldSwatchBeHidden;
+ (id)keyPathsForValuesAffecting_swatchIsPrearmed;
+ (id)keyPathsForValuesAffectingWorkingColor;
+ (id)keyPathsForValuesAffecting_currentPreferredPickerView;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (id)initWithInitialColor:(id)a0;
- (BOOL)_viewControllerSupports10_10Features;
- (void)_pickColor:(id)a0;
- (void)_pickerWillBeginTracking;
- (void)_pickerDidEndTracking;
- (void)_pickerDidCancelTracking;
- (void)switcher:(id)a0 didSelectItemAtIndex:(long long)a1;

@end
