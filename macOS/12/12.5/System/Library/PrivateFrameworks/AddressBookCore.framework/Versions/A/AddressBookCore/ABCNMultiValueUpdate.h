@interface ABCNMultiValueUpdate : NSObject

+ (id)removeValueWithIdentifier:(id)a0;
+ (id)addValue:(id)a0 withIdentifier:(id)a1 label:(id)a2;
+ (id)replaceValueWithIdentifier:(id)a0 withValue:(id)a1 label:(id)a2;
+ (id)reorderValuesWithIdentifiers:(id)a0;

@end
