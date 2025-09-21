@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCRemoteVideoManager : NSObject <VCRemoteVideoManagerDelegate> {
    NSMutableDictionary *_queuesForStreamTokenDict;
    NSMutableDictionary *_stateCacheForStreamTokenDict;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)cleanupDictionaries;
- (void)connectionDidChangeWithLocalInterfaceType:(id)a0 remoteInterfaceType:(id)a1 streamToken:(long long)a2;
- (id)contextIdForStreamTokenWithArguments:(id)a0 error:(id *)a1;
- (void)dispatchNetworkQualityDidDegrade:(char)a0 isLocalNetworkQualityDegraded:(char)a1 streamToken:(long long)a2;
- (void)dispatchedConnectionDidChangeWithLocalInterfaceType:(id)a0 remoteInterfaceType:(id)a1 streamToken:(long long)a2;
- (void)dispatchedNotifyCachedStateForStreamToken:(id)a0;
- (void)dispatchedRemoteMediaDidStall:(char)a0 streamToken:(long long)a1;
- (void)dispatchedRemoteVideoDidDegrade:(char)a0 streamToken:(long long)a1;
- (void)dispatchedRemoteVideoDidPause:(char)a0 streamToken:(long long)a1;
- (void)dispatchedRemoteVideoDidSuspend:(char)a0 streamToken:(long long)a1;
- (char)doesQueueExistForStreamToken:(id)a0;
- (void)networkQualityDidDegrade:(char)a0 isLocalNetworkQualityDegraded:(char)a1 streamToken:(long long)a2;
- (id)newQueueForStreamToken:(long long)a0 videoMode:(int)a1;
- (id)newQueueForStreamToken:(long long)a0 videoMode:(int)a1 imageQueueProtected:(char)a2;
- (void)notifyCachedStateForStreamToken:(id)a0;
- (void)registerBlocksForService;
- (void)releaseQueueForStreamToken:(long long)a0;
- (void)remoteMediaDidStall:(char)a0 streamToken:(long long)a1;
- (void)remoteVideoDidDegrade:(char)a0 streamToken:(long long)a1;
- (void)remoteVideoDidPause:(char)a0 streamToken:(long long)a1;
- (void)remoteVideoDidSuspend:(char)a0 streamToken:(long long)a1;
- (void)resetDidReceiveFirstFrameForStreamToken:(long long)a0;
- (char)setLayerBoundsForStreamTokenWithArguments:(id)a0 error:(id *)a1;
- (char)setTransformForRemoteVideoOrientationEnabledWithArguments:(id)a0 error:(id *)a1;
- (unsigned int)slotForStreamToken:(long long)a0 videoMode:(int)a1;

@end
