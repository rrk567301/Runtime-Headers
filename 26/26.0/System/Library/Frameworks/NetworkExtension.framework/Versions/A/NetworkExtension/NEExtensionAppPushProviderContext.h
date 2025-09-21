@class NSString;

@interface NEExtensionAppPushProviderContext : NEExtensionProviderContext <NEExtensionAppPushProviderProtocol, NEExtensionAppPushProviderHostProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)dealloc;
- (void)setProviderConfiguration:(id)a0;
- (id)extensionPoint;
- (void)unmatchEthernet;
- (void)reportIncomingCall:(id)a0;
- (void)reportPushToTalkMessage:(id)a0;
- (void)sendOutgoingCallMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendTimerEvent;
- (void)startConnectionWithProviderConfig:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopWithReason:(int)a0 completionHandler:(id /* block */)a1;

@end
