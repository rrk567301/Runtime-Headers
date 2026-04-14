@interface ATXMagicalMomentsTypes : NSObject

+ (id)stringForConsumerType:(unsigned long long)a0;
+ (unsigned long long)mmConsumerTypeOfConsumerType:(unsigned long long)a0 consumerSubType:(unsigned char)a1;
+ (long long)selectSingleReason:(long long)a0;
+ (id)consumerMapping;
+ (id)predictionReasonMapping;
+ (id)stringForMMConsumerType:(unsigned long long)a0;
+ (id)stringForMMEventType:(unsigned long long)a0;
+ (id)stringForPredictionReason:(long long)a0;
+ (id)mmConsumerMapping;
+ (id)mmEventTypeMapping;

@end
