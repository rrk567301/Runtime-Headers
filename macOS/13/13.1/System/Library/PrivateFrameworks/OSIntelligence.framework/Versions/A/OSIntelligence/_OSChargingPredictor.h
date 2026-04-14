@class NSXPCConnection, NSObject;
@protocol OS_os_log;

@interface _OSChargingPredictor : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)predictor;

- (id)init;
- (void).cxx_destruct;
- (id)chargePredictionOutputWithError:(id *)a0;
- (void)fixModelOutput:(id)a0 withHandler:(id /* block */)a1;
- (void)unfixModelOutputWithHandler:(id /* block */)a0;
- (BOOL)longChargeExpected;
- (BOOL)longChargeExpectedWithConfidence:(double)a0;
- (double)predictedChargeDuration;
- (double)timeUntilNextExpectedPlugin;
- (double)timeUntilNextExpectedPluginWithConfidence:(double)a0;
- (BOOL)isDeepDischargeExpected;
- (int)expectedMinimumDischarge;
- (id)fixModelOutput:(id)a0;
- (id)unFixModelOutput;

@end
