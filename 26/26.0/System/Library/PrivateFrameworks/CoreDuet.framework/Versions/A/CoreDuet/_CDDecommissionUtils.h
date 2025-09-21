@interface _CDDecommissionUtils : NSObject

+ (id)allowedStreams;
+ (id)filterEvents:(id)a0;
+ (BOOL)isCompletelyDisabled;
+ (BOOL)isCoreDuetProcess;
+ (BOOL)isDigitalHealthProcess;
+ (BOOL)isDigitalHealthSyncDisabled;
+ (BOOL)isKnowledgeDaemon;
+ (BOOL)isRequestAllowed:(id *)a0;
+ (id)knowledgeStoreDisabledError;
+ (void)logFault;

@end
