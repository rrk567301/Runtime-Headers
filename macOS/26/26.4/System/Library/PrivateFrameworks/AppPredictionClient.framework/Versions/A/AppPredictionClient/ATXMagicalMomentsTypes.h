@interface ATXMagicalMomentsTypes : NSObject

+ (id)mmEventTypeMapping;
+ (id)stringForMMEventType:(unsigned long long)a0;
+ (id)stringForMMConsumerType:(unsigned long long)a0;
+ (unsigned long long)mmConsumerTypeOfConsumerType:(unsigned long long)a0 consumerSubType:(unsigned char)a1;
+ (id)predictionReasonMapping;
+ (id)stringForConsumerType:(unsigned long long)a0;
+ (id)stringForPredictionReason:(long long)a0;
+ (id)consumerMapping;
+ (long long)selectSingleReason:(long long)a0;
+ (id)mmConsumerMapping;

@end
