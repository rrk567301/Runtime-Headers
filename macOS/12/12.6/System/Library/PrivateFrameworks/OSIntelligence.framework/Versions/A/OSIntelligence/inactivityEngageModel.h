@class MLModel;

@interface inactivityEngageModel : NSObject

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
- (id)predictionFromAll_dur_avg_2:(double)a0 all_dur_std_2:(double)a1 all_long_percent_2:(double)a2 recent_dur_avg_2:(double)a3 recent_dur_std_2:(double)a4 recent_long_percent_2:(double)a5 dow_dur_avg_2:(double)a6 dow_dur_std_2:(double)a7 dow_long_percent_2:(double)a8 start_time_sin:(double)a9 start_time_cos:(double)a10 start_dow_sin:(double)a11 start_dow_cos:(double)a12 error:(id *)a13;

@end
