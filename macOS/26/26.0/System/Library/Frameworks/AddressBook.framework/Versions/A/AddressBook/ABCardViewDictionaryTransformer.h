@class NSDictionary, NSString;

@interface ABCardViewDictionaryTransformer : NSValueTransformer

@property (retain, nonatomic) NSDictionary *currentDictionary;
@property (retain, nonatomic) NSString *valueKey;

+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithValueKey:(id)a0;

@end
