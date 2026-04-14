@interface PLEntryNotificationOperatorComposition : PLNSNotificationOperatorComposition

+ (id)getSBCMaxTimeInterval;
+ (id)smcThermalInstantNotificationWithOperator:(id)a0 withBlock:(id /* block */)a1;
+ (id)displayOnNotificationWithOperator:(id)a0 withBlock:(id /* block */)a1;
+ (id)canSleepEntryNotificationWithOperator:(id)a0 withBlock:(id /* block */)a1;
+ (id)sleepEntryNotificationWithOperator:(id)a0 withBlock:(id /* block */)a1;
+ (id)significantBatteryChangeNotificationWithOperator:(id)a0 withBlock:(id /* block */)a1;
+ (id)displayOffNotificationWithOperator:(id)a0 withBlock:(id /* block */)a1;
+ (id)luxEntryNotificationWithOperator:(id)a0 withBlock:(id /* block */)a1;
+ (id)wakeEntryNotificationWithOperator:(id)a0 withBlock:(id /* block */)a1;
+ (id)smcPowerAccumulatedNotificationWithOperator:(id)a0 withBlock:(id /* block */)a1;
+ (id)significantBatteryChangeNotificationWithOperator:(id)a0 withMaxIntervalInSecs:(double)a1 withBlock:(id /* block */)a2;
+ (id)getSBCMinTimeInterval;
+ (id)canSleepEntryNotificationWithWorkQueue:(id)a0 withBlock:(id /* block */)a1;
+ (id)requestEntryForEntryKey:(id)a0 forOperator:(id)a1 withTimeout:(double)a2 error:(id *)a3;
+ (id)wakeEntryNotificationWithWorkQueue:(id)a0 withBlock:(id /* block */)a1;

- (id)initNotificationTimerWithWorkQueue:(id)a0 withMaxInterval:(double)a1 withBlock:(id /* block */)a2;
- (id)initNotificationTimerWithWorkQueue:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithWorkQueue:(id)a0 forEntryKey:(id)a1 forUpdateOrInsert:(short)a2 withFilter:(id)a3 withBlock:(id /* block */)a4;
- (id)initWithOperator:(id)a0 forEntryKey:(id)a1 forUpdateOrInsert:(short)a2 withBlock:(id /* block */)a3;
- (id)initWithOperator:(id)a0 forEntryKey:(id)a1 withBlock:(id /* block */)a2;
- (void)requestEntry;
- (id)initWithWorkQueue:(id)a0 forEntryKey:(id)a1 forUpdateOrInsert:(short)a2 withBlock:(id /* block */)a3;
- (id)initWithOperator:(id)a0 forEntryKey:(id)a1 forUpdateOrInsert:(short)a2 withFilter:(id)a3 withBlock:(id /* block */)a4;
- (id)initWithOperator:(id)a0 forEntryKey:(id)a1 withFilter:(id)a2 withBlock:(id /* block */)a3;
- (id)initWithWorkQueue:(id)a0 forEntryKey:(id)a1 withBlock:(id /* block */)a2;
- (id)initWithWorkQueue:(id)a0 forEntryKey:(id)a1 withFilter:(id)a2 withBlock:(id /* block */)a3;

@end
