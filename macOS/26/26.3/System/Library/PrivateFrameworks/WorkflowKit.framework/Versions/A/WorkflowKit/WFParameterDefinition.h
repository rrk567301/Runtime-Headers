@class NSDictionary;

@interface WFParameterDefinition : NSObject {
    NSDictionary *_definition;
}

- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)definitionByAddingEntriesInDictionary:(id)a0;
- (id)definitionByMergingWithDefinition:(id)a0;
- (id)definitionByRemovingKey:(id)a0;

@end
