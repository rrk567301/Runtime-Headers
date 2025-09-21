@class NSObject, NSMutableDictionary, NSFileHandle;
@protocol OS_dispatch_queue;

@interface KHDBLogger : NSObject {
    NSFileHandle *_fileHandle;
    NSMutableDictionary *_config;
    NSObject<OS_dispatch_queue> *_logDispatchQueue;
    char _useDispatchQueue;
}

@property (nonatomic) int logReportLevel;
@property (nonatomic) int logFormat;

+ (void)initialize;
+ (char)isActive;
+ (void)setActive:(char)a0;
+ (id)sharedLogger;
+ (id)_configFilePath;
+ (void)runUnitTests;

- (void)dealloc;
- (id)init;
- (char)_checkConfigKey:(id)a0;
- (char)_checkConfigPaths:(id)a0;
- (void)_makeLogFileHandle:(id)a0;
- (id)_prefixForLogType:(int)a0;
- (void)_printToConsole:(id)a0;
- (void)_printToFile:(id)a0;
- (void)_registerGlobalState;
- (void)_report:(int)a0 file:(const char *)a1 function:(const char *)a2 lineNumber:(int)a3 message:(id)a4 key:(id)a5 theObject:(id)a6;
- (id)_timeStamp;
- (id)_timestampString;
- (void)report:(int)a0 file:(const char *)a1 function:(const char *)a2 lineNumber:(int)a3 message:(id)a4 key:(id)a5 theObject:(id)a6;

@end
