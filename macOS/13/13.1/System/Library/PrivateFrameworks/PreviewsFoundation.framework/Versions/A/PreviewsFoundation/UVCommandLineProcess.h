@class NSArray, NSTask, NSURL, NSDictionary;

@interface UVCommandLineProcess : NSObject {
    id /* block */ _terminationHandler;
}

@property (retain) NSTask *task;
@property (copy) NSURL *executableURL;
@property (copy) NSArray *arguments;
@property (copy) NSDictionary *environment;
@property (copy) NSURL *currentDirectoryURL;
@property (retain) id standardInput;
@property (retain) id standardOutput;
@property (retain) id standardError;
@property (readonly) int processIdentifier;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly) int terminationStatus;
@property (readonly) long long terminationReason;
@property (copy) id /* block */ terminationHandler;
@property long long qualityOfService;

- (void)dealloc;
- (id)init;
- (BOOL)resume;
- (void).cxx_destruct;
- (BOOL)suspend;
- (BOOL)launchAndReturnError:(out id *)a0;
- (void)interrupt;
- (void)terminate;
- (id)initWithTask:(id)a0;
- (id)initNoTask;

@end
