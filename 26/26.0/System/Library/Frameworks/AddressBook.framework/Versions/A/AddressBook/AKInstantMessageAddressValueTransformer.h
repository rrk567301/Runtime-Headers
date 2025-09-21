@class CNInstantMessageAddress;

@interface AKInstantMessageAddressValueTransformer : NSValueTransformer

@property (retain, nonatomic) CNInstantMessageAddress *lastInstantMessageAddress;

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)init;
- (id)reverseTransformedValue:(id)a0;
- (void).cxx_destruct;

@end
