@interface TRIProcessInfo : NSObject

+ (BOOL)hostingProcessIsTriald;
+ (id)callerBundleId;
+ (BOOL)callerIsRunningFromSystemContext;
+ (BOOL)hostingProcessIsTrialdSystem;
+ (BOOL)hostingProcessIsSystemProcess;
+ (BOOL)hostingProcessIsCoreAnalytics;
+ (id)hostingProcessName;

@end
