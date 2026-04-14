@class NSString;
@protocol TRITaskAttributing;

@interface TRITreatmentBaseTask : TRIExperimentBaseTask

@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) id<TRITaskAttributing> taskAttributing;

- (id)trialSystemTelemetry;
- (id)metrics;
- (id)description;
- (void).cxx_destruct;
- (id)dimensions;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithExperiment:(id)a0 treatmentId:(id)a1 taskAttributing:(id)a2;

@end
