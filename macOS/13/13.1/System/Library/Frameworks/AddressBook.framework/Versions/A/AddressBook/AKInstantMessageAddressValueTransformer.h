@class CNInstantMessageAddress;

@interface AKInstantMessageAddressValueTransformer : NSValueTransformer

@property (retain, nonatomic) CNInstantMessageAddress *lastInstantMessageAddress;

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)init;
- (void).cxx_destruct;
- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
