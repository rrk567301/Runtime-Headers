@class _TSF_TSDgPTPPortStatistics;

@interface _TSF_TSDgPTPFDPtPPort : _TSF_TSDgPTPNetworkPort

@property (retain, nonatomic) _TSF_TSDgPTPPortStatistics *statistics;
@property (nonatomic) char localPDelayLogMeanInterval;
@property (nonatomic) char remotePDelayLogMeanInterval;
@property (nonatomic) char multipleRemotes;
@property (nonatomic) char measuringPDelay;

- (void).cxx_destruct;
- (char)_localPDelayLogMeanInterval;
- (char)_measuringPDelay;
- (char)_multipleRemotes;
- (char)_remotePDelayLogMeanInterval;
- (id)_statistics;
- (id)initWithService:(id)a0 pid:(int)a1;
- (void)updateProperties;

@end
