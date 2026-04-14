@class NSString;

@interface WorkflowKit.WFImagePlaygroundAvailabilityResource : WFAccessResource

@property (nonatomic, readonly) NSString *name;

+ (BOOL)mustBeAvailableForDisplay;

- (id)init;
- (id)initWithDefinition:(id)a0;
- (id)localizedErrorReasonForStatus:(unsigned long long)a0;
- (id)initWithDefinition:(id)a0 enableDistributedNotifications:(BOOL)a1;
- (void)refreshAvailability;

@end
