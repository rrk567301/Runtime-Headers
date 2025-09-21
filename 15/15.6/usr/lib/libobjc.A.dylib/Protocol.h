@interface Protocol : NSObject

- (char)conformsTo:(id)a0;
- (struct objc_method_description { SEL x0; char *x1; } *)descriptionForClassMethod:(SEL)a0;
- (struct objc_method_description { SEL x0; char *x1; } *)descriptionForInstanceMethod:(SEL)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (const char *)name;

@end
