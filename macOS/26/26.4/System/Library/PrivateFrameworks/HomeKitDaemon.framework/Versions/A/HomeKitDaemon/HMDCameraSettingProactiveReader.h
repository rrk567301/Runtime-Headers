@class HMFMessage, NSUUID, NSSet, HMCameraStreamPreferences, NSString, HMDHAPAccessory, NSObject;
@protocol OS_dispatch_queue, HMMLogEventSubmitting, HMDCameraSettingProactiveReaderDelegate;

@interface HMDCameraSettingProactiveReader : HMFObject <HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSUUID *sessionUUID;
@property (weak) HMDHAPAccessory *accessory;
@property (readonly) NSSet *streamControlMessageHandlers;
@property (readonly) HMCameraStreamPreferences *streamPreferences;
@property (readonly) NSString *logIdentifier;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (retain) HMFMessage *pendingNegotiateMessage;
@property (weak) id<HMDCameraSettingProactiveReaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)_streamingStatusForResponse:(id)a0;

- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithWorkQueue:(id)a0 sessionUUID:(id)a1 accessory:(id)a2 message:(id)a3 streamControlMessageHandlers:(id)a4 streamPreferences:(id)a5 logIdentifier:(id)a6 logEventSubmitter:(id)a7;
- (id)_availableStreamControlMessageHandlersForReadResponses:(id)a0;
- (void)_callDidCompleteReadDelegateCallback;
- (void)_handleStreamStatusMultireadResponse:(id)a0;
- (id)_inUseStreamControlMessageHandlersForReadResponses:(id)a0;
- (BOOL)hasPendingNegotiateMessageForSessionWithUUID:(id)a0;
- (id)initWithWorkQueue:(id)a0 sessionUUID:(id)a1 accessory:(id)a2 message:(id)a3 streamControlMessageHandlers:(id)a4 streamPreferences:(id)a5 logIdentifier:(id)a6;
- (void)readSetting;

@end
