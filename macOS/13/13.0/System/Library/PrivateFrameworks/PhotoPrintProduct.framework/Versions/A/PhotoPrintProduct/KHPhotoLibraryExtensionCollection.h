@class NSMutableArray, NSMutableDictionary, NSExtensionContext;

@interface KHPhotoLibraryExtensionCollection : KHPhotoLibraryGenericCollection {
    NSMutableDictionary *_allImagesByURL;
    NSMutableArray *_allImages;
    BOOL _needsHydration;
}

@property (readonly, nonatomic) NSMutableDictionary *properties;
@property (retain, nonatomic) NSExtensionContext *extensionContext;

- (void).cxx_destruct;
- (id)initWithExtensionContext:(id)a0;
- (id)photoAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfPhotos;
- (id)allPhotos;
- (BOOL)needsHydration;
- (unsigned long long)numberOfSubcollections;
- (id)subcollectionAtIndex:(unsigned long long)a0;
- (void)executeHydration;
- (id)photoWithURL:(id)a0;

@end
