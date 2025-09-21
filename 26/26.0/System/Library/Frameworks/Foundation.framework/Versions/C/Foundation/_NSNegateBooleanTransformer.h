@interface _NSNegateBooleanTransformer : _NSSharedValueTransformer

+ (Class)transformedValueClass;

- (BOOL)_isBooleanTransformer;
- (id)transformedValue:(id)a0;
- (id)description;

@end
