@class NSString, LNActionMetadata;

@interface WFLinkActionUnionParameterDefinition : WFLinkActionParameterDefinition

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) LNActionMetadata *actionMetadata;

- (void).cxx_destruct;
- (id)subtypes;
- (Class)parameterClass;
- (id)parameterMetadataForIdentifier:(id)a0;
- (id)linkValueFromParameterState:(id)a0 action:(id)a1;
- (id)parameterStateFromLinkValue:(id)a0;
- (Class)contentItemClassFromValueType:(id)a0 metadata:(id)a1;
- (void)getLinkValueFromProcessedParameterValue:(id)a0 parameterState:(id)a1 permissionRequestor:(id)a2 runningFromToolKit:(BOOL)a3 action:(id)a4 parameterKey:(id)a5 completionHandler:(id /* block */)a6;
- (id)initWithValueType:(id)a0 parameterMetadata:(id)a1;
- (id)localizedTitleForLinkValue:(id)a0;
- (id)parameterDefinitionDictionary;
- (id)subdefinitionForState:(id)a0;
- (id)subdefinitions;
- (id)substateForState:(id)a0;

@end
