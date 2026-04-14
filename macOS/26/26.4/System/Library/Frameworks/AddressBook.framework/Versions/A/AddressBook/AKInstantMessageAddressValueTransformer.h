@class CNInstantMessageAddress;

@interface AKInstantMessageAddressValueTransformer : NSValueTransformer

@property (retain, nonatomic) CNInstantMessageAddress *lastInstantMessageAddress;

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id)init;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
