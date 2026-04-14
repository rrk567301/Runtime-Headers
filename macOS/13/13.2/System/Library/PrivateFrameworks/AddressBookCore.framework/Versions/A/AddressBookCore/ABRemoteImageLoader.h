@class NSOperationQueue;

@interface ABRemoteImageLoader : NSObject {
    NSOperationQueue *_workQueue;
}

+ (id)sharedRemoteImageLoader;
+ (id)personForEmailAddresses:(id)a0;

- (void)dealloc;
- (id)init;
- (void)cancelLoadingImageDataForTag:(long long)a0;
- (long long)beginLoadingImageForPerson:(id)a0 completionHandler:(id /* block */)a1;
- (long long)beginLoadingImageForEmails:(id)a0 forClient:(id)a1;
- (long long)beginLoadingImageForEmails:(id)a0 completionHandler:(id /* block */)a1;

@end
