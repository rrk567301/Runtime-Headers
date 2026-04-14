@class WFContentProperty;

@interface WFContentItemAction : WFAction

@property (readonly, nonatomic) WFContentProperty *defaultProperty;

- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (id)inputContentClasses;
- (BOOL)inputsMultipleItems;
- (BOOL)outputsMultipleItems;

@end
