@class PHFetchOptions, NSObject;
@protocol OS_os_log;

@interface PXStoryBaseDisplayAssetCroppingContext : NSObject <PXStoryDisplayAssetCroppingContext>

@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) PHFetchOptions *fetchOptions;

- (id)init;
- (void).cxx_destruct;
- (void)requestIndividualFaceRectsInAsset:(id)a0 options:(unsigned long long)a1 resultHandler:(id /* block */)a2;
- (id)adjustOrderedFaces:(id)a0 featuredFaceCount:(long long *)a1;
- (id)orderedFacesForAsset:(id)a0 featuredFaceCount:(long long *)a1;

@end
