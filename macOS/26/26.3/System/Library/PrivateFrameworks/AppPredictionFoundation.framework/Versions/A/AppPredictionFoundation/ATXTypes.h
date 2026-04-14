@interface ATXTypes : NSObject

+ (id)validConsumerTypeList;
+ (unsigned long long)engagementTypeForString:(id)a0 found:(BOOL *)a1;
+ (void)iterConsumerSubTypesWithBlock:(id /* block */)a0;
+ (id)validConsumerTypes;
+ (id)consumerMapping;
+ (unsigned char)consumerSubtypeForString:(id)a0 found:(BOOL *)a1;
+ (id)stringForEngagementType:(unsigned long long)a0;
+ (id)stringForConsumerSubtype:(unsigned char)a0;
+ (void)iterConsumerTypesWithBlock:(id /* block */)a0;
+ (unsigned long long)consumerTypeForSubType:(unsigned char)a0;
+ (id)stringForConsumerType:(unsigned long long)a0;
+ (id)inverseConsumerSubtypeMapping;
+ (id)uiTypeForActionConsumerSubType:(unsigned char)a0;
+ (unsigned long long)consumerTypeForString:(id)a0 found:(BOOL *)a1;
+ (id)validConsumerSubTypeList;
+ (id)consumerSubtypeMapping;
+ (BOOL)isActionSpotlightConsumerSubType:(unsigned char)a0;
+ (id)safeStringForConsumerSubtype:(unsigned char)a0;
+ (id)validConsumerSubTypes;

@end
