@class TSgPTPPortStatistics, _TSF_TSDgPTPFDPtPPort;

@interface TSgPTPFDPtPPort : TSgPTPNetworkPort {
    _TSF_TSDgPTPFDPtPPort *_impl;
}

@property (retain, nonatomic) TSgPTPPortStatistics *statistics;
@property (readonly, nonatomic) char localPDelayLogMeanInterval;
@property (readonly, nonatomic) char remotePDelayLogMeanInterval;
@property (readonly, nonatomic) char multipleRemotes;
@property (readonly, nonatomic) char measuringPDelay;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)keyPathsForValuesAffectingLocalPDelayLogMeanInterval;
+ (id)keyPathsForValuesAffectingMeasuringPDelay;
+ (id)keyPathsForValuesAffectingMultipleRemotes;
+ (id)keyPathsForValuesAffectingRemotePDelayLogMeanInterval;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithImplDC:(id)a0;
- (char)measuringPDelay;
- (char)multipleRemotes;
- (char)localPDelayLogMeanInterval;
- (char)remotePDelayLogMeanInterval;

@end
