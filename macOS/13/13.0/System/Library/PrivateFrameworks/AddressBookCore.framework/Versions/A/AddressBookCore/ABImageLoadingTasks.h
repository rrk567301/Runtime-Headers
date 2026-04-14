@interface ABImageLoadingTasks : NSObject

+ (id)imageTaskWithRequest:(id)a0;
+ (id)imageLoadingTaskForPerson:(id)a0 emails:(id)a1;
+ (id)localThumbnailImageTaskWithRequest:(id)a0;
+ (id)localLargeImageTaskWithRequest:(id)a0;
+ (id)remoteImageTaskWithRequest:(id)a0;
+ (id)libraryDirectoryImageTaskWithRequest:(id)a0;
+ (id)directoryServicesImageTaskWithRequest:(id)a0;
+ (id)gravatarImageLoaderTaskWithRequest:(id)a0;

@end
