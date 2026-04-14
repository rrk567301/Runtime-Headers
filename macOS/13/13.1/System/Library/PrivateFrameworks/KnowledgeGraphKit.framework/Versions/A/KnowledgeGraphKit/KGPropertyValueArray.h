@class NSArray, KGElementIdentifierSet;

@interface KGPropertyValueArray : NSObject

@property (readonly, nonatomic) NSArray *values;
@property (readonly, nonatomic) KGElementIdentifierSet *elementIdentifiers;

- (void).cxx_destruct;
- (id)initWithValues:(id)a0 elementIdentifiers:(id)a1;
- (void)enumerateUsingBlock:(id /* block */)a0;

@end
