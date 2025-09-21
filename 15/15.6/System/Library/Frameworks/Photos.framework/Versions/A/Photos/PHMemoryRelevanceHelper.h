@interface PHMemoryRelevanceHelper : NSObject

+ (double)relevanceScoreForMemory:(id)a0 atDate:(id)a1;
+ (char)isMemory:(id)a0 proactiveWorthyAtDate:(id)a1;
+ (double)_categoryScoreComponentForMemory:(id)a0;
+ (double)_categoryWeightForMemory:(id)a0;
+ (char)_isDate:(id)a0 inSameDayAndMonthAsDate:(id)a1;
+ (char)_isMemoryCategoryTemporal:(unsigned long long)a0;
+ (char)_isMemorySubcategoryTemporal:(unsigned long long)a0;
+ (char)_isMemoryTemporal:(id)a0;
+ (double)_memoryTriggerTierScoreByTriggerType:(unsigned long long)a0;
+ (double)_notificationLevelWeightForMemory:(id)a0;
+ (double)_notificationScoreComponentForMemory:(id)a0;
+ (double)_subcategoryWeightForMemory:(id)a0;
+ (double)_triggerScoreComponentForMemory:(id)a0;
+ (double)_triggerScoreForMemory:(id)a0;
+ (char)isMemory:(id)a0 relevantAtDate:(id)a1;

@end
