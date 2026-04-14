@class NSSet;

@interface inactivityEngageModelInput : NSObject <MLFeatureProvider>

@property (nonatomic) double all_dur_avg_2;
@property (nonatomic) double all_dur_std_2;
@property (nonatomic) double all_long_percent_2;
@property (nonatomic) double recent_dur_avg_2;
@property (nonatomic) double recent_dur_std_2;
@property (nonatomic) double recent_long_percent_2;
@property (nonatomic) double dow_dur_avg_2;
@property (nonatomic) double dow_dur_std_2;
@property (nonatomic) double dow_long_percent_2;
@property (nonatomic) double start_time_sin;
@property (nonatomic) double start_time_cos;
@property (nonatomic) double start_dow_sin;
@property (nonatomic) double start_dow_cos;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithAll_dur_avg_2:(double)a0 all_dur_std_2:(double)a1 all_long_percent_2:(double)a2 recent_dur_avg_2:(double)a3 recent_dur_std_2:(double)a4 recent_long_percent_2:(double)a5 dow_dur_avg_2:(double)a6 dow_dur_std_2:(double)a7 dow_long_percent_2:(double)a8 start_time_sin:(double)a9 start_time_cos:(double)a10 start_dow_sin:(double)a11 start_dow_cos:(double)a12;

@end
