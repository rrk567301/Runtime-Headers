@interface SiriAnalyticsXPCConnectionEntitlements : NSObject

@property (readonly, nonatomic, getter=hasGenericEntitlement) BOOL genericEntitlement;
@property (readonly, nonatomic, getter=hasRuntimeManagement) BOOL runtimeManagement;
@property (readonly, nonatomic, getter=hasUnifiedMessageStreamReadOnlyAccess) BOOL unifiedMessageStreamReadOnlyAccess;

- (id)initWithEntitlements:(id)a0;

@end
