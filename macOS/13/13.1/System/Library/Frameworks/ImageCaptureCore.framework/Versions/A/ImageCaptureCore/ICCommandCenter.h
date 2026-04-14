@class NSMutableDictionary, NSXPCConnection, NSLock, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ICCommandCenter : NSObject {
    int _selfPID;
    NSMutableDictionary *_pendingCommands;
    BOOL _openSession;
    NSXPCConnection *_connection;
    unsigned int _connectionAttempts;
    NSLock *_connectionLock;
    NSObject<OS_dispatch_queue> *_serialCommandQueue;
    NSMutableDictionary *_replyDict;
    NSObject<OS_dispatch_semaphore> *_msgSem;
}

+ (id)defaultCenter;

- (void)dealloc;
- (id)init;
- (void)setConnection:(id)a0;
- (void)resetConnection;
- (id)getConnection;
- (void)requestOpenSessionWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)icddConnectionSetup:(id)a0;
- (void)messageFromClient:(id)a0 withReply:(id /* block */)a1;
- (void)messageFromDevice:(id)a0 withReply:(id /* block */)a1;
- (void)messageFromICDD:(id)a0 withReply:(id /* block */)a1;
- (void)setDeviceModuleEndpointForDeviceRef:(id)a0 endpoint:(id)a1 deviceID:(id)a2;
- (void)addSelectorToInterface:(id)a0 selectorString:(id)a1 origin:(BOOL)a2;
- (void)handleImageCaptureEventNotification:(id)a0 completion:(id /* block */)a1;
- (void)requestScannerOpenSessionWithOptions:(id)a0 completion:(id /* block */)a1;
- (id)makeCommand:(id)a0;
- (void)loadDeviceModuleForDeviceRef:(id)a0 completion:(id /* block */)a1;
- (void)sendCommand:(id)a0 from:(id)a1 completion:(id /* block */)a2;
- (void)runBlock:(id /* block */)a0;
- (void)releaseConnection;
- (void)lockConnection;
- (void)unlockConnection;

@end
