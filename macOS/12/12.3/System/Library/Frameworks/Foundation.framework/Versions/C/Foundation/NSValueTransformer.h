@interface NSValueTransformer : NSObject

+ (void)setValueTransformer:(id)a0 forName:(id)a1;
+ (BOOL)allowsReverseTransformation;
+ (id)valueTransformerForName:(id)a0;
+ (id)valueTransformerNames;
+ (Class)transformedValueClass;

- (id)init;
- (id)transformedValue:(id)a0;
- (id)_initForFoundationOnly;
- (id)reverseTransformedValue:(id)a0;

@end
