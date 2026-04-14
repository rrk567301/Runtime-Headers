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

- (void)invalidate;
- (id)init;
- (void)_invalidated;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_interrupted;
- (id)_ensureXPCStarted;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isSystemContext;
- (void)_fetchSpatialAudioProfileRecordWithCompletion:(id /* block */)a0;
- (void)fetchSpatialAudioProfileRecordWithCompletion:(id /* block */)a0;

@end
