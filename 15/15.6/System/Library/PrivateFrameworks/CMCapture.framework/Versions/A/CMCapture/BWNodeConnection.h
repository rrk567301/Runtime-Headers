@class BWPipelineStage, BWNodeInput, NSString, BWNodeOutput, NSMutableArray;

@interface BWNodeConnection : NSObject <BWNodeOutputConsumer> {
    BWNodeInput *_input;
    BWNodeOutput *_output;
    BWNodeInput *_bypassInput;
    BWPipelineStage *_pipelineStage;
    BWNodeConnection *_bypassConnection;
    char _waitingForDeferredAttach;
    char _waitingForDeferredResume;
    char _waitingForDeferredResumeForEventsOnly;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _suspensionLock;
    char _suspended;
    char _resuming;
    char _bypassed;
    char _messageCachingEnabled;
    char _resumedForEventsOnly;
    NSMutableArray *_messagesToPropagate;
}

@property (readonly) BWNodeInput *input;
@property (readonly) BWNodeOutput *output;
@property (readonly) BWPipelineStage *pipelineStage;
@property (nonatomic) char wantsMessageCachingWhileSuspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (char)detach;
- (char)attach;
- (void)attachNow;
- (void)connectBypassInput;
- (void)consumeMessage:(id)a0 fromOutput:(id)a1;
- (char)deferredAttach;
- (id)initWithOutput:(id)a0 input:(id)a1 pipelineStage:(id)a2;
- (char)resolveCommonBufferFormat;
- (void)resumeForEventsOnly:(char)a0;
- (void)suspendWithMessageCachingAllowed:(char)a0 bypassed:(char)a1;

@end
