@class NSString, NSDate;

@interface DDLogMessage : NSObject {
    int logLevel;
    int logFlag;
    int logContext;
    NSString *logMsg;
    NSDate *timestamp;
    char *file;
    char *function;
    int lineNumber;
    unsigned int machThreadID;
    char *queueLabel;
    NSString *threadName;
    id tag;
    int options;
}

- (id)fileName;
- (void)dealloc;
- (id)threadID;
- (void).cxx_destruct;
- (id)initWithLogMsg:(id)a0 level:(int)a1 flag:(int)a2 context:(int)a3 file:(const char *)a4 function:(const char *)a5 line:(int)a6 tag:(id)a7 options:(int)a8;
- (id)methodName;

@end
