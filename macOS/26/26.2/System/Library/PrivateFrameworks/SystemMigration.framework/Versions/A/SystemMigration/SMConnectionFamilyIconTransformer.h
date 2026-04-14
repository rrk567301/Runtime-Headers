@class SMConnectionFamilyIconTypeTransformer;

@interface SMConnectionFamilyIconTransformer : NSValueTransformer

@property (retain) SMConnectionFamilyIconTypeTransformer *connectionFamilyIconTypeTransformer;

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
