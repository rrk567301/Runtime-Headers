@class ABCardViewLinkedPerson;

@interface ABCardViewLinkedPersonValueTransformer : NSValueTransformer

@property (retain, nonatomic) ABCardViewLinkedPerson *lastLinkedPerson;

+ (char)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)init;
- (void).cxx_destruct;
- (id)transformedValue:(id)a0;

@end
