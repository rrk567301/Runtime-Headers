@interface WADeploymentAnalyzerDefaults : NSObject

@property (nonatomic) double poorCoverageThreshold;
@property (nonatomic) long long poorCoverageRSSI;
@property (nonatomic) unsigned long long poorCoverageMinimumStay;
@property (nonatomic) long long highCongestionRSSIThreshold;
@property (nonatomic) unsigned long long highCongestionCCAThreshold;
@property (nonatomic) double highCongestionThreshold;
@property (nonatomic) unsigned long long highCongestionMinimumStay;

+ (id)_numberDefaultForKey:(id)a0;

- (id)init;

@end
