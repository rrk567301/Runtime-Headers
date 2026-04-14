@interface TRIProcessInfo : NSObject

+ (id)hostingProcessName;
+ (BOOL)hostingProcessIsTriald;
+ (id)callerBundleId;
+ (BOOL)hostingProcessIsCoreAnalytics;
+ (BOOL)callerIsRunningFromSystemContext;
+ (BOOL)hostingProcessIsTrialdSystem;
+ (BOOL)hostingProcessIsSystemProcess;

@end
