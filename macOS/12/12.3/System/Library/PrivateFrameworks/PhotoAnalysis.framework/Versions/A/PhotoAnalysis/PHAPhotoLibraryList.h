@class NSMutableDictionary;

@interface PHAPhotoLibraryList : NSObject

@property (retain) NSMutableDictionary *photoLibrariesByPath;
@property (readonly) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (void)addPhotoLibraryAtURL:(id)a0;
- (void)saveToPersistentStorage;
- (void)removePhotoLibraryAtURL:(id)a0;
- (void)removeAllPhotoLibraries;
- (void)enumeratePhotoLibrariesWithBlock:(id /* block */)a0;

@end
