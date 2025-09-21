@class NSDictionary;

@interface _WBSParsecDictionarySchema : WBSParsecSchema

@property (copy, nonatomic) NSDictionary *keysToSchemata;

- (void).cxx_destruct;
- (char)_validateChild:(id)a0 ofParent:(id)a1 withParentAssociatedError:(id)a2 errorHandler:(id /* block */)a3;
- (id)initWithSchemaDictionary:(id)a0 associatedError:(id)a1 isOptional:(char)a2;

@end
