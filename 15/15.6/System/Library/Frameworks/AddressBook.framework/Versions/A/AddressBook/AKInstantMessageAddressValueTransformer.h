@class CNInstantMessageAddress;

@interface AKInstantMessageAddressValueTransformer : NSValueTransformer

@property (retain, nonatomic) CNInstantMessageAddress *lastInstantMessageAddress;

+ (char)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)init;
- (void).cxx_destruct;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
