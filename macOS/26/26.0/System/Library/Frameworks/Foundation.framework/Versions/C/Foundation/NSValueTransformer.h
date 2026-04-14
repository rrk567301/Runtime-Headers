@interface NSValueTransformer : NSObject

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
+ (void)setValueTransformer:(id)a0 forName:(id)a1;
+ (id)valueTransformerForName:(id)a0;
+ (id)valueTransformerNames;

- (id)transformedValue:(id)a0;
- (id)init;
- (id)reverseTransformedValue:(id)a0;
- (id)_initForFoundationOnly;

@end
