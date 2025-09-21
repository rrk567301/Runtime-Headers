@interface VCSwitchManager : NSObject

@property unsigned int localSwitches;
@property unsigned int remoteSwitches;
@property unsigned int negotiatedSwitches;

- (id)description;
- (unsigned int)applyNegotiationRulesUsingLocalSwitches:(unsigned int)a0 negotiatedSwitches:(unsigned int)a1;
- (void)initializeLocalSwitches;
- (char)isLocalSwitchEnabled:(unsigned int)a0;
- (char)isSwitchEnabled:(unsigned int)a0;
- (void)negotiateSwitches;
- (void)negotiateSwitchesForIsCaller:(char)a0;
- (void)setRemoteSwitches:(unsigned int)a0 isCaller:(char)a1;
- (void)setupLocalABTestSwitches;
- (void)setupLocalAudioTestGroupSwitches;
- (void)setupLocalDuplicationTestGroupSwitches;
- (void)setupLocalNetworkTestGroupSwitches;
- (void)setupLocalOnOffSwitches;
- (void)setupLocalOnOffSwitchesFromMasterSwitch;
- (void)setupLocalRateControlTestGroupSwitches;
- (void)setupLocalSwitchesIndividually;
- (void)setupLocalVideoTestGroupSwitches;
- (void)updateDuplicationEnhancementSwitches;

@end
