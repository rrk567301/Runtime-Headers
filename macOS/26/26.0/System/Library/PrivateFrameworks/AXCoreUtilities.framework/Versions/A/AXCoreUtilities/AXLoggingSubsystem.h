@interface AXLoggingSubsystem : NSObject {
    BOOL _ignoreLogging;
}

@property (nonatomic) BOOL ignoreLogging;

+ (id)sharedInstance;
+ (double)threshold;
+ (id)identifier;
+ (id)subsystems;
+ (void)initialize;
+ (id)errorWithDescription:(id)a0;
+ (int)defaultLogLevel;
+ (BOOL)willLog;
+ (id)_errorWithMessage:(id)a0 underlyingError:(id)a1;
+ (void)initializeSubsytem;
+ (BOOL)shouldIncludeBacktraceInLogs;
+ (BOOL)shouldIncludeFileLineAndFunctionInLogs;
+ (BOOL)shouldProcessMessageForLogs;
+ (BOOL)willLogDebug;
+ (BOOL)willLogInfo;
+ (id)wrapError:(id)a0 description:(id)a1;

@end
