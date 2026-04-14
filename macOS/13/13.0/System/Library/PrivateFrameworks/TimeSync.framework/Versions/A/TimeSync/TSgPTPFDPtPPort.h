@class TSgPTPPortStatistics, TSXgPTPFDPtPPort;

@interface TSgPTPFDPtPPort : TSgPTPNetworkPort {
    TSXgPTPFDPtPPort *_implXPC;
}

@property (retain, nonatomic) TSgPTPPortStatistics *statistics;
@property (readonly, nonatomic) char localPDelayLogMeanInterval;
@property (readonly, nonatomic) char remotePDelayLogMeanInterval;
@property (readonly, nonatomic) BOOL multipleRemotes;
@property (readonly, nonatomic) BOOL measuringPDelay;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)keyPathsForValuesAffectingLocalPDelayLogMeanInterval;
+ (id)keyPathsForValuesAffectingRemotePDelayLogMeanInterval;
+ (id)keyPathsForValuesAffectingMultipleRemotes;
+ (id)keyPathsForValuesAffectingMeasuringPDelay;

- (void).cxx_destruct;
- (char)localPDelayLogMeanInterval;
- (char)remotePDelayLogMeanInterval;
- (BOOL)multipleRemotes;
- (BOOL)measuringPDelay;
- (id)initWithImplXPC:(id)a0;
- (void)updateWithXPCStatistics:(id)a0;

@end
