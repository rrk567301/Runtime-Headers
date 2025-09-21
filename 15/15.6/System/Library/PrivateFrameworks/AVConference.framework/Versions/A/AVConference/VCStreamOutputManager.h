@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCStreamOutputManager : NSObject <VCRemoteVideoManagerDelegate> {
    NSMutableDictionary *_streamOutputSourceForStreamToken;
    NSMutableDictionary *_streamOutputs;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;
    char _useFigRemoteQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)allocDispatchedStreamOutputWithStreamToken:(long long)a0 clientPid:(int)a1 options:(id)a2 errorCode:(int *)a3;
- (id)allocStreamOutputWithStreamToken:(long long)a0 clientPid:(int)a1 options:(id)a2 errorCode:(int *)a3;
- (void)cleanupStreamOutput:(id)a0;
- (void)connectionDidChangeWithLocalInterfaceType:(id)a0 remoteInterfaceType:(id)a1 streamToken:(long long)a2;
- (void)deregisterBlocksForService;
- (void)deregisterStreamOutputSourceForStreamToken:(long long)a0;
- (void)dispatchedCleanupStreamOutput:(id)a0;
- (void)dispatchedDeregisterStreamOutputSourceForStreamToken:(long long)a0;
- (void)dispatchedRegisterStreamOutputSource:(id)a0 forStreamToken:(long long)a1;
- (void)dispatchedRemoteMediaDidStall:(char)a0 streamToken:(long long)a1;
- (void)dispatchedRemoteVideoDidDegrade:(char)a0 streamToken:(long long)a1;
- (void)dispatchedRemoteVideoDidPause:(char)a0 streamToken:(long long)a1;
- (void)dispatchedRemoteVideoDidSuspend:(char)a0 streamToken:(long long)a1;
- (void)networkQualityDidDegrade:(char)a0 isLocalNetworkQualityDegraded:(char)a1 streamToken:(long long)a2;
- (void)registerBlocksForService;
- (void)registerStreamOutputSource:(id)a0 forStreamToken:(long long)a1;
- (void)releaseQueueForStreamToken:(long long)a0;
- (void)remoteMediaDidStall:(char)a0 streamToken:(long long)a1;
- (void)remoteVideoDidDegrade:(char)a0 streamToken:(long long)a1;
- (void)remoteVideoDidPause:(char)a0 streamToken:(long long)a1;
- (void)remoteVideoDidSuspend:(char)a0 streamToken:(long long)a1;
- (id)serviceHandlerStreamOutputInitializeWithArguments:(id)a0 error:(id *)a1;
- (id)serviceHandlerStreamOutputNotifyCacheWithArguments:(id)a0 error:(id *)a1;
- (id)serviceHandlerStreamOutputTerminateWithArguments:(id)a0 error:(id *)a1;
- (char)sourceExistsForStreamToken:(long long)a0;

@end
