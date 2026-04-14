@interface TRIProcessInfo : NSObject

+ (BOOL)hostingProcessIsSystemProcess;
+ (BOOL)hostingProcessIsTriald;
+ (id)hostingProcessName;
+ (BOOL)callerIsRunningFromSystemContext;
+ (id)callerBundleId;
+ (BOOL)hostingProcessIsCoreAnalytics;
+ (BOOL)hostingProcessIsTrialdSystem;

@end
