@class TRIRolloutDatabase, TRIServerContext;
@protocol TRIRolloutTargeting;

@interface TRIRolloutTargetingOperation : NSObject

@property (readonly, nonatomic) id<TRIRolloutTargeting> targeter;
@property (readonly, nonatomic) TRIRolloutDatabase *rolloutDatabase;
@property (readonly, nonatomic) TRIServerContext *context;

- (void).cxx_destruct;
- (char)_targetRolloutDeployment:(id)a0 appendingTelemetryToSupport:(id)a1 reportTelemetryToServer:(char *)a2 factorPackSetIdToActivate:(id *)a3 shouldDisenroll:(char *)a4 error:(id *)a5;
- (id)initWithRolloutTargeter:(id)a0 rolloutDatabase:(id)a1 context:(id)a2;
- (char)targetRolloutDeployment:(id)a0 appendingTelemetryToSupport:(id)a1 reportTelemetryToServer:(char *)a2 factorPackSetIdToActivate:(id *)a3 shouldDisenroll:(char *)a4 error:(id *)a5;

@end
