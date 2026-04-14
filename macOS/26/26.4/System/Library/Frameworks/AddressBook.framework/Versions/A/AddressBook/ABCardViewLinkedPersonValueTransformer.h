@class ABCardViewLinkedPerson;

@interface ABCardViewLinkedPersonValueTransformer : NSValueTransformer

@property (retain, nonatomic) ABCardViewLinkedPerson *lastLinkedPerson;

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id)init;
- (id)transformedValue:(id)a0;

@end
