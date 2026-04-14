@interface ATXTypes : NSObject

+ (id)stringForConsumerType:(unsigned long long)a0;
+ (unsigned long long)engagementTypeForString:(id)a0 found:(BOOL *)a1;
+ (unsigned long long)consumerTypeForString:(id)a0 found:(BOOL *)a1;
+ (id)stringForConsumerSubtype:(unsigned char)a0;
+ (id)validConsumerSubTypeList;
+ (id)consumerMapping;
+ (id)validConsumerTypeList;
+ (unsigned char)consumerSubtypeForString:(id)a0 found:(BOOL *)a1;
+ (void)iterConsumerSubTypesWithBlock:(id /* block */)a0;
+ (id)uiTypeForActionConsumerSubType:(unsigned char)a0;
+ (id)consumerSubtypeMapping;
+ (id)validConsumerTypes;
+ (id)safeStringForConsumerSubtype:(unsigned char)a0;
+ (void)iterConsumerTypesWithBlock:(id /* block */)a0;
+ (id)validConsumerSubTypes;
+ (id)inverseConsumerSubtypeMapping;
+ (unsigned long long)consumerTypeForSubType:(unsigned char)a0;
+ (id)stringForEngagementType:(unsigned long long)a0;
+ (BOOL)isActionSpotlightConsumerSubType:(unsigned char)a0;

@end
