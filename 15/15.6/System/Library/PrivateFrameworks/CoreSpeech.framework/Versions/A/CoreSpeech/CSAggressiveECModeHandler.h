@class CSAttSiriAudioSessionStateClient, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSAggressiveECModeHandler : NSObject <CSAttSiriSessionStateDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSAttSiriAudioSessionStateClient *siriStateClient;
@property (nonatomic) char readThisOrVoiceOverSessionActive;
@property (nonatomic) char inAttendingWindow;
@property (nonatomic) char aggressiveEchoCancellationApplied;
@property (nonatomic) long long echoCancellationReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_configureAggressiveEchoCancellationParams:(char)a0;
- (void)notifySiriSessionStateChange:(char)a0;
- (void)notifySiriSessionStateTTSOngoing:(char)a0;
- (void)setAttendingState:(char)a0;
- (void)setAudioSessionState:(id)a0;
- (void)siriDismissed;

@end
