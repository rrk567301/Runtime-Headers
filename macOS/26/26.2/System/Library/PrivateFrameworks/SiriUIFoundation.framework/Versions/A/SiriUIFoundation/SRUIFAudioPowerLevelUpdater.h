@class NSString, CSAudioPowerServiceClient;
@protocol SRUIFAudioPowerLevelUpdaterDelegate;

@interface SRUIFAudioPowerLevelUpdater : NSObject <CSAudioPowerServiceClientDelegate>

@property (readonly, nonatomic, getter=_inputAudioPowerUpdater) CSAudioPowerServiceClient *inputAudioPowerUpdater;
@property (readonly, nonatomic, getter=_averageAudioPower) float averageAudioPower;
@property (readonly, weak, nonatomic, getter=_delegate) id<SRUIFAudioPowerLevelUpdaterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (float)averagePower;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)stopObservingUpdates;
- (void)sessionStateDidChangeTo:(long long)a0 isAttending:(BOOL)a1;
- (void)audioPowerDidUpdateWithType:(unsigned long long)a0 averagePower:(float)a1 peakPower:(float)a2;
- (void)startObservingUpdates;

@end
