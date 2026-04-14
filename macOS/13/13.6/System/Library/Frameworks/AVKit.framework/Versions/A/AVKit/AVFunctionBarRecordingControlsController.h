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

+ (BOOL)automaticallyNotifiesObserversOfAudioFunctionBarInputSourceItems;
+ (BOOL)automaticallyNotifiesObserversOfCanPauseRecording;
+ (BOOL)automaticallyNotifiesObserversOfCanResumeRecording;
+ (BOOL)automaticallyNotifiesObserversOfCanStartRecording;
+ (BOOL)automaticallyNotifiesObserversOfCanStopRecording;
+ (BOOL)automaticallyNotifiesObserversOfPaused;
+ (BOOL)automaticallyNotifiesObserversOfRecordedFileSize;
+ (BOOL)automaticallyNotifiesObserversOfRecordedTime;
+ (BOOL)automaticallyNotifiesObserversOfRecording;
+ (BOOL)automaticallyNotifiesObserversOfScreenFunctionBarInputSourceItems;
+ (BOOL)automaticallyNotifiesObserversOfSelectedAudioFunctionBarInputSourceItem;
+ (BOOL)automaticallyNotifiesObserversOfSelectedScreenFunctionBarInputSourceItem;
+ (BOOL)automaticallyNotifiesObserversOfSelectedVideoFunctionBarInputSourceItem;
+ (BOOL)automaticallyNotifiesObserversOfVideoFunctionBarInputSourceItems;
+ (id)keyPathsForValuesAffectingAudioFunctionBarInputSourceItems;
+ (id)keyPathsForValuesAffectingCanPauseRecording;
+ (id)keyPathsForValuesAffectingCanResumeRecording;
+ (id)keyPathsForValuesAffectingCanStartRecording;
+ (id)keyPathsForValuesAffectingCanStopRecording;
+ (id)keyPathsForValuesAffectingPaused;
+ (id)keyPathsForValuesAffectingRecordedFileSize;
+ (id)keyPathsForValuesAffectingRecordedTime;
+ (id)keyPathsForValuesAffectingRecording;
+ (id)keyPathsForValuesAffectingScreenFunctionBarInputSourceItems;
+ (id)keyPathsForValuesAffectingSelectedAudioFunctionBarInputSourceItem;
+ (id)keyPathsForValuesAffectingSelectedScreenFunctionBarInputSourceItem;
+ (id)keyPathsForValuesAffectingSelectedVideoFunctionBarInputSourceItem;
+ (id)keyPathsForValuesAffectingVideoFunctionBarInputSourceItems;

- (void).cxx_destruct;
- (void)stopRecording;
- (void)startRecording;
- (void)resumeRecording;
- (void)pauseRecording;
- (void)selectFunctionBarInputSourceItem:(id)a0;

@end
