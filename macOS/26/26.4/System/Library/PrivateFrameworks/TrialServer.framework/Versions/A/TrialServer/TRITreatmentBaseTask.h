@class NSString;
@protocol TRITaskAttributing;

@interface TRITreatmentBaseTask : TRIExperimentBaseTask

@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) id<TRITaskAttributing> taskAttributing;

- (id)dimensions;
- (id)trialSystemTelemetry;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)metrics;
- (unsigned long long)hash;
- (id)description;
- (id)initWithExperiment:(id)a0 treatmentId:(id)a1 taskAttributing:(id)a2;

@end
