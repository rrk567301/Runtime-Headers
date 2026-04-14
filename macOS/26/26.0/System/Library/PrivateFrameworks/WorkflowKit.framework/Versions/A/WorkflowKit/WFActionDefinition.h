@class NSDictionary, _NSLocalizedStringResource, WFActionDescriptionDefinition;

@interface WFActionDefinition : NSObject {
    NSDictionary *_definition;
}

@property (readonly, nonatomic) _NSLocalizedStringResource *name;
@property (readonly, nonatomic) WFActionDescriptionDefinition *descriptionDefinition;

- (id)initWithDictionary:(id)a0;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (id)definitionByAddingEntriesInDictionary:(id)a0;
- (id)definitionByMergingWithDefinition:(id)a0;
- (id)definitionByRemovingKey:(id)a0;

@end
