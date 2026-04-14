@class NSArray, NSString, NSNumber, AVTouchBarCaptureInputSourceItem;
@protocol AVTouchBarRecordingControlsControlling;

@interface AVTouchBarRecordingControlsController : NSObject <AVTouchBarRecordingControlsControllingInternal> {
    id<AVTouchBarRecordingControlsControlling> _externalTouchBarRecordingControlsController;
    struct { BOOL _videoTouchBarInputSourceItems; BOOL _selectedVideoTouchBarInputSourceItem; BOOL _audioTouchBarInputSourceItems; BOOL _selectedAudioTouchBarInputSourceItem; BOOL _screenTouchBarInputSourceItems; BOOL _selectedScreenTouchBarInputSourceItem; BOOL _selectTouchBarInputSourceItem; } _externalControllerRespondsTo;
}

@property (weak) id<AVTouchBarRecordingControlsControlling> externalTouchBarRecordingControlsController;
@property (readonly) BOOL canAssociateAudioAndVideoDevices;
@property (readonly) double recordedTime;
@property (readonly) NSNumber *recordedFileSize;
@property (readonly, getter=isRecording) BOOL recording;
@property (readonly, getter=isPaused) BOOL paused;
@property (readonly) BOOL canStartRecording;
@property (readonly) BOOL canPauseRecording;
@property (readonly) BOOL canResumeRecording;
@property (readonly) BOOL canStopRecording;
@property (readonly) NSArray *videoTouchBarInputSourceItems;
@property (readonly) AVTouchBarCaptureInputSourceItem *selectedVideoTouchBarInputSourceItem;
@property (readonly) NSArray *audioTouchBarInputSourceItems;
@property (readonly) AVTouchBarCaptureInputSourceItem *selectedAudioTouchBarInputSourceItem;
@property (readonly) NSArray *screenTouchBarInputSourceItems;
@property (readonly) AVTouchBarCaptureInputSourceItem *selectedScreenTouchBarInputSourceItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingVideoTouchBarInputSourceItems;
+ (id)keyPathsForValuesAffectingSelectedVideoTouchBarInputSourceItem;
+ (id)keyPathsForValuesAffectingAudioTouchBarInputSourceItems;
+ (id)keyPathsForValuesAffectingSelectedAudioTouchBarInputSourceItem;
+ (BOOL)automaticallyNotifiesObserversOfRecordedTime;
+ (id)keyPathsForValuesAffectingRecordedTime;
+ (BOOL)automaticallyNotifiesObserversOfRecordedFileSize;
+ (id)keyPathsForValuesAffectingRecordedFileSize;
+ (BOOL)automaticallyNotifiesObserversOfRecording;
+ (id)keyPathsForValuesAffectingRecording;
+ (BOOL)automaticallyNotifiesObserversOfPaused;
+ (id)keyPathsForValuesAffectingPaused;
+ (BOOL)automaticallyNotifiesObserversOfCanStartRecording;
+ (id)keyPathsForValuesAffectingCanStartRecording;
+ (BOOL)automaticallyNotifiesObserversOfCanPauseRecording;
+ (id)keyPathsForValuesAffectingCanPauseRecording;
+ (BOOL)automaticallyNotifiesObserversOfCanResumeRecording;
+ (id)keyPathsForValuesAffectingCanResumeRecording;
+ (BOOL)automaticallyNotifiesObserversOfCanStopRecording;
+ (id)keyPathsForValuesAffectingCanStopRecording;
+ (BOOL)automaticallyNotifiesObserversOfVideoTouchBarInputSourceItems;
+ (BOOL)automaticallyNotifiesObserversOfSelectedVideoTouchBarInputSourceItem;
+ (BOOL)automaticallyNotifiesObserversOfAudioTouchBarInputSourceItems;
+ (BOOL)automaticallyNotifiesObserversOfSelectedAudioTouchBarInputSourceItem;
+ (BOOL)automaticallyNotifiesObserversOfScreenTouchBarInputSourceItems;
+ (id)keyPathsForValuesAffectingScreenTouchBarInputSourceItems;
+ (BOOL)automaticallyNotifiesObserversOfSelectedScreenTouchBarInputSourceItem;
+ (id)keyPathsForValuesAffectingSelectedScreenTouchBarInputSourceItem;

- (void).cxx_destruct;
- (void)stopRecording;
- (void)startRecording;
- (void)pauseRecording;
- (void)resumeRecording;
- (void)selectTouchBarInputSourceItem:(id)a0;
- (void)startDiscoveringWirelessCaptureDevices;
- (void)stopDiscoveringWirelessCaptureDevices;

@end
