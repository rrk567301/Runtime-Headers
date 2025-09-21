@interface AXLoggingSubsystem : NSObject {
    char _ignoreLogging;
}

@property (nonatomic) char ignoreLogging;

+ (void)initialize;
+ (id)identifier;
+ (id)sharedInstance;
+ (double)threshold;
+ (id)subsystems;
+ (int)defaultLogLevel;
+ (char)willLog;
+ (id)_errorWithMessage:(id)a0 underlyingError:(id)a1;
+ (id)errorWithDescription:(id)a0;
+ (void)initializeSubsytem;
+ (char)shouldIncludeBacktraceInLogs;
+ (char)shouldIncludeFileLineAndFunctionInLogs;
+ (char)shouldProcessMessageForLogs;
+ (char)willLogDebug;
+ (char)willLogInfo;
+ (id)wrapError:(id)a0 description:(id)a1;

@end
