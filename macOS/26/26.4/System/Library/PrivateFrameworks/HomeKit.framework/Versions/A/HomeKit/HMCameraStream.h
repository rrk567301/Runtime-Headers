@class NSUUID, NSString, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface HMCameraStream : HMCameraSource <HMFMessageReceiver>

@property (readonly, copy) NSUUID *sessionUUID;
@property unsigned long long internalAudioStreamSetting;
@property (copy) NSNumber *internalAudioVolume;
@property (readonly, nonatomic) NSNumber *audioVolume;
@property (readonly) long long audioDownlinkToken;
@property (readonly) long long audioUplinkToken;
@property (readonly) long long streamToken;
@property (readonly, nonatomic) unsigned long long audioStreamSetting;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)init;
- (void)dealloc;
- (void)_handleAudioStreamSettingUpdate:(unsigned long long)a0 withError:(id)a1 context:(id)a2 completionHandler:(id /* block */)a3;
- (void)_issueUpdateAudioStreamSettingRequest:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_updateAudioStreamSetting:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_updateAudioVolume:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateMaximumVideoResolutionQuality:(long long)a0 completionHandler:(id /* block */)a1;
- (id)initWithProfileUniqueIdentifier:(id)a0 slotIdentifier:(id)a1 aspectRatio:(double)a2 sessionUUID:(id)a3 audioStreamSetting:(unsigned long long)a4 audioDownlinkToken:(long long)a5 audioUplinkToken:(long long)a6 streamToken:(long long)a7;
- (void)setAudioStreamSetting:(unsigned long long)a0;
- (void)updateAudioStreamSetting:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)updateAudioVolume:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateMaximumVideoResolutionQuality:(long long)a0 completionHandler:(id /* block */)a1;

@end
