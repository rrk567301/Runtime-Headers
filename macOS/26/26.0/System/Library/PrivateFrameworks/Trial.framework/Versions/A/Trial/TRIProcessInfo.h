@interface TRIProcessInfo : NSObject

+ (BOOL)hostingProcessIsSystemProcess;
+ (id)callerBundleId;
+ (id)hostingProcessName;
+ (BOOL)hostingProcessIsTriald;
+ (BOOL)hostingProcessIsTrialdSystem;
+ (BOOL)callerIsRunningFromSystemContext;
+ (BOOL)hostingProcessIsCoreAnalytics;

@end
