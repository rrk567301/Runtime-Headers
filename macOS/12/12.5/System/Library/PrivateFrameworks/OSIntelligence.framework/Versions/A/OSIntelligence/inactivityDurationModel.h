@class MLModel;

@interface inactivityDurationModel : NSObject

@property (readonly, nonatomic) MLModel *model;

+ (void)loadContentsOfURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (id)URLOfModelInThisBundle;
+ (void)loadWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithMLModel:(id)a0;
- (id)predictionsFromInputs:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromStart_time_sin:(double)a0 start_time_cos:(double)a1 start_dow_sin:(double)a2 start_dow_cos:(double)a3 all_dur_avg_2:(double)a4 all_dur_std_2:(double)a5 all_long_percent_2:(double)a6 recent_dur_avg_2:(double)a7 recent_dur_std_2:(double)a8 recent_long_percent_2:(double)a9 dow_dur_avg_2:(double)a10 dow_dur_std_2:(double)a11 dow_long_percent_2:(double)a12 error:(id *)a13;

@end
