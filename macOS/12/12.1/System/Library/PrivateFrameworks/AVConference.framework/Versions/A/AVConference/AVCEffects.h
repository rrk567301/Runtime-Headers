@class AVConferenceXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface AVCEffects : NSObject {
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_avConferenceEffectsQueue;
    BOOL _isEffectsApplied;
    BOOL _isFaceMeshTrackingEnabled;
}

@property (nonatomic) id delegate;
@property (nonatomic) int mode;
@property (nonatomic) int effectType;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)registerBlocksForNotifications;
- (BOOL)setupRemoteReceiverQueueWithSenderQueue:(id)a0;
- (void)deregisterBlocksForNotifications;
- (void)avcVideoFrameDidRelease:(id)a0;
- (void)encodeProcessedVideoFrame:(id)a0;

@end
