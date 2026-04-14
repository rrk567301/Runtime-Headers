@class NSString, MPCPlaybackEngineEventStream, MSVBlockGuard;

@interface _MPCPlaybackEngineEventStreamDeferralAssertion : NSObject <MPCPlaybackEngineEventStreamDeferralAssertion> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, weak, nonatomic) MPCPlaybackEngineEventStream *eventStream;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) BOOL invalidated;
@property (readonly, nonatomic) MSVBlockGuard *timeoutGuard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithEventStream:(id)a0 reason:(id)a1 timeout:(double)a2;

@end
