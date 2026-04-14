@class NSArray, NSDictionary, WFAction;

@interface WFUnionParameter : WFParameter

@property (readonly, nonatomic) NSArray *subtypes;
@property (readonly, nonatomic) NSArray *subdefinitions;
@property (readonly, nonatomic) NSArray *subparameters;
@property (readonly, nonatomic) NSDictionary *parameterMetadataByType;
@property (weak, nonatomic) WFAction *action;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (id)subdefinitionForType:(id)a0;

@end
