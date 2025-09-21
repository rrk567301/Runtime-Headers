@class NSString, AFAudioPowerUpdater;
@protocol SVXClientServiceProviding, SVXClientAudioPowerServiceDelegate, AFAudioPowerProviding, SVXPerforming;

@interface SVXClientAudioPowerService : NSObject <AFAudioPowerUpdaterDelegate, SVXClientServiceConsuming, SVXClientAudioPowerServicing> {
    id<SVXPerforming> _performer;
    long long _type;
    id<SVXClientServiceProviding> _clientServiceProvider;
    char _wantsUpdate;
    long long _frequency;
    id<AFAudioPowerProviding> _provider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _providerLock;
    AFAudioPowerUpdater *_updater;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SVXClientAudioPowerServiceDelegate> delegate;
@property (readonly, nonatomic) float averagePower;
@property (readonly, nonatomic) float peakPower;

- (void).cxx_destruct;
- (void)_endUpdate;
- (void)audioPowerUpdaterDidUpdate:(id)a0 averagePower:(float)a1 peakPower:(float)a2;
- (void)endUpdate;
- (void)_destroyUpdater;
- (void)_beginUpdateWithFrequency:(long long)a0;
- (void)_createUpdater;
- (void)_handleDidEndUpdateAudioPower;
- (void)_handleWillBeginUpdateAudioPowerWithProvider:(id)a0;
- (id)_provider;
- (void)_setProvider:(id)a0;
- (void)beginUpdateWithFrequency:(long long)a0;
- (void)clientServiceDidChange:(char)a0;
- (void)handleDidEndUpdateAudioPower;
- (void)handleWillBeginUpdateAudioPowerWithProvider:(id)a0;
- (id)initWithClientServiceProvider:(id)a0 analytics:(id)a1 performer:(id)a2;
- (id)initWithType:(long long)a0 clientServiceProvider:(id)a1 analytics:(id)a2 performer:(id)a3;

@end
