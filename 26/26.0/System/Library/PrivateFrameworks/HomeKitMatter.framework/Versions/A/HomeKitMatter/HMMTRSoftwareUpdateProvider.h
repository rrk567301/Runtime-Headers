@class HMMTRAccessoryServerBrowser, NSObject;
@protocol OS_dispatch_queue, HMMTRSoftwareUpdateProviderDelegate;

@interface HMMTRSoftwareUpdateProvider : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (weak, nonatomic) HMMTRAccessoryServerBrowser *browser;
@property (weak) id<HMMTRSoftwareUpdateProviderDelegate> delegate;

+ (id)logCategory;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (BOOL)canEstablishConnectionForNodeID:(id)a0;
- (void)notifyUpdateRequestedForNodeID:(id)a0 isUserTriggered:(BOOL)a1 isRetry:(BOOL)a2;
- (void)updateOTAProviderStateForNodeID:(id)a0 otaProviderState:(long long)a1;
- (id)initWithQueue:(id)a0 browser:(id)a1;
- (void)notifyDelegateCheckFirmwareUpdateSessionWithPairing:(id)a0 completionHandler:(id /* block */)a1;
- (void)notifyDelegateOfApplyUpdateWithPairing:(id)a0 requestParams:(id)a1 completionHandler:(id /* block */)a2;
- (void)notifyDelegateOfNotifyUpdateWithPairing:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)triggerQueryImageWithPairing:(id)a0 accessoryInitiated:(BOOL)a1 requestParams:(id)a2 completionHandler:(id /* block */)a3;

@end
