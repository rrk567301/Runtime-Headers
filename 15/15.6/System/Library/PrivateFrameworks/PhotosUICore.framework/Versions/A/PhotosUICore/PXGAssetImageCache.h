@class NSMutableIndexSet, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PXGAssetImageCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableIndexSet *_activeRequestIDs;
    NSMutableSet *_activeAssets;
    NSMutableArray *_entries;
    NSMutableArray *_reusableEntries;
}

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)clearCachedImagesForRequestIDs:(id)a0;
- (void)_cacheImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 isDegraded:(char)a2 forRequestID:(int)a3 outCGImage:(out struct CGImage **)a4;
- (struct CGImage { } *)cacheCGImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 isDegraded:(char)a2 forRequestID:(int)a3;
- (void)clearAllCachedImages;
- (char)getCachedImage:(struct CGImage **)a0 withOrientation:(unsigned int *)a1 outIsDegraded:(char *)a2 forAsset:(id)a3 targetSize:(struct CGSize { double x0; double x1; })a4 contentMode:(long long)a5 forRequestID:(int)a6;

@end
