@interface FTNetworkSupport : NSObject {
    char _enableCriticalReliability;
    char _criticalReliabilityEnabledState;
}

@property (readonly, nonatomic) char allowAnyNetwork;
@property (readonly, nonatomic) char validNetworkEnabled;
@property (readonly, nonatomic) char validNetworkActive;
@property (readonly, nonatomic) char validNetworkReachable;
@property (readonly, nonatomic) char wiFiActiveAndReachable;
@property (readonly, nonatomic) char willSearchForNetwork;
@property (readonly, nonatomic) char dataActiveAndReachable;
@property (readonly, nonatomic) char networkEnabled;
@property (readonly, nonatomic) char networkActive;
@property (readonly, nonatomic) char networkReachable;
@property (nonatomic) char enableCriticalReliability;

+ (id)sharedInstance;

- (char)validNetworkEnabledForBundleId:(id)a0;
- (void)_clearReliabilityTimeoutInterval;
- (void)_reallySetCriticalReliability:(char)a0;
- (void)_setReliabilityTimeoutInterval;
- (void)_tryToEnableReliability;
- (char)validNetworkActiveForBundleId:(id)a0;
- (char)validNetworkReachableForBundleId:(id)a0;
- (char)willSearchForNetworkForBundleId:(id)a0;

@end
