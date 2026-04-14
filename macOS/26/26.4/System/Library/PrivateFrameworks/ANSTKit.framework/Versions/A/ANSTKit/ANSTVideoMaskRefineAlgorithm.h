@interface ANSTVideoMaskRefineAlgorithm : ANSTAlgorithm

+ (id)new;
+ (Class)_concreteClassOfVersion:(unsigned long long)a0;
+ (id)supportedSemanticCategories;
+ (id)supportedSemanticCategoriesOfVersion:(unsigned long long)a0;

- (id)initWithConfiguration:(id)a0;
- (id)init;
- (id)resultForPixelBuffer:(struct __CVBuffer { } *)a0 coarseSegementationMasks:(id)a1 error:(id *)a2;

@end
