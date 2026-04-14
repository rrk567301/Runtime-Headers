@class NSObject, NSFileHandle;
@protocol OS_os_log;

@interface _MLTLogger : NSObject

@property (retain) NSFileHandle *logFileHandle;
@property BOOL loggingToFile;
@property (retain) NSObject<OS_os_log> *loggingChannel;
@property BOOL logToTerminal;

- (void).cxx_destruct;
- (id)init:(id *)a0;
- (void)log:(id)a0;
- (id)init:(id)a0 error:(id *)a1;
- (id)initWithFile:(id)a0 error:(id *)a1;

@end
