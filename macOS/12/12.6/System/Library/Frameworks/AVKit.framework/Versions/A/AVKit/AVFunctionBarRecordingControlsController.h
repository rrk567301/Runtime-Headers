@class NSArray, NSString, NSNumber, AVFunctionBarCaptureInputSourceItem;
@protocol AVFunctionBarRecordingControlsControlling;

@interface AVFunctionBarRecordingControlsController : NSObject <AVFunctionBarRecordingControlsControllingInternal> {
    id<AVFunctionBarRecordingControlsControlling> _externalFunctionBarRecordingControlsController;
    struct { BOOL _videoFunctionBarInputSourceItems; BOOL _selectedVideoFunctionBarInputSourceItem; BOOL _audioFunctionBarInputSourceItems; BOOL _selectedAudioFunctionBarInputSourceItem; BOOL _screenFunctionBarInputSourceItems; BOOL _selectedScreenFunctionBarInputSourceItem; BOOL _selectFunctionBarInputSourceItem; } _externalControllerRespondsTo;
}

@property (weak) id<AVFunctionBarRecordingControlsControlling> externalFunctionBarRecordingControlsController;
@property (readonly) BOOL canAssociateAudioAndVideoDevices;
@property (readonly) double recordedTime;
@property (readonly) NSNumber *recordedFileSize;
@property (readonly, getter=isRecording) BOOL recording;
@property (readonly, getter=isPaused) BOOL paused;
@property (readonly) BOOL canStartRecording;
@property (readonly) BOOL canPauseRecording;
@property (readonly) BOOL canResumeRecording;
@property (readonly) BOOL canStopRecording;
@property (readonly) NSArray *videoFunctionBarInputSourceItems;
@property (readonly) AVFunctionBarCaptureInputSourceItem *selectedVideoFunctionBarInputSourceItem;
@property (readonly) NSArray *audioFunctionBarInputSourceItems;
@property (readonly) AVFunctionBarCaptureInputSourceItem *selectedAudioFunctionBarInputSourceItem;
@property (readonly) NSArray *screenFunctionBarInputSourceItems;
@property (readonly) AVFunctionBarCaptureInputSourceItem *selectedScreenFunctionBarInputSourceItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingVideoFunctionBarInputSourceItems;
+ (id)keyPathsForValuesAffectingSelectedVideoFunctionBarInputSourceItem;
+ (id)keyPathsForValuesAffectingAudioFunctionBarInputSourceItems;
+ (id)keyPathsForValuesAffectingSelectedAudioFunctionBarInputSourceItem;
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
+ (BOOL)automaticallyNotifiesObserversOfVideoFunctionBarInputSourceItems;
+ (BOOL)automaticallyNotifiesObserversOfSelectedVideoFunctionBarInputSourceItem;
+ (BOOL)automaticallyNotifiesObserversOfAudioFunctionBarInputSourceItems;
+ (BOOL)automaticallyNotifiesObserversOfSelectedAudioFunctionBarInputSourceItem;
+ (BOOL)automaticallyNotifiesObserversOfScreenFunctionBarInputSourceItems;
+ (id)keyPathsForValuesAffectingScreenFunctionBarInputSourceItems;
+ (BOOL)automaticallyNotifiesObserversOfSelectedScreenFunctionBarInputSourceItem;
+ (id)keyPathsForValuesAffectingSelectedScreenFunctionBarInputSourceItem;

- (void).cxx_destruct;
- (void)stopRecording;
- (void)startRecording;
- (void)pauseRecording;
- (void)resumeRecording;
- (void)selectFunctionBarInputSourceItem:(id)a0;

@end
