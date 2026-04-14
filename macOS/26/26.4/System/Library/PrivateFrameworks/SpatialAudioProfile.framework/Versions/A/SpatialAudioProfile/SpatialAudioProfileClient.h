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
- (void)encodeWithCoder:(id)a0;
- (void)_interrupted;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isSystemContext;
- (void)_fetchSpatialAudioProfileRecordWithCompletion:(id /* block */)a0;
- (void)fetchSpatialAudioProfileRecordWithCompletion:(id /* block */)a0;

@end
