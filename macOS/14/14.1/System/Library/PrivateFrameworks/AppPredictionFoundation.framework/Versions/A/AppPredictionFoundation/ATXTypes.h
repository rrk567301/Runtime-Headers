@interface ATXTypes : NSObject

+ (id)consumerMapping;
+ (id)uiTypeForActionConsumerSubType:(unsigned char)a0;
+ (unsigned char)consumerSubtypeForString:(id)a0 found:(BOOL *)a1;
+ (id)consumerSubtypeMapping;
+ (unsigned long long)consumerTypeForString:(id)a0 found:(BOOL *)a1;
+ (unsigned long long)consumerTypeForSubType:(unsigned char)a0;
+ (unsigned long long)engagementTypeForString:(id)a0 found:(BOOL *)a1;
+ (id)inverseConsumerSubtypeMapping;
+ (BOOL)isActionSpotlightConsumerSubType:(unsigned char)a0;
+ (void)iterConsumerSubTypesWithBlock:(id /* block */)a0;
+ (void)iterConsumerTypesWithBlock:(id /* block */)a0;
+ (id)safeStringForConsumerSubtype:(unsigned char)a0;
+ (id)stringForConsumerSubtype:(unsigned char)a0;
+ (id)stringForConsumerType:(unsigned long long)a0;
+ (id)stringForEngagementType:(unsigned long long)a0;
+ (id)validConsumerSubTypeList;
+ (id)validConsumerSubTypes;
+ (id)validConsumerTypeList;
+ (id)validConsumerTypes;

@end
