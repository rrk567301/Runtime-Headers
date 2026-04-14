@class NSSegmentedControl, NSArray, NSString, NSView, NSStackView, AVTouchBarCaptureInputSourceItem, NSMutableArray;
@protocol AVTouchBarRecordingControlsControllingInternal, AVTouchBarCaptureInputSourceSelectionViewControllerDelegate;

@interface AVTouchBarCaptureInputSourceSelectionViewController : NSViewController {
    NSMutableArray *_bindings;
    NSView *_controlsContainerView;
    NSSegmentedControl *_captureSourceSegmentedControl;
    NSStackView *_captureSourceButtonsView;
    NSStackView *_additionalAudioCaptureSourceButtonsView;
    BOOL _isDiscoveringWirelessCaptureDevices;
}

@property (readonly, getter=isSelectionWithSegmentedControlPossible) BOOL selectionWithSegmentedControlPossible;
@property (readonly) BOOL showsSegmentedControl;
@property (readonly) BOOL showsScrollViewWithButtons;
@property (readonly) BOOL showsAdditionalAudioCaptureInputSourceItems;
@property (readonly) NSArray *captureInputSourceItems;
@property (readonly) AVTouchBarCaptureInputSourceItem *selectedCaptureInputSourceItem;
@property (readonly) BOOL showsLabel;
@property (readonly) NSString *labelStringValue;
@property (retain) id<AVTouchBarRecordingControlsControllingInternal> captureController;
@property (weak, nonatomic) id<AVTouchBarCaptureInputSourceSelectionViewControllerDelegate> delegate;
@property long long controlsType;

+ (id)keyPathsForValuesAffectingSelectionWithSegmentedControlPossible;
+ (id)keyPathsForValuesAffectingShowsSegmentedControl;
+ (id)keyPathsForValuesAffectingShowsScrollViewWithButtons;
+ (id)keyPathsForValuesAffectingCaptureInputSourceItems;
+ (id)keyPathsForValuesAffectingSelectedCaptureInputSourceItem;
+ (id)keyPathsForValuesAffectingShowsLabel;
+ (id)keyPathsForValuesAffectingShowsAdditionalAudioCaptureInputSourceItems;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)loadView;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)_unbindAllObjects;
- (void)_bindObject:(id)a0 withBinding:(id)a1 toObject:(id)a2 withKeyPath:(id)a3 options:(id)a4;
- (void)_loadCaptureSourceSegmentedControl;
- (void)_updateSourceSelectionControls;
- (void)_loadCaptureSourceButtonsView;
- (void)_updateSourceSelectionControlStates;
- (void)_notifyDelegateSelectedCaptureInputSourceItemChangeTo:(id)a0;
- (id)_makeLabel;
- (void)actionSegmentedControlSelectionChanged:(id)a0;
- (id)_makeSelectionButtonWithInputSourceItem:(id)a0;
- (void)actionSelectTouchBarCaptureInputSourceItem:(id)a0;

@end
