@class HLUSBDevice, HLCommandProcessor, NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface i1d3DriverComms : NSObject

@property (retain, nonatomic) HLUSBDevice *hlDevice;
@property (retain, nonatomic) HLCommandProcessor *processor;
@property (retain, nonatomic) NSMutableDictionary *responses;
@property (retain, nonatomic) NSMutableArray *currentExpectedKeys;
@property (retain, nonatomic) NSMutableDictionary *currentResult;
@property (retain, nonatomic) NSMutableSet *currentReceivedKeys;
@property (copy, nonatomic) id /* block */ currentBatchCompletion;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *currentBatchSemaphore;
@property (retain, nonatomic) NSObject *syncLock;
@property (nonatomic) int timeout;

- (void).cxx_destruct;
- (id)init;
- (void)executeCommandSequence;
- (void)resetBatchState;
- (void)addCommandWithKey:(id)a0 major:(unsigned char)a1 minor:(unsigned char)a2 payload:(id)a3 handle:(id /* block */)a4;
- (void)addToCurrentResultObject:(id)a0 forKey:(id)a1;
- (void)checkBatchCompletionForKey:(id)a0 withResponse:(id)a1;
- (id)runCommandBatchWithTimeout:(double)a0;
- (void)setupCommandBatchWithCompletion:(id /* block */)a0;
- (void)startCommandSequence;

@end
