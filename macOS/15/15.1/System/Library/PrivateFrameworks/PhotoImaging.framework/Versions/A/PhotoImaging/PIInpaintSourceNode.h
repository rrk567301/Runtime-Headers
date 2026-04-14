@class NSDictionary, NSArray, NSString;
@protocol NUMutableBufferImage, NUBufferImage;

@interface PIInpaintSourceNode : NUCISourceNode {
    id<NUMutableBufferImage> _retouchImage;
    id<NUBufferImage> _renderedImage;
    NSArray *_operations;
    NSString *_cacheKey;
}

@property (readonly, copy, nonatomic) NSDictionary *maskNodes;

+ (id)intermediateCacheForSubsample:(BOOL)a0;

- (void).cxx_destruct;
- (void)provideImageData:(void *)a0 bytesPerRow:(unsigned long long)a1 origin:(unsigned long long)a2 :(unsigned long long)a3 size:(unsigned long long)a4 :(unsigned long long)a5 userInfo:(id)a6;
- (id)initWithImage:(id)a0 identifier:(id)a1 orientation:(long long)a2;
- (id)initWithImage:(id)a0 settings:(id)a1 orientation:(long long)a2;
- (void)applyInpaintOperations:(id)a0 toImage:(id)a1;
- (void)_debugDumpMaskImage:(id)a0 name:(id)a1;
- (id)_newMaskImageFromIdentifiers:(id)a0 useSourceImage:(BOOL)a1 error:(out id *)a2;
- (void)_performRetouchIfNeeded;
- (id)initWithInputImage:(id)a0 inpaintOperations:(id)a1 maskNodes:(id)a2 detectedFaces:(id)a3 sourceOrientation:(long long)a4 isHDR:(BOOL)a5 cacheKey:(id)a6;
- (id)newExclusionMaskImageForOperation:(id)a0 inputImage:(id)a1 error:(out id *)a2;
- (id)newMaskImageForOperation:(id)a0 useSourceImage:(BOOL)a1 error:(out id *)a2;
- (BOOL)shouldDumpSourceMasks;

@end
