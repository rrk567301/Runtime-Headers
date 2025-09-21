@class NSDictionary;

@interface WFLinkActionEntityParameterDefinition : WFLinkActionParameterDefinition

@property (readonly, nonatomic) NSDictionary *parameterDefinitions;
@property (readonly, nonatomic, getter=isUniqueEntity) BOOL uniqueEntity;

- (Class)parameterClass;
- (id)entityMetadata;
- (id)linkValueFromParameterState:(id)a0 action:(id)a1;
- (id)parameterStateFromLinkValue:(id)a0;
- (void)getLinkValueFromProcessedParameterValue:(id)a0 parameterState:(id)a1 permissionRequestor:(id)a2 runningFromToolKit:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)initWithParameterMetadata:(id)a0;
- (id)localizedTitleForLinkValue:(id)a0;

@end
