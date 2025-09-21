@class _NSTouchBarColorPickerContainerView, NSArray, NSView, NSString, NSColorList, NSColor;
@protocol NSTouchBarColorPickerViewControllerDelegate, NSTouchBarColorPickerView;

@interface NSTouchBarColorPickerViewController : NSViewController <NSTouchBarColorPickerSwitcherDelegate> {
    long long _currentMode;
    id<NSTouchBarColorPickerViewControllerDelegate> _delegate;
}

@property (retain) _NSTouchBarColorPickerContainerView *view;
@property (readonly) NSView<NSTouchBarColorPickerView> *_currentPreferredPickerView;
@property (readonly) char _shouldSwatchBeHidden;
@property (readonly) char _swatchIsPrearmed;
@property (readonly, copy) NSColor *workingColor;
@property (weak) id<NSTouchBarColorPickerViewControllerDelegate> delegate;
@property (copy) NSColor *currentColor;
@property char allowsAlpha;
@property (copy) NSArray *allowedColorSpaces;
@property long long currentMode;
@property (retain) NSColorList *colorList;
@property char colorListSupportsPressAndHoldVariants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingWorkingColor;
+ (id)keyPathsForValuesAffecting_currentPreferredPickerView;
+ (id)keyPathsForValuesAffecting_shouldSwatchBeHidden;
+ (id)keyPathsForValuesAffecting_swatchIsPrearmed;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_pickColor:(id)a0;
- (void)_pickerDidCancelTracking;
- (void)_pickerDidEndTracking;
- (void)_pickerWillBeginTracking;
- (char)_viewControllerSupports10_10Features;
- (id)initWithInitialColor:(id)a0;
- (void)loadView;
- (void)switcher:(id)a0 didSelectItemAtIndex:(long long)a1;

@end
