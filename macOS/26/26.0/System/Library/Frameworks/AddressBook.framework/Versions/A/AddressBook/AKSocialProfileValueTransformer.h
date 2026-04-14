@class CNSocialProfile;

@interface AKSocialProfileValueTransformer : NSValueTransformer

@property (retain, nonatomic) CNSocialProfile *lastSocialProfile;

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)init;
- (id)reverseTransformedValue:(id)a0;
- (void).cxx_destruct;
- (id)_serviceFromDisplayValue:(id)a0;
- (id)_urlStringFromDisplayValue:(id)a0 service:(id)a1 username:(id)a2;
- (id)_usernameFromDisplayValue:(id)a0 service:(id)a1;
- (id)_usernameFromProfile:(id)a0;

@end
