@class NSTouchBar, NSString, NSPopoverTouchBarItem, AVTouchBarCaptureInputSourceSelectionViewController, AVTouchBarAudioCaptureDeviceSelectionButtonViewController, NSSpaceTouchBarItem, NSCustomTouchBarItem, NSGroupTouchBarItem, AVTouchBarRecordingControlsViewController;
@protocol AVTouchBarRecordingControlsControllingInternal, AVTouchBarRecordingControlsControlling;

@interface AVTouchBarRecordingControlsProvider : NSResponder <NSTouchBarDelegate, AVTouchBarCaptureInputSourceSelectionViewControllerDelegate, AVTouchBarAudioCaptureDeviceSelectionButtonViewControllerDelegate, NSTouchBarProvider> {
    id<AVTouchBarRecordingControlsControlling> _recordingControlsController;
    id<AVTouchBarRecordingControlsControllingInternal> _captureController;
    long long _controlsType;
    BOOL _optionKeyPressed;
    NSTouchBar *_touchBar;
    NSGroupTouchBarItem *_groupTouchBarItem;
    NSCustomTouchBarItem *_recordingControlsTouchBarItem;
    AVTouchBarRecordingControlsViewController *_touchBarRecordingControlsViewController;
    NSCustomTouchBarItem *_captureInputSourceSelectionTouchBarItem;
    AVTouchBarCaptureInputSourceSelectionViewController *_touchBarCaptureInputSourceSelectionViewController;
    NSPopoverTouchBarItem *_audioCaptureDeviceSelectionButtonTouchBarItem;
    AVTouchBarAudioCaptureDeviceSelectionButtonViewController *_touchBarAudioCaptureDeviceSelectionButtonViewController;
    NSCustomTouchBarItem *_audioCaptureDeviceSelectionTouchBarItem;
    AVTouchBarCaptureInputSourceSelectionViewController *_touchBarAudioCaptureDeviceSelectionViewController;
    NSSpaceTouchBarItem *_zeroMinimumWidthSpaceTouchBarItem;
    NSSpaceTouchBarItem *_popoverSpaceTouchBarItem;
}

@property (retain) id<AVTouchBarRecordingControlsControllingInternal> captureController;
@property (readonly) NSTouchBar *touchBar;
@property (retain) id<AVTouchBarRecordingControlsControlling> recordingControlsController;
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
- (void)touchBarAudioCaptureDeviceSelectionButtonViewControllerPresentDeviceSelectionPopover:(id)a0;
- (void)touchBarCaptureInputSourceSelectionViewController:(id)a0 didSelectTouchBarCaptureInputSourceItem:(id)a1;
- (void)_updateTouchBarCaptureInputSourceSelectionViewControllerControlsType;
- (void)_updateTouchBarItemIdentifiersForTouchBar:(id)a0;
- (id)_touchBarRecordingControlsViewController;
- (BOOL)_isTouchBarRecordingControlsViewControllerLoaded;
- (id)_touchBarCaptureInputSourceSelectionViewController;
- (BOOL)_isTouchBarCaptureInputSourceSelectionViewControllerLoaded;
- (id)_touchBarAudioCaptureDeviceSelectionButtonViewController;
- (BOOL)_isTouchBarAudioCaptureDeviceSelectionButtonViewControllerLoaded;
- (id)_touchBarAudioCaptureDeviceSelectionViewController;
- (BOOL)_isTouchBarAudioCaptureDeviceSelectionViewControllerLoaded;

@end
