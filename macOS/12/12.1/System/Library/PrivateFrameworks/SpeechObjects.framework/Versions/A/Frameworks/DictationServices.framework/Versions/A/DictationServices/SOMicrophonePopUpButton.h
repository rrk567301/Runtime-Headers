@class NSImageView, NSTextField, NSTimer, NSView, SOMicrophoneLevelMeterController, NSMutableArray;

@interface SOMicrophonePopUpButton : NSPopUpButton {
    NSMutableArray *_currentMicrophoneArray;
    NSTimer *_microphoneSensingTimer;
    NSView *_hortizontallyCenteredView;
    SOMicrophoneLevelMeterController *_microphoneLevelController;
}

@property id delegate;
@property (readonly) BOOL containsCautionaryInfo;
@property BOOL suppressCautionaryInfo;
@property (retain) NSImageView *cautionaryImageView;
@property (retain) NSTextField *cautionaryExplanation;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (long long)indexOfSelectedItem;
- (void)buildPopUpButton;
- (id)selectedMicrophoneIdentifier;
- (id)selectedMicrophoneName;
- (void)_audioDeviceRecievedNotification:(id)a0;
- (void)_popUpMenuWillSendAction:(id)a0;
- (void)_popUpMenuDidSendAction:(id)a0;
- (void)_cancelMicrophoneLevelSensing;
- (void)_scheduleMicrophoneLevelSensingWithOriginalTitle:(id)a0;
- (void)_initializeCautionIconView;
- (id)_selectedAudioSourceUsingResolvedAutomaticSelection:(BOOL)a0;
- (id)_selectedAudioDevice;
- (void)_finishMicrophoneLevelSensingWithTimer:(id)a0;
- (id)selectedOrResolvedAutomaticMicrophoneIdentifier;

@end
