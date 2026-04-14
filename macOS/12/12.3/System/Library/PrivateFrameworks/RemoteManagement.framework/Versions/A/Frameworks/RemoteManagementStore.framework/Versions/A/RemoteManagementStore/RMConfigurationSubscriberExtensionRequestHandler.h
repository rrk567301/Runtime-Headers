@class RMConfigurationSubscriberExtension, NSString;

@interface RMConfigurationSubscriberExtensionRequestHandler : NSObject <NSExtensionRequestHandling, RMConfigurationSubscriberExtensionRequestHandling>

@property (readonly, nonatomic) RMConfigurationSubscriberExtension *configurationSubscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)fetchThenApplyConfigurationsWithCompletionHandler:(id /* block */)a0;
- (id)initWithConfigurationSubscriber:(id)a0;

@end
