@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface NDOManager : NSObject <NDOCoverageCentralVCManager> {
    NSObject<OS_dispatch_queue> *workingQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)postCAEventFor:(id)a0 eventDict:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)defaultDevice;
- (id)agentConnection;
- (id)pairedBTDevices;
- (void)_getDeviceListForLocalDevices:(id)a0 sessionID:(id)a1 params:(id)a2 completionBlock:(id /* block */)a3;
- (void)webURLOverride:(id /* block */)a0;
- (void)appSupportDictionaryWithReply:(id /* block */)a0;
- (void)appleAccountAddedWithReply:(id /* block */)a0;
- (void)apsSupportedOverride:(id /* block */)a0;
- (char)checkIsAvailableInStore:(id)a0;
- (void)clearAllUserInitiatedFollowUpDismissalsWithReply:(id /* block */)a0;
- (void)clearUserInitiatedFollowUpDismissalForSerialNumber:(id)a0 withReply:(id /* block */)a1;
- (id)clientConfiguration;
- (void)dismissFollowUpForSerialNumber:(id)a0 completion:(id /* block */)a1;
- (void)dismissFollowUps:(id)a0 completion:(id /* block */)a1;
- (void)dismissNotificationForSerialNumber:(id)a0 completion:(id /* block */)a1;
- (void)getAllFUPEligibleDeviceInfosUsingPolicy:(unsigned long long)a0 updateFollowUps:(char)a1 withReply:(id /* block */)a2;
- (void)getAmsPropertiesForContext:(id)a0 withReply:(id /* block */)a1;
- (void)getBTDeviceInfosUsingPolicy:(unsigned long long)a0 updateFollowUps:(char)a1 withReply:(id /* block */)a2;
- (void)getBTPioneerDeviceInfosUsingPolicy:(unsigned long long)a0 updateFollowUps:(char)a1 withReply:(id /* block */)a2;
- (void)getCoverageInfoForSerialNumber:(id)a0 usingPolicy:(unsigned long long)a1 withReply:(id /* block */)a2;
- (void)getDecodedParamsForPath:(id)a0 withReply:(id /* block */)a1;
- (id)getDefaultDeviceInfoUsingForceCachedPolicy;
- (void)getDefaultDeviceInfoUsingPolicy:(unsigned long long)a0 withReply:(id /* block */)a1;
- (void)getDeviceInfoForSerialNumber:(id)a0 usingPolicy:(unsigned long long)a1 sessionID:(id)a2 params:(id)a3 andForcePostFollowup:(char)a4 withReply:(id /* block */)a5;
- (void)getDeviceInfoForSerialNumber:(id)a0 usingPolicy:(unsigned long long)a1 withReply:(id /* block */)a2;
- (id)getDeviceInfoUsingForceCachedPolicyForSerialNumber:(id)a0;
- (void)getDeviceListForLocalDevices:(id)a0 sessionID:(id)a1 completionBlock:(id /* block */)a2;
- (void)getDeviceListForLocalDevices:(id)a0 sessionID:(id)a1 policy:(unsigned long long)a2 params:(id)a3 salesReplyOnly:(char)a4 salesInfoReply:(id /* block */)a5 deviceInfoReply:(id /* block */)a6 completionBlock:(id /* block */)a7;
- (void)getLocalDeviceListWithReply:(id /* block */)a0;
- (void)getLocalDeviceWarrantyForSerialNumber:(id)a0 withReply:(id /* block */)a1;
- (void)getPrimaryFUPEligibleDeviceInfosUsingPolicy:(unsigned long long)a0 updateFollowUps:(char)a1 withReply:(id /* block */)a2;
- (void)getRemoteDeviceListWithReply:(id /* block */)a0;
- (void)getRemoteDeviceWarrantyForSerialNumber:(id)a0 withAdditionalHeaders:(id)a1 withReply:(id /* block */)a2;
- (void)getWarrantyUsingPolicy:(unsigned long long)a0 withReply:(id /* block */)a1;
- (void)handleInternalCommand:(id)a0 withReply:(id /* block */)a1;
- (char)isAPSSupportedOverrideWithServerValue:(char)a0;
- (id)payloadDictionaryForDeviceInfo:(id)a0 atIndex:(long long)a1;
- (id)payloadFrom:(id)a0 atIndex:(long long)a1 device:(id)a2;
- (void)removePromoSectionWithHashValue:(long long)a0 andAckData:(id)a1;
- (void)scheduleOutreachAfter:(double)a0 withReply:(id /* block */)a1;
- (void)storeUserInitiatedFollowUpDismissalForSerialNumber:(id)a0 withReply:(id /* block */)a1;
- (void)ulWebURLOverride:(id /* block */)a0;

@end
