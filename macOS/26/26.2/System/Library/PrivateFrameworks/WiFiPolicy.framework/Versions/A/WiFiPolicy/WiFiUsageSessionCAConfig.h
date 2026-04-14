@class NSDate;

@interface WiFiUsageSessionCAConfig : NSObject

@property (readonly, nonatomic) unsigned long long ca_sampling;
@property (readonly, nonatomic) double ca_minTimeIntervalBetweenSubmissions;
@property (readonly, nonatomic) NSDate *ca_lastSubmission;

- (void).cxx_destruct;
- (id)description;
- (void)countSubmission;
- (BOOL)canSubmit;
- (id)initWithSampling:(unsigned long long)a0 minInterval:(double)a1;

@end
