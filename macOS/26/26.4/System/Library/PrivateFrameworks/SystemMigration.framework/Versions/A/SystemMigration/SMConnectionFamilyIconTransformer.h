@class SMConnectionFamilyIconTypeTransformer;

@interface SMConnectionFamilyIconTransformer : NSValueTransformer

@property (retain) SMConnectionFamilyIconTypeTransformer *connectionFamilyIconTypeTransformer;

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id)init;
- (id)transformedValue:(id)a0;

@end
