@class NSObject, NSMutableDictionary, MLMediaGroup, NSMutableSet, KHPhotoLibraryMLSource, NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface KHPhotoLibraryMLCollection : KHPhotoLibraryGenericCollection {
    NSMutableSet *_kvoKeysForGroup;
    NSMutableSet *_kvoBindingsForGroup;
}

@property (retain, nonatomic) NSMutableArray *arrangedPhotos;
@property (retain, nonatomic) NSMutableDictionary *photos;
@property (readonly, nonatomic) NSMutableDictionary *subcollections;
@property BOOL isLoading;
@property (weak, nonatomic) KHPhotoLibraryMLSource *source;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *mediaObjectsHydrationSema;
@property (readonly, nonatomic) MLMediaGroup *group;

- (void)dealloc;
- (void).cxx_destruct;
- (id)identifier;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)photoAtIndex:(unsigned long long)a0;
- (id)allPhotos;
- (unsigned long long)numberOfPhotos;
- (unsigned long long)numberOfSubcollections;
- (id)subcollectionAtIndex:(unsigned long long)a0;
- (void)executeHydration;
- (id)photoWithURL:(id)a0;
- (void)_hydrate;
- (void)_setupChildGroup:(id)a0;
- (id)initWithMediaGroup:(id)a0 source:(id)a1;

@end
