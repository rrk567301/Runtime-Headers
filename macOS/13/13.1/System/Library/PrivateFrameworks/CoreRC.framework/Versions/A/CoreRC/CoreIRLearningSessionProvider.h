@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CoreIRLearningSessionProvider : CoreIRLearningSession {
    unsigned long long _capturedCommands[128];
    unsigned long long _capturedCount;
    unsigned char _capturedProtocolID;
    unsigned char _capturedProtocolOptions;
    unsigned long long _captureDoneTicks;
    unsigned long long _captureStartTicks;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_captureNoSignalTimer;
    NSObject<OS_dispatch_source> *_captureIdleTimer;
    NSObject<OS_dispatch_source> *_captureDoneTimer;
    int _captureState;
}

@property (readonly, nonatomic) unsigned long long currentCommand;
@property (copy, nonatomic) NSMutableArray *mappings;

- (void)dealloc;
- (Class)classForCoder;
- (void)cleanup;
- (void)scheduleWithDispatchQueue:(id)a0;
- (void)updateProgress;
- (void)waitForIdle;
- (void)handleDone;
- (BOOL)startLearningCommand:(unsigned long long)a0;
- (void)endLearning;
- (void)enumerateMappingUsingBlock:(id /* block */)a0;
- (void)_removeMappingForCommand:(unsigned long long)a0;
- (void)disableAllTimers;
- (void)setCaptureState:(int)a0;
- (void)processIRCommand:(id)a0;
- (void)initTimer:(id *)a0 withTimeout:(unsigned long long)a1 handler:(id /* block */)a2;
- (int)initTimers;
- (void)captureIRCommand:(id)a0;
- (void)processCapturedPattern;
- (id)_newMappingWithProtocolID:(unsigned char)a0 options:(unsigned char)a1 commandToMap:(unsigned long long)a2 commands:(unsigned long long *)a3 commandCount:(unsigned long long)a4 repeats:(unsigned long long *)a5 repeatCount:(unsigned long long)a6;
- (BOOL)_addMapping:(id)a0;
- (BOOL)addMappingWithProtocolID:(unsigned char)a0 options:(unsigned char)a1 commandToMap:(unsigned long long)a2 commands:(unsigned long long *)a3 commandCount:(unsigned long long)a4 repeats:(unsigned long long *)a5 repeatCount:(unsigned long long)a6;
- (unsigned long long)_findDuplicateIRCommand:(id)a0 forCommand:(unsigned long long)a1 device:(id *)a2;
- (void)handleNoSignal;
- (void)handleIdle;

@end
