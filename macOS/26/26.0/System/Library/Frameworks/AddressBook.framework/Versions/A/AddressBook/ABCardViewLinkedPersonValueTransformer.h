@class ABCardViewLinkedPerson;

@interface ABCardViewLinkedPersonValueTransformer : NSValueTransformer

@property (retain, nonatomic) ABCardViewLinkedPerson *lastLinkedPerson;

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
