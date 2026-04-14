@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCStreamOutputManager : NSObject <VCRemoteVideoManagerDelegate> {
    NSMutableDictionary *_streamOutputSourceForStreamToken;
    NSMutableDictionary *_streamOutputs;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;
    BOOL _useFigRemoteQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)registerBlocksForService;
- (void)deregisterBlocksForService;
- (void)didReceiveFirstRemoteFrameForStreamToken:(long long)a0;
- (void)remoteScreenAttributesDidChange:(id)a0 streamToken:(long long)a1;
- (void)remoteVideoAttributesDidChange:(id)a0 streamToken:(long long)a1;
- (void)remoteVideoDidPause:(BOOL)a0 streamToken:(long long)a1;
- (void)remoteMediaDidStall:(BOOL)a0 streamToken:(long long)a1;
- (void)remoteVideoDidDegrade:(BOOL)a0 streamToken:(long long)a1;
- (void)remoteVideoDidSuspend:(BOOL)a0 streamToken:(long long)a1;
- (void)releaseQueueForStreamToken:(long long)a0;
- (void)connectionDidChangeWithLocalInterfaceType:(id)a0 remoteInterfaceType:(id)a1 streamToken:(long long)a2;
- (void)dispatchedRemoteVideoDidPause:(BOOL)a0 streamToken:(long long)a1;
- (void)dispatchedRemoteMediaDidStall:(BOOL)a0 streamToken:(long long)a1;
- (void)dispatchedRemoteVideoDidDegrade:(BOOL)a0 streamToken:(long long)a1;
- (void)dispatchedRemoteVideoDidSuspend:(BOOL)a0 streamToken:(long long)a1;
- (void)cleanupStreamOutput:(id)a0;
- (void)dispatchedCleanupStreamOutput:(id)a0;
- (void)registerStreamOutputSource:(id)a0 forStreamToken:(long long)a1;
- (void)dispatchedRegisterStreamOutputSource:(id)a0 forStreamToken:(long long)a1;
- (void)deregisterStreamOutputSourceForStreamToken:(long long)a0;
- (void)dispatchedDeregisterStreamOutputSourceForStreamToken:(long long)a0;
- (id)allocStreamOutputWithStreamToken:(long long)a0 clientPid:(int)a1 options:(id)a2 errorCode:(int *)a3;
- (id)allocDispatchedStreamOutputWithStreamToken:(long long)a0 clientPid:(int)a1 options:(id)a2 errorCode:(int *)a3;
- (BOOL)sourceExistsForStreamToken:(long long)a0;
- (id)serviceHandlerStreamOutputInitializeWithArguments:(id)a0 error:(id *)a1;
- (id)serviceHandlerStreamOutputNotifyCacheWithArguments:(id)a0 error:(id *)a1;
- (id)serviceHandlerStreamOutputTerminateWithArguments:(id)a0 error:(id *)a1;
- (id)serviceHandlerStreamOutputSetTimeSyncOffsetWithArguments:(id)a0 error:(id *)a1;

@end
