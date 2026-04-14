@interface ATXTypes : NSObject

+ (id)validConsumerTypes;
+ (id)validConsumerSubTypeList;
+ (id)uiTypeForActionConsumerSubType:(unsigned char)a0;
+ (id)consumerSubtypeMapping;
+ (id)safeStringForConsumerSubtype:(unsigned char)a0;
+ (BOOL)isActionSpotlightConsumerSubType:(unsigned char)a0;
+ (void)iterConsumerTypesWithBlock:(id /* block */)a0;
+ (id)stringForEngagementType:(unsigned long long)a0;
+ (void)iterConsumerSubTypesWithBlock:(id /* block */)a0;
+ (unsigned long long)engagementTypeForString:(id)a0 found:(BOOL *)a1;
+ (id)validConsumerSubTypes;
+ (unsigned long long)consumerTypeForString:(id)a0 found:(BOOL *)a1;
+ (id)stringForConsumerType:(unsigned long long)a0;
+ (id)validConsumerTypeList;
+ (unsigned long long)consumerTypeForSubType:(unsigned char)a0;
+ (id)stringForConsumerSubtype:(unsigned char)a0;
+ (id)consumerMapping;
+ (unsigned char)consumerSubtypeForString:(id)a0 found:(BOOL *)a1;
+ (id)inverseConsumerSubtypeMapping;

@end
