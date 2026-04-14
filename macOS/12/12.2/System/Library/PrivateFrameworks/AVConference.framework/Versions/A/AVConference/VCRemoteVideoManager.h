@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCRemoteVideoManager : NSObject <VCRemoteVideoManagerDelegate> {
    NSMutableDictionary *_queuesForStreamTokenDict;
    NSMutableDictionary *_stateCacheForStreamTokenDict;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;
    NSMutableDictionary *_streamOutputs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (void)dealloc;
- (id)init;
- (void)registerBlocksForService;
- (void)remoteVideoDidDegrade:(BOOL)a0 streamToken:(long long)a1;
- (void)remoteVideoDidSuspend:(BOOL)a0 streamToken:(long long)a1;
- (id)newQueueForStreamToken:(long long)a0 videoMode:(int)a1;
- (void)releaseQueueForStreamToken:(long long)a0;
- (void)connectionDidChangeWithLocalInterfaceType:(id)a0 remoteInterfaceType:(id)a1 streamToken:(long long)a2;
- (void)remoteMediaDidStall:(BOOL)a0 streamToken:(long long)a1;
- (void)remoteScreenAttributesDidChange:(id)a0 streamToken:(long long)a1;
- (void)remoteVideoAttributesDidChange:(id)a0 streamToken:(long long)a1;
- (void)didReceiveFirstRemoteFrameForStreamToken:(long long)a0;
- (void)remoteVideoDidPause:(BOOL)a0 streamToken:(long long)a1;
- (void)cleanupDictionaries;
- (id)newQueueForStreamToken:(long long)a0 videoMode:(int)a1 imageQueueProtected:(BOOL)a2;
- (BOOL)queueExistsForStreamToken:(id)a0;
- (void)dispatchedDidReceiveFirstRemoteFrameForStreamToken:(long long)a0;
- (void)dispatchedRemoteScreenAttributesDidChange:(id)a0 streamToken:(long long)a1;
- (void)dispatchedRemoteVideoAttributesDidChange:(id)a0 streamToken:(long long)a1;
- (void)dispatchedRemoteVideoDidPause:(BOOL)a0 streamToken:(long long)a1;
- (void)dispatchedRemoteMediaDidStall:(BOOL)a0 streamToken:(long long)a1;
- (void)dispatchedRemoteVideoDidDegrade:(BOOL)a0 streamToken:(long long)a1;
- (void)dispatchedRemoteVideoDidSuspend:(BOOL)a0 streamToken:(long long)a1;
- (void)dispatchedConnectionDidChangeWithLocalInterfaceType:(id)a0 remoteInterfaceType:(id)a1 streamToken:(long long)a2;
- (id)getQueueForStreamToken:(unsigned int)a0 videoMode:(int)a1;
- (id)allocStreamOutputWithStreamToken:(long long)a0 clientPid:(int)a1 errorCode:(int *)a2;
- (void)cleanupStreamOutput:(id)a0;
- (void)notifyCachedStateForStreamToken:(id)a0;
- (unsigned int)slotForStreamToken:(long long)a0 videoMode:(int)a1;
- (id)serviceHandlerStreamOutputInitializeWithArguments:(id)a0 error:(id *)a1;
- (id)serviceHandlerStreamOutputTerminateWithArguments:(id)a0 error:(id *)a1;
- (id)serviceHandlerStreamOutputNotifyCacheWithArguments:(id)a0 error:(id *)a1;
- (id)serviceHandlerStreamOutputSetTimeSyncOffsetWithArguments:(id)a0 error:(id *)a1;
- (BOOL)doesQueueExistForStreamToken:(id)a0;

@end
