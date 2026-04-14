@class NSString, AFAudioPowerUpdater;
@protocol SVXClientServiceProviding, SVXClientAudioPowerServiceDelegate, AFAudioPowerProviding, SVXPerforming;

@interface SVXClientAudioPowerService : NSObject <AFAudioPowerUpdaterDelegate, SVXClientServiceConsuming, SVXClientAudioPowerServicing> {
    id<SVXPerforming> _performer;
    long long _type;
    id<SVXClientServiceProviding> _clientServiceProvider;
    BOOL _wantsUpdate;
    long long _frequency;
    id<AFAudioPowerProviding> _provider;
    AFAudioPowerUpdater *_updater;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SVXClientAudioPowerServiceDelegate> delegate;

- (void).cxx_destruct;
- (void)_endUpdate;
- (void)endUpdate;
- (void)audioPowerUpdaterDidUpdate:(id)a0 averagePower:(float)a1 peakPower:(float)a2;
- (id)initWithClientServiceProvider:(id)a0 analytics:(id)a1 performer:(id)a2;
- (id)initWithType:(long long)a0 clientServiceProvider:(id)a1 analytics:(id)a2 performer:(id)a3;
- (void)clientServiceDidChange:(BOOL)a0;
- (void)handleWillBeginUpdateAudioPowerWithProvider:(id)a0;
- (void)handleDidEndUpdateAudioPower;
- (void)_handleWillBeginUpdateAudioPowerWithProvider:(id)a0;
- (void)_handleDidEndUpdateAudioPower;
- (void)_beginUpdateWithFrequency:(long long)a0;
- (void)_createUpdater;
- (void)_destroyUpdater;
- (void)beginUpdateWithFrequency:(long long)a0;

@end
