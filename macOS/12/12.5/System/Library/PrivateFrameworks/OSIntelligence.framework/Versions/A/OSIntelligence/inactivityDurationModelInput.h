@class NSSet;

@interface inactivityDurationModelInput : NSObject <MLFeatureProvider>

@property (nonatomic) double start_time_sin;
@property (nonatomic) double start_time_cos;
@property (nonatomic) double start_dow_sin;
@property (nonatomic) double start_dow_cos;
@property (nonatomic) double all_dur_avg_2;
@property (nonatomic) double all_dur_std_2;
@property (nonatomic) double all_long_percent_2;
@property (nonatomic) double recent_dur_avg_2;
@property (nonatomic) double recent_dur_std_2;
@property (nonatomic) double recent_long_percent_2;
@property (nonatomic) double dow_dur_avg_2;
@property (nonatomic) double dow_dur_std_2;
@property (nonatomic) double dow_long_percent_2;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithStart_time_sin:(double)a0 start_time_cos:(double)a1 start_dow_sin:(double)a2 start_dow_cos:(double)a3 all_dur_avg_2:(double)a4 all_dur_std_2:(double)a5 all_long_percent_2:(double)a6 recent_dur_avg_2:(double)a7 recent_dur_std_2:(double)a8 recent_long_percent_2:(double)a9 dow_dur_avg_2:(double)a10 dow_dur_std_2:(double)a11 dow_long_percent_2:(double)a12;

@end
