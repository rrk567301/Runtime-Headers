@class NSString;
@protocol TRITaskAttributing;

@interface TRITreatmentBaseTask : TRIExperimentBaseTask

@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) id<TRITaskAttributing> taskAttributing;

- (id)trialSystemTelemetry;
- (id)dimensions;
- (id)description;
- (id)metrics;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithExperiment:(id)a0 treatmentId:(id)a1 taskAttributing:(id)a2;

@end
