@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SpatialAudioProfileClient : NSObject <NSSecureCoding> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)_ensureXPCStarted;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;
- (void)_invalidated;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_interrupted;
- (id)init;
- (BOOL)isSystemContext;
- (void)_fetchSpatialAudioProfileRecordWithCompletion:(id /* block */)a0;
- (void)fetchSpatialAudioProfileRecordWithCompletion:(id /* block */)a0;

@end
