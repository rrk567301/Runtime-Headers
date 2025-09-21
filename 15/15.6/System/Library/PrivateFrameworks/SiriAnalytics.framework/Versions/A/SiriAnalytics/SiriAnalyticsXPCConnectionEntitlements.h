@class NSArray;

@interface SiriAnalyticsXPCConnectionEntitlements : NSObject {
    NSArray *_extendedEntitlements;
}

@property (readonly, nonatomic, getter=hasGenericEntitlement) char genericEntitlement;
@property (readonly, nonatomic, getter=hasRuntimeManagement) char runtimeManagement;
@property (readonly, nonatomic, getter=hasRuntimeIntrospection) char runtimeIntrospection;
@property (readonly, nonatomic, getter=hasUnifiedMessageStreamReadOnlyAccess) char unifiedMessageStreamReadOnlyAccess;
@property (readonly, nonatomic, getter=canPublishUnordered) char publishUnorderedMessages;
@property (readonly, nonatomic, getter=hasPluginState) char pluginState;
@property (readonly, nonatomic) NSArray *extendedEntitlements;

- (void).cxx_destruct;
- (id)initWithEntitlements:(id)a0;

@end
