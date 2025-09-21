@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SpatialAudioClient : NSObject <NSSecureCoding> {
    char _invalidateCalled;
    char _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_invalidated;
- (id)_ensureXPCStarted;
- (void)_interrupted;
- (char)isSystemContext;
- (void)_fetchSpatialSoundProfileRecordWithCompletion:(id /* block */)a0;
- (void)fetchSpatialSoundProfileRecordWithCompletion:(id /* block */)a0;

@end
