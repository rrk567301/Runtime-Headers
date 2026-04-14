@interface _NSNegateBooleanTransformer : _NSSharedValueTransformer

+ (Class)transformedValueClass;

- (BOOL)_isBooleanTransformer;
- (id)description;
- (id)transformedValue:(id)a0;

@end
