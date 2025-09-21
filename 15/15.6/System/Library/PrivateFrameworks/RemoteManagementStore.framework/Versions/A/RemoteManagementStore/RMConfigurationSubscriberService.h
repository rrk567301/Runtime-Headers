@class NSArray;

@interface RMConfigurationSubscriberService : RMConfigurationSubscriberClient <RMConfigurationSubscriberXPCService>

@property (readonly, nonatomic) NSArray *configurationTypes;
@property (readonly, nonatomic) NSArray *statusKeys;
@property (readonly, nonatomic) char hasServiceEntitlement;

+ (id)newConfigurationSubscriberServiceWithXPCConnection:(id)a0;

- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0;
- (void)fetchThenApplyConfigurationsWithScope:(long long)a0 completionHandler:(id /* block */)a1;
- (void)fetchThenUpdateConfigurationUIsWithScope:(long long)a0 completionHandler:(id /* block */)a1;
- (void)publishStatusKeys:(id)a0 storeIdentifier:(id)a1 scope:(long long)a2 completionHandler:(id /* block */)a3;

@end
