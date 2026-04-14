@interface PGWrapperMusicForMomentCacher : NSObject

@property (class, nonatomic, readonly) BOOL requiresGraph;

+ (void)cacheMusicForMomentsInPhotoLibrary:(id)a0 progressReporter:(id)a1 completionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)init;

@end
