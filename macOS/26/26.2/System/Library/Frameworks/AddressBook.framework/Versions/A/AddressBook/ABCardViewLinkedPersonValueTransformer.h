@class ABCardViewLinkedPerson;

@interface ABCardViewLinkedPersonValueTransformer : NSValueTransformer

@property (retain, nonatomic) ABCardViewLinkedPerson *lastLinkedPerson;

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
