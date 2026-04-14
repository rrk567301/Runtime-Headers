@class NSTouchBar, NSString, AVFunctionBarRecordingControlsViewController, NSPopoverTouchBarItem, NSSpaceTouchBarItem, AVFunctionBarAudioCaptureDeviceSelectionButtonViewController, NSCustomTouchBarItem, AVFunctionBarCaptureInputSourceSelectionViewController;
@protocol AVFunctionBarRecordingControlsControllingInternal, AVFunctionBarRecordingControlsControlling;

@interface AVFunctionBarRecordingControlsProvider : NSResponder <NSTouchBarDelegate, AVFunctionBarCaptureInputSourceSelectionViewControllerDelegate, AVFunctionBarAudioCaptureDeviceSelectionButtonViewControllerDelegate, NSTouchBarProvider> {
    id<AVFunctionBarRecordingControlsControlling> _recordingControlsController;
    id<AVFunctionBarRecordingControlsControllingInternal> _captureController;
    long long _controlsType;
    BOOL _optionKeyPressed;
    NSTouchBar *_functionBar;
    NSCustomTouchBarItem *_recordingControlsFunctionBarItem;
    AVFunctionBarRecordingControlsViewController *_functionBarRecordingControlsViewController;
    NSCustomTouchBarItem *_captureInputSourceSelectionFunctionBarItem;
    AVFunctionBarCaptureInputSourceSelectionViewController *_functionBarCaptureInputSourceSelectionViewController;
    NSPopoverTouchBarItem *_audioCaptureDeviceSelectionButtonFunctionBarItem;
    AVFunctionBarAudioCaptureDeviceSelectionButtonViewController *_functionBarAudioCaptureDeviceSelectionButtonViewController;
    NSCustomTouchBarItem *_audioCaptureDeviceSelectionFunctionBarItem;
    AVFunctionBarCaptureInputSourceSelectionViewController *_functionBarAudioCaptureDeviceSelectionViewController;
    NSSpaceTouchBarItem *_zeroMinimumWidthSpaceFunctionBarItem;
    NSSpaceTouchBarItem *_popoverSpaceFunctionBarItem;
}

@property (retain) id<AVFunctionBarRecordingControlsControllingInternal> captureController;
@property (readonly) NSTouchBar *touchBar;
@property (retain) id<AVFunctionBarRecordingControlsControlling> recordingControlsController;
@property long long controlsType;
@property (getter=isOptionKeyPressed) BOOL optionKeyPressed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (id)_functionBarAudioCaptureDeviceSelectionButtonViewController;
- (id)_functionBarAudioCaptureDeviceSelectionViewController;
- (id)_functionBarCaptureInputSourceSelectionViewController;
- (id)_functionBarRecordingControlsViewController;
- (BOOL)_isFunctionBarAudioCaptureDeviceSelectionButtonViewControllerLoaded;
- (BOOL)_isFunctionBarAudioCaptureDeviceSelectionViewControllerLoaded;
- (BOOL)_isFunctionBarCaptureInputSourceSelectionViewControllerLoaded;
- (BOOL)_isFunctionBarRecordingControlsViewControllerLoaded;
- (void)_updateFunctionBarCaptureInputSourceSelectionViewControllerControlsType;
- (void)_updateFunctionBarItemIdentifiersForFunctionBar:(id)a0;
- (void)functionBarAudioCaptureDeviceSelectionButtonViewControllerPresentDeviceSelectionPopover:(id)a0;
- (void)functionBarCaptureInputSourceSelectionViewController:(id)a0 didSelectFunctionBarCaptureInputSourceItem:(id)a1;

@end
