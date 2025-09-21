@interface WorkflowKit.WFPhotosMemoryCreationAvailabilityResource : WFResource

+ (BOOL)mustBeAvailableForDisplay;

- (id)initWithDefinition:(id)a0;
- (id)init;
- (void)refreshAvailability;

@end
