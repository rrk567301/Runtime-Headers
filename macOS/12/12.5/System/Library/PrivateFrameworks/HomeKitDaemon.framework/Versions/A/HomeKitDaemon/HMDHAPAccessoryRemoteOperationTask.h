@class NSString, HMDDevice, NSDictionary;

@interface HMDHAPAccessoryRemoteOperationTask : HMDHAPAccessoryTask

@property (readonly) NSString *remoteMessageName;
@property (readonly) HMDDevice *delegateDevice;
@property (readonly) NSDictionary *logEvents;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic) double remoteMessageTimeout;

- (void).cxx_destruct;
- (void)execute;
- (id)activityRequestEventName;
- (id)_remoteMessageFromAccessoryRequestMap:(id)a0;
- (BOOL)_buildMessageAccessoryListFromAccessoryRequestMap:(id)a0 accessoryList:(id)a1;
- (BOOL)_buildMessageAccessoryListFromRequests:(id)a0 accessoryList:(id)a1;
- (BOOL)_appendServiceListWithRequest:(id)a0 serviceList:(id)a1;
- (id)initWithContext:(id)a0 remoteMessageName:(id)a1 requests:(id)a2 delegateDevice:(id)a3 timeout:(double)a4 completion:(id /* block */)a5;
- (void)_receivedRemotelyChangedCharacteristicResponses:(id)a0 message:(id)a1;

@end
