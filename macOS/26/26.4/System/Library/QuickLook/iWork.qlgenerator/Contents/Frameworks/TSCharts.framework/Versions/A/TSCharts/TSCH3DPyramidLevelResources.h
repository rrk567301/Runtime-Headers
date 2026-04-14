@class TSUPair, TSCH3DPyramidBlurFBOResource;

@interface TSCH3DPyramidLevelResources : NSObject {
    TSUPair *_resourcePair;
}

@property (readonly, nonatomic) TSCH3DPyramidBlurFBOResource *finalResource;
@property (readonly, nonatomic) TSCH3DPyramidBlurFBOResource *temporaryResource;
@property (readonly, nonatomic) struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } size;

+ (id)resourcesWithFBOSize:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithFBOSize:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a0;

@end
