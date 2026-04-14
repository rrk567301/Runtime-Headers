@class NSBundle;

@interface VNFrameworkResourceDescriptor : VNResourceDescriptor

@property (readonly) NSBundle *frameworkBundle;

+ (id)descriptorForFrameworkContainingClass:(Class)a0 error:(id *)a1;
+ (id)descriptorForFrameworkContainingClassNamed:(id)a0 error:(id *)a1;
+ (id)descriptorForFrameworkIdentifier:(id)a0 error:(id *)a1;

- (id)initWithBundle:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
