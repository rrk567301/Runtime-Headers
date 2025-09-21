@class NSArray, NSString, NSNumber, AVTouchBarCaptureInputSourceItem;
@protocol AVTouchBarRecordingControlsControlling;

@interface AVTouchBarRecordingControlsController : NSObject <AVTouchBarRecordingControlsControllingInternal> {
    id<AVTouchBarRecordingControlsControlling> _externalTouchBarRecordingControlsController;
    struct { char _videoTouchBarInputSourceItems; char _selectedVideoTouchBarInputSourceItem; char _audioTouchBarInputSourceItems; char _selectedAudioTouchBarInputSourceItem; char _screenTouchBarInputSourceItems; char _selectedScreenTouchBarInputSourceItem; char _selectTouchBarInputSourceItem; } _externalControllerRespondsTo;
}

@property (weak) id<AVTouchBarRecordingControlsControlling> externalTouchBarRecordingControlsController;
@property (readonly) char canAssociateAudioAndVideoDevices;
@property (readonly) double recordedTime;
@property (readonly) NSNumber *recordedFileSize;
@property (readonly, getter=isRecording) char recording;
@property (readonly, getter=isPaused) char paused;
@property (readonly) char canStartRecording;
@property (readonly) char canPauseRecording;
@property (readonly) char canResumeRecording;
@property (readonly) char canStopRecording;
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

+ (id)keyPathsForValuesAffectingSelectedScreenTouchBarInputSourceItem;
+ (char)automaticallyNotifiesObserversOfAudioTouchBarInputSourceItems;
+ (char)automaticallyNotifiesObserversOfCanPauseRecording;
+ (char)automaticallyNotifiesObserversOfCanResumeRecording;
+ (char)automaticallyNotifiesObserversOfCanStartRecording;
+ (char)automaticallyNotifiesObserversOfCanStopRecording;
+ (char)automaticallyNotifiesObserversOfPaused;
+ (char)automaticallyNotifiesObserversOfRecordedFileSize;
+ (char)automaticallyNotifiesObserversOfRecordedTime;
+ (char)automaticallyNotifiesObserversOfRecording;
+ (char)automaticallyNotifiesObserversOfScreenTouchBarInputSourceItems;
+ (char)automaticallyNotifiesObserversOfSelectedAudioTouchBarInputSourceItem;
+ (char)automaticallyNotifiesObserversOfSelectedScreenTouchBarInputSourceItem;
+ (char)automaticallyNotifiesObserversOfSelectedVideoTouchBarInputSourceItem;
+ (char)automaticallyNotifiesObserversOfVideoTouchBarInputSourceItems;
+ (id)keyPathsForValuesAffectingAudioTouchBarInputSourceItems;
+ (id)keyPathsForValuesAffectingCanPauseRecording;
+ (id)keyPathsForValuesAffectingCanResumeRecording;
+ (id)keyPathsForValuesAffectingCanStartRecording;
+ (id)keyPathsForValuesAffectingCanStopRecording;
+ (id)keyPathsForValuesAffectingPaused;
+ (id)keyPathsForValuesAffectingRecordedFileSize;
+ (id)keyPathsForValuesAffectingRecordedTime;
+ (id)keyPathsForValuesAffectingRecording;
+ (id)keyPathsForValuesAffectingScreenTouchBarInputSourceItems;
+ (id)keyPathsForValuesAffectingSelectedAudioTouchBarInputSourceItem;
+ (id)keyPathsForValuesAffectingSelectedVideoTouchBarInputSourceItem;
+ (id)keyPathsForValuesAffectingVideoTouchBarInputSourceItems;

- (void).cxx_destruct;
- (void)startRecording;
- (void)stopRecording;
- (void)resumeRecording;
- (void)pauseRecording;
- (void)selectTouchBarInputSourceItem:(id)a0;
- (void)startDiscoveringWirelessCaptureDevices;
- (void)stopDiscoveringWirelessCaptureDevices;

@end
