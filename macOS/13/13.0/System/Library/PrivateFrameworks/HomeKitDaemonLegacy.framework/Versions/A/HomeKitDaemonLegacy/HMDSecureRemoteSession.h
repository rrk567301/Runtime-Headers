@class HMDAccountRegistry, NSString, HMDDevice, HMDRemoteDeviceMonitor, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, HMFMessageTransportDelegate;

@interface HMDSecureRemoteSession : HMFMessageTransport <HMDSecureRemoteStreamDelegate, HMFLogging, HMFTimerDelegate, HMDSecureRemoteSession>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) HMDRemoteDeviceMonitor *deviceMonitor;
@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry;
@property (nonatomic) unsigned long long maximumRemoteStreams;
@property (readonly, nonatomic) NSMutableArray *pendingMessages;
@property (readonly, nonatomic) NSMutableArray *clientStreams;
@property (readonly, nonatomic) NSMutableArray *serverStreams;
@property (nonatomic) long long state;
@property (nonatomic, getter=isReachable) BOOL reachable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HMDDevice *device;
@property (weak) id<HMFMessageTransportDelegate> delegate;

+ (id)logCategory;
+ (BOOL)isSecureRemoteSessionMessage:(id)a0;

- (void)dealloc;
- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)_closeWithError:(id)a0;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (void)messageTransport:(id)a0 didReceiveMessage:(id)a1;
- (id)dumpState;
- (void)secureRemoteStream:(id)a0 receivedRequestToSendMessage:(id)a1;
- (void)secureRemoteStreamIsIdle:(id)a0;
- (void)secureRemoteStream:(id)a0 didCloseWithError:(id)a1;
- (void)receivedSecureMessage:(id)a0 fromDevice:(id)a1 fromTransport:(id)a2;
- (void)_queueMessage:(id)a0;
- (id)_dequeMessage;
- (void)_handleSecureClientMessage:(id)a0 fromDevice:(id)a1 transport:(id)a2;
- (void)_handleSecureServerMessage:(id)a0 fromDevice:(id)a1 transport:(id)a2;
- (void)_handleStreamInvalidationMessage:(id)a0;
- (id)_clientStreamWithIdentiifer:(id)a0;
- (id)_clientStreamForMessage:(id)a0;
- (id)_serverStreamWithIdentifier:(id)a0;
- (void)_openClientStreamWithCompletionHandler:(id /* block */)a0;
- (void)_closeClientStream:(id)a0 error:(id)a1;
- (void)_openServerStreamWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_closeServerStream:(id)a0 error:(id)a1;
- (void)handleDeviceIsReachable:(id)a0;
- (void)handleDeviceIsNotReachable:(id)a0;
- (id)initWithDevice:(id)a0 deviceMonitor:(id)a1 accountRegistry:(id)a2;

@end
