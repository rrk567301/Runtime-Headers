@class BWPipelineStage, BWNodeInput, NSString, NSMutableArray, BWNodeOutput, NSObject;
@protocol OS_dispatch_queue;

@interface BWNodeConnection : NSObject <BWNodeOutputConsumer> {
    BWNodeInput *_input;
    BWNodeOutput *_output;
    BWNodeInput *_bypassInput;
    BWPipelineStage *_pipelineStage;
    BWNodeConnection *_bypassConnection;
    BOOL _waitingForDeferredAttach;
    BOOL _waitingForDeferredResume;
    BOOL _waitingForDeferredResumeForEventsOnly;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _suspensionLock;
    _Atomic BOOL _suspended;
    _Atomic int _messageTypeToWaitForBeforeSuspension;
    BOOL _resuming;
    BOOL _bypassed;
    BOOL _messageCachingEnabled;
    BOOL _resumedForEventsOnly;
    NSMutableArray *_messagesToPropagate;
    _Atomic long long _allowedLiveConfigurationID;
    NSObject<OS_dispatch_queue> *_messageDispatchQueue;
}

@property (readonly) BWNodeInput *input;
@property (readonly) BWNodeOutput *output;
@property (readonly) BWPipelineStage *pipelineStage;
@property (readonly) NSObject<OS_dispatch_queue> *messageDispatchQueue;
@property (readonly) BOOL bypassed;
@property (readonly) BOOL suspended;
@property (nonatomic) BOOL allowsSuspensionWithoutPipelineStage;
@property (nonatomic) BOOL wantsMessageCachingWhileSuspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)initWithOutput:(id)a0 input:(id)a1 pipelineStage:(id)a2;
- (void)consumeMessage:(id)a0 fromOutput:(id)a1;
- (void)connectBypassInput;
- (BOOL)deferredAttach;
- (BOOL)detach;
- (void)attachNow;
- (BOOL)attach;
- (void)dealloc;
- (BOOL)resolveCommonBufferFormat;
- (void)resumeForEventsOnly:(BOOL)a0;
- (void)discardMessagesBeforeLiveConfigurationID:(long long)a0;
- (void)suspendWithMessageCachingAllowed:(BOOL)a0 overrideCachingEnabled:(BOOL)a1 bypassed:(BOOL)a2 afterHandlingMessageWithType:(int)a3;

@end
