@class NSPProxyAgentNetworkStatistics;

@interface NSPToggleStats : NSPProxyAnalytics

@property (nonatomic) BOOL toggleState;
@property (nonatomic) unsigned long long tokenOutageCount;
@property (nonatomic) unsigned long long configOutageCount;
@property (nonatomic) unsigned long long networkOutageCount;
@property (nonatomic) unsigned long long proxyOutageCount;
@property (nonatomic) unsigned long long odohOutageCount;
@property (nonatomic) unsigned long long systemIncompatibleCount;
@property (nonatomic) unsigned long long fraudAlertCount;
@property (retain, nonatomic) NSPProxyAgentNetworkStatistics *primaryPathStatistics;
@property (retain, nonatomic) NSPProxyAgentNetworkStatistics *fallbackPathStatistics;
@property (nonatomic) unsigned long long odohAuthFailureCount;
@property (nonatomic) unsigned long long odohBadMessageCount;

- (id)init;
- (void).cxx_destruct;
- (id)eventName;
- (void)resetStats;
- (void)addNetworkStatsToToggleStatsDict:(id)a0 networkStats:(id)a1;
- (id)analyticsDict;
- (void)sendToggleOffStats;
- (void)sendToggleOnStats;

@end
