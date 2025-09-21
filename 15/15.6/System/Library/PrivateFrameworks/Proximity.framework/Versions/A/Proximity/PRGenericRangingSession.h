@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, PRGenericRangingSessionDelegate, OS_os_log;

@interface PRGenericRangingSession : PRRangingDevice <PRRangingClientProtocol> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_os_log> *_logger;
}

@property (weak, nonatomic) id<PRGenericRangingSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (id)remoteObject;
- (void)handleInterruption;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (id)synchronousRemoteObject;
- (void)connectToDaemon;
- (void)didFailWithError:(id)a0;
- (void)handleInvalidation;
- (void)configureForP2PRanging:(id)a0 options:(id)a1;
- (void)didReceiveNewSolutions:(id)a0;
- (void)rangingRequestDidUpdateStatus:(unsigned long long)a0;
- (void)rangingServiceDidUpdateState:(unsigned long long)a0 cause:(long long)a1;
- (void)remoteDevice:(id)a0 didChangeState:(long long)a1;
- (char)startP2PRanging:(id)a0 error:(id *)a1;
- (char)stopP2PRanging:(id)a0 error:(id *)a1;

@end
