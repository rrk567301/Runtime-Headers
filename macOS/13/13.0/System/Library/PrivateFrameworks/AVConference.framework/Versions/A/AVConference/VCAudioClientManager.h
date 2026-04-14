@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCAudioClientManager : NSObject {
    NSMutableDictionary *_clientList;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)registerBlocksForService;
- (id)getAudioClientWithProcessId:(id)a0 create:(BOOL)a1;
- (id)handleRegisterMutedTalkerNotificationForAudioClient:(id)a0 error:(id *)a1;
- (id)handleUnregisterMutedTalkerNotificationForAudioClient:(id)a0 error:(id *)a1;
- (void)handleMutedTalkerNotification:(unsigned int)a0;
- (void)registerForMutedTalkerNotfications;
- (void)unregisterFromMutedTalkerNotfications;
- (id)handleNewClientWithXPCArguments:(id)a0 error:(id *)a1;
- (id)handleDisconnectWithXPCArguments:(id)a0;
- (void)unregisterBlocksForService;
- (void)secureMicrophoneEngagedNotification;

@end
