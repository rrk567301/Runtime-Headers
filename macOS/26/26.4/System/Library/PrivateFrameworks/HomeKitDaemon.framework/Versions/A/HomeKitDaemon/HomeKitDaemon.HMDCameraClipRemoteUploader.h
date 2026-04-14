@class NSUUID, NSDictionary;

@interface HomeKitDaemon.HMDCameraClipRemoteUploader : NSObject <HMDCameraClipUploading> {
    void /* unknown type, empty encoding */ clipUUID;
    void /* unknown type, empty encoding */ remoteSession;
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ logIdentifier;
    void /* unknown type, empty encoding */ queue;
}

@property (nonatomic, readonly) NSUUID *clipUUID;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, readonly) NSDictionary *stateDump;

- (void).cxx_destruct;
- (id)init;
- (void)finishWithCompletionHandler:(id /* block */)a0;
- (void)addSignificantEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)addVideoInitData:(id)a0 completionHandler:(id /* block */)a1;
- (void)addVideoSegmentData:(id)a0 date:(id)a1 timeOffsetWithinClip:(double)a2 duration:(double)a3 clipFinalizedBecauseMaxDurationExceeded:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)createClipWithCompletionHandler:(id /* block */)a0;

@end
