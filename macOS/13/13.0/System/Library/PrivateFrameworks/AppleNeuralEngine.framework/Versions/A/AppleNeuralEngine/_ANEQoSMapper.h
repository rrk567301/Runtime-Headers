@interface _ANEQoSMapper : NSObject

+ (unsigned int)aneUserInteractiveTaskQoS;
+ (unsigned int)aneRealTimeTaskQoS;
+ (unsigned int)aneUserInitiatedTaskQoS;
+ (unsigned int)aneDefaultTaskQoS;
+ (unsigned int)aneUtilityTaskQoS;
+ (unsigned int)aneBackgroundTaskQoS;
+ (unsigned long long)queueIndexForQoS:(unsigned int)a0;
+ (unsigned long long)realTimeQueueIndex;
+ (int)programPriorityForQoS:(unsigned int)a0;
+ (int)realTimeProgramPriority;
+ (unsigned int)qosForProgramPriority:(int)a0;
+ (id)dispatchQueueArrayByMappingPrioritiesWithTag:(id)a0;

@end
