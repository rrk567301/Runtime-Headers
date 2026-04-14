@class NSString;

@interface WorkflowKit.WFPhotosMemoryCreationAvailabilityResource : WFAccessResource

@property (nonatomic, readonly) NSString *name;

+ (BOOL)mustBeAvailableForDisplay;

- (id)initWithDefinition:(id)a0;
- (id)init;
- (id)localizedErrorReasonForStatus:(unsigned long long)a0;
- (id)initWithDefinition:(id)a0 enableDistributedNotifications:(BOOL)a1;
- (void)refreshAvailability;

@end
