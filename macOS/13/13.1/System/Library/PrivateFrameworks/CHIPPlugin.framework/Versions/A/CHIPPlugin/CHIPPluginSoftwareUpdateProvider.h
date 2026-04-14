@class NSObject;
@protocol OS_dispatch_queue, CHIPPluginSoftwareUpdateProviderDelegate;

@interface CHIPPluginSoftwareUpdateProvider : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (weak) id<CHIPPluginSoftwareUpdateProviderDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)notifyDelegateOfQueryImageWithPairing:(id)a0 requestParams:(id)a1 completionHandler:(id /* block */)a2;
- (void)notifyDelegateOfApplyUpdateWithPairing:(id)a0 requestParams:(id)a1 completionHandler:(id /* block */)a2;
- (void)notifyDelegateOfNotifyUpdateWithPairing:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;

@end
