@interface ATXTypes : NSObject

+ (id)stringForEngagementType:(unsigned long long)a0;
+ (id)stringForConsumerType:(unsigned long long)a0;
+ (id)stringForConsumerSubtype:(unsigned char)a0;
+ (id)safeStringForConsumerSubtype:(unsigned char)a0;
+ (id)consumerMapping;
+ (id)consumerSubtypeMapping;
+ (id)inverseConsumerSubtypeMapping;
+ (id)validConsumerTypes;
+ (id)validConsumerTypeList;
+ (id)validConsumerSubTypes;
+ (id)validConsumerSubTypeList;
+ (id)uiTypeForActionConsumerSubType:(unsigned char)a0;
+ (unsigned long long)engagementTypeForString:(id)a0 found:(BOOL *)a1;
+ (unsigned long long)consumerTypeForString:(id)a0 found:(BOOL *)a1;
+ (unsigned char)consumerSubtypeForString:(id)a0 found:(BOOL *)a1;
+ (unsigned long long)consumerTypeForSubType:(unsigned char)a0;
+ (BOOL)isActionSpotlightConsumerSubType:(unsigned char)a0;
+ (void)iterConsumerTypesWithBlock:(id /* block */)a0;
+ (void)iterConsumerSubTypesWithBlock:(id /* block */)a0;

@end
