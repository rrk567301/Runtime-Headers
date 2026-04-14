@interface Protocol : NSObject

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (struct objc_method_description { SEL x0; char *x1; } *)descriptionForInstanceMethod:(SEL)a0;
- (const char *)name;
- (struct objc_method_description { SEL x0; char *x1; } *)descriptionForClassMethod:(SEL)a0;
- (BOOL)conformsTo:(id)a0;

@end
