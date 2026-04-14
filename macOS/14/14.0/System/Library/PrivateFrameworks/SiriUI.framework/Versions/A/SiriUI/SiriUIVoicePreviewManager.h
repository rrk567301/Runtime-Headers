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
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (id)initWithMode:(long long)a0;
- (void)_executeCompletionBlock;
- (void)_startOrbAnimation;
- (void)_stopOrbAnimation;
- (void)_updatePowerOutputLevel;
- (void)_updatePowerOutputLevelToIdle;
- (void)playPreviewForVoice:(id)a0 withCompletionBlock:(id /* block */)a1;

@end
