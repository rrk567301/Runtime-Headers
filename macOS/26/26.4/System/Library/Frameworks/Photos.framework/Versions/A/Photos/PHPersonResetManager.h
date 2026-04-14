@class PHPhotoLibrary, PLProgressFollower;

@interface PHPersonResetManager : NSObject {
    PHPhotoLibrary *_library;
    PLProgressFollower *_progressFollower;
}

@property (copy) id /* block */ progressHandler;

- (id)resetSocialGroupsWithCompletionHandler:(id /* block */)a0;
- (id)resetPersonsWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;

@end
