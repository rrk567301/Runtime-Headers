@interface WFWritingToolsAvailabilityResource : WFResource

+ (BOOL)mustBeAvailableForDisplay;

- (id)initWithDefinition:(id)a0;
- (id)actionsUnavailableError;
- (void)refreshAvailability;

@end
