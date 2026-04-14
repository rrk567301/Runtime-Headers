@class NSXPCConnection, NSObject;
@protocol OS_os_log;

@interface _OSChargingPredictor : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

+ (id)predictor;

- (id)validConnection;
- (id)unfixModelOutput;
- (void)unfixModelOutputWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)fixModelOutput:(id)a0;
- (void)initConnection;
- (id)init;
- (void)fixModelOutput:(id)a0 withHandler:(id /* block */)a1;
- (void)dealloc;
- (void)handleInterruption;
- (id)chargePredictionOutputOfScheme:(unsigned long long)a0 withError:(id *)a1;
- (int)expectedMinimumDischarge;
- (BOOL)isDeepDischargeExpected;
- (BOOL)longChargeExpected;
- (BOOL)longChargeExpectedWithConfidence:(double)a0;
- (double)predictedChargeDuration;
- (double)timeUntilNextChargeSessionOfMinDuration:(double)a0 fromSOC:(long long)a1 WithError:(id *)a2;
- (double)timeUntilNextExpectedPlugin;
- (double)timeUntilNextExpectedPluginWithConfidence:(double)a0;

@end
