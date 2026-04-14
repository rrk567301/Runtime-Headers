@class CNInstantMessageAddress;

@interface AKInstantMessageAddressValueTransformer : NSValueTransformer

@property (retain, nonatomic) CNInstantMessageAddress *lastInstantMessageAddress;

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
