@class AVAudioPlayer, NSString, NSTimer, NSObject;
@protocol OS_dispatch_queue, SiriUIVoicePreviewManagerDelegate;

@interface SiriUIVoicePreviewManager : NSObject <AVAudioPlayerDelegate>

@property (retain, nonatomic) AVAudioPlayer *voicePreviewPlayer;
@property (retain, nonatomic) NSTimer *orbPowerLevelTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *previewPlaybackQueue;
@property long long mode;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (weak, nonatomic) id<SiriUIVoicePreviewManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMode:(long long)a0;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)_updatePowerOutputLevel;
- (void)playPreviewForVoice:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)_startOrbAnimation;
- (void)_stopOrbAnimation;
- (void)_updatePowerOutputLevelToIdle;
- (void)_executeCompletionBlock;

@end
