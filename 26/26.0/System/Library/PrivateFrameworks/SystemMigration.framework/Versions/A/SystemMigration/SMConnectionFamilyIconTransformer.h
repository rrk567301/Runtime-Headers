@class SMConnectionFamilyIconTypeTransformer;

@interface SMConnectionFamilyIconTransformer : NSValueTransformer

@property (retain) SMConnectionFamilyIconTypeTransformer *connectionFamilyIconTypeTransformer;

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
