@class NSString, NSArray, NSFileHandle, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface COConditionTask : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *termination_sem;
@property (copy, nonatomic) NSString *launchPath;
@property (retain, nonatomic) NSArray *arguments;
@property (retain, nonatomic) NSMutableArray *taskFileHandleArray;
@property (retain, nonatomic) NSString *stdoutFname;
@property (retain, nonatomic) NSString *stderrFname;
@property (retain, nonatomic) NSString *stdinFname;
@property (retain, nonatomic) NSFileHandle *stdinFileHandle;
@property (retain, nonatomic) NSFileHandle *stdoutFileHandle;
@property (retain, nonatomic) NSFileHandle *stderrFileHandle;
@property (nonatomic) int processIdentifier;
@property (nonatomic) double executionTime;
@property (nonatomic) int endStatus;
@property BOOL running;
@property (nonatomic) BOOL slowTimeout;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;

- (id)description;
- (BOOL)resume;
- (void).cxx_destruct;
- (BOOL)start;
- (BOOL)suspend;
- (void)interrupt;
- (void)terminate;
- (void)stop;
- (id)initWithCommand:(id)a0 arguments:(id)a1;
- (void)waitForExitInformation:(int)a0;
- (BOOL)waitForTaskWithTimeout:(unsigned int)a0;
- (BOOL)launchTask:(id *)a0;
- (void)stopTask;
- (id)stdoutFromResults;
- (id)stderrFromResults;
- (int)signalRunningTask:(int)a0;

@end
