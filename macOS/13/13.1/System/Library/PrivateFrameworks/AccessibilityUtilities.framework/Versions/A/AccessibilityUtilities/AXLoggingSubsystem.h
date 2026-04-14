@interface AXLoggingSubsystem : NSObject {
    BOOL _ignoreLogging;
}

@property (nonatomic) BOOL ignoreLogging;

+ (void)initialize;
+ (id)sharedInstance;
+ (id)identifier;
+ (double)threshold;
+ (id)subsystems;
+ (id)errorWithDescription:(id)a0;
+ (void)initializeSubsytem;
+ (id)_errorWithMessage:(id)a0 underlyingError:(id)a1;
+ (id)wrapError:(id)a0 description:(id)a1;
+ (BOOL)shouldIncludeBacktraceInLogs;
+ (BOOL)shouldIncludeFileLineAndFunctionInLogs;
+ (BOOL)shouldProcessMessageForLogs;
+ (int)defaultLogLevel;
+ (BOOL)willLog;
+ (BOOL)willLogInfo;
+ (BOOL)willLogDebug;

@end
