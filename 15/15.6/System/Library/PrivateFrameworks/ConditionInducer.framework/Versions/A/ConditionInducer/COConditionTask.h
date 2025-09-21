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
@property char running;
@property (nonatomic) char slowTimeout;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;

- (id)description;
- (void).cxx_destruct;
- (char)resume;
- (char)start;
- (char)suspend;
- (void)interrupt;
- (void)stop;
- (void)terminate;
- (id)initWithCommand:(id)a0 arguments:(id)a1;
- (char)launchTask:(id *)a0;
- (int)signalRunningTask:(int)a0;
- (id)stderrFromResults;
- (id)stdoutFromResults;
- (void)stopTask;
- (void)waitForExitInformation:(int)a0;
- (char)waitForTaskWithTimeout:(unsigned int)a0;

@end
