@interface PGWrapperMusicForYouCacher : NSObject

@property (class, nonatomic, readonly) BOOL requiresGraph;

+ (void)cacheMusicForMomentsInPhotoLibrary:(id)a0 forceCaching:(BOOL)a1 progressReporter:(id)a2 completionHandler:(id /* block */)a3;

- (id)init;
- (void).cxx_destruct;

@end
