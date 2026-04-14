@interface TRIProcessInfo : NSObject

+ (BOOL)hostingProcessIsSystemProcess;
+ (BOOL)hostingProcessIsCoreAnalytics;
+ (id)callerBundleId;
+ (BOOL)hostingProcessIsTrialdSystem;
+ (id)hostingProcessName;
+ (BOOL)callerIsRunningFromSystemContext;
+ (BOOL)hostingProcessIsTriald;

@end
