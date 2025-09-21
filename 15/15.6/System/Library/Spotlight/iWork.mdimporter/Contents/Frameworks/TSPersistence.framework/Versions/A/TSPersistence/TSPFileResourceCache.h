@class NSURL, NSString, NSOperationQueue;

@interface TSPFileResourceCache : NSObject <TSUResourceCache, TSUResourceFileURLProvider> {
    NSOperationQueue *_ioOperationQueue;
}

@property (readonly, nonatomic) NSURL *cacheURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheDirectoryURLWithSignature:(id)a0 sharedGroupContainer:(char)a1;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)purge;
- (id)fileURLForResourceInfo:(id)a0;
- (void)cacheResourceAtURL:(id)a0 forInfo:(id)a1 copy:(char)a2 completionQueue:(id)a3 completionHandler:(id /* block */)a4;
- (char)cachedResourceExistsForInfo:(id)a0;
- (id)fileURLInCacheForResourceInfo:(id)a0;

@end
