@interface VCSwitchManager : NSObject

@property unsigned int localSwitches;
@property unsigned int remoteSwitches;
@property unsigned int negotiatedSwitches;

- (id)description;
- (void)initializeLocalSwitches;
- (void)setupLocalOnOffSwitches;
- (void)setupLocalABTestSwitches;
- (void)setupLocalSwitchesIndividually;
- (void)setupLocalOnOffSwitchesFromMasterSwitch;
- (void)setupLocalAudioTestGroupSwitches;
- (void)setupLocalVideoTestGroupSwitches;
- (void)setupLocalNetworkTestGroupSwitches;
- (void)setupLocalRateControlTestGroupSwitches;
- (void)setupLocalDuplicationTestGroupSwitches;
- (void)updateDuplicationEnhancementSwitches;
- (void)negotiateSwitches;
- (void)negotiateSwitchesForIsCaller:(BOOL)a0;
- (void)setRemoteSwitches:(unsigned int)a0 isCaller:(BOOL)a1;
- (BOOL)isSwitchEnabled:(unsigned int)a0;
- (BOOL)isLocalSwitchEnabled:(unsigned int)a0;
- (unsigned int)applyNegotiationRulesUsingLocalSwitches:(unsigned int)a0 negotiatedSwitches:(unsigned int)a1;

@end
