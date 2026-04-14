@class HMFTimer, NSString, HMFMessage, HMDCameraStreamSessionInfo, HMDXPCClientConnection;
@protocol HMDCameraStreamControlManagerProtocol;

@interface HMDCameraStreamManagerSession : HMFObject <HMFLogging>

@property (readonly) HMDCameraStreamSessionInfo *streamSessionInfo;
@property (readonly, copy) NSString *destinationID;
@property (retain) HMDXPCClientConnection *streamClientConnection;
@property (readonly) id<HMDCameraStreamControlManagerProtocol> streamControlManager;
@property (readonly) HMFTimer *streamSetupTimer;
@property (retain) HMFMessage *currentMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (BOOL)canStartWithError:(id *)a0;
- (id)initWithSessionInfo:(id)a0 destinationID:(id)a1 streamClientConnection:(id)a2 streamControlManager:(id)a3 setupWaitPeriod:(double)a4;
- (id)initWithSessionInfo:(id)a0 destinationID:(id)a1 streamClientConnection:(id)a2 streamControlManager:(id)a3 streamSetupTimer:(id)a4;

@end
