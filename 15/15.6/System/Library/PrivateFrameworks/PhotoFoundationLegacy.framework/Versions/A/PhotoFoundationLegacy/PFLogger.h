@class NSString, NSDictionary, NSSet, NSArray, NSObject;
@protocol OS_dispatch_queue, PFLoggerBackend;

@interface PFLogger : NSObject

@property (retain) NSString *facilityPrefix;
@property (retain) NSDictionary *options;
@property (retain) NSObject<PFLoggerBackend> *backend;
@property (retain) NSObject<OS_dispatch_queue> *backendAccessSerializationQueue;
@property char backendAllowsConcurrentAccess;
@property (retain) NSObject<OS_dispatch_queue> *recordedSubsystemsQueue;
@property (retain) NSSet *recordedSubsystems;
@property int logLevel;
@property char shouldLogToCrashReporter;
@property (retain) NSArray *tracedSubsystems;
@property (retain) NSArray *debuggedSubsystems;

+ (void)initialize;
+ (id)defaultLogger;
+ (int)defaultLoggerLogLevel;
+ (void)logFromCodeLocation:(struct { char *x0; char *x1; char *x2; char *x3; void *x4; })a0 subsystem:(id)a1 level:(int)a2 format:(id)a3;
+ (id)backendsFromUserDefaultsWithLogLevel:(int)a0;
+ (id)createDefaultLogger;
+ (char)enabledForSubsystem:(id)a0 level:(int)a1;
+ (void)flushDefaultLoggerIfPresent;
+ (void)logCrashReporterMessage:(id)a0 fromCodeLocation:(struct { char *x0; char *x1; char *x2; char *x3; void *x4; })a1;
+ (void)logCrashReporterMessageFromCodeLocation:(struct { char *x0; char *x1; char *x2; char *x3; void *x4; })a0 format:(id)a1;
+ (void)logFromCodeLocation:(struct { char *x0; char *x1; char *x2; char *x3; void *x4; })a0 subsystem:(id)a1 level:(int)a2 format:(id)a3 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a4;
+ (id)loggerWithBackend:(id)a0 logLevel:(int)a1 options:(id)a2;
+ (void)recreateDefaultLogger;
+ (void)setDefaultLogger:(id)a0;
+ (void)setupCrashReporter;
+ (char)traceEnabledForSubsystem:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)flush;
- (void)logFromCodeLocation:(struct { char *x0; char *x1; char *x2; char *x3; void *x4; })a0 subsystem:(id)a1 level:(int)a2 format:(id)a3;
- (char)enabledForSubsystem:(id)a0 subsystems:(id)a1;
- (void)_recordSubsystem:(id)a0;
- (id)initWithBackend:(id)a0 logLevel:(int)a1 options:(id)a2;
- (void)logFromCodeLocation:(struct { char *x0; char *x1; char *x2; char *x3; void *x4; })a0 subsystem:(id)a1 level:(int)a2 format:(id)a3 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a4;
- (void)processOptions;

@end
