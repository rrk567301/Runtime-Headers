@class NSMutableDictionary, NSMutableSet;

@interface PLBackgroundJobWorkerTypesBuffer : NSObject <NSCopying> {
    NSMutableSet *_bundles;
}

@property (readonly, nonatomic) NSMutableDictionary *workerTypesByBundleURL;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllObjects;
- (id)bundles;
- (void)_addBackgroundJobWorkerTypes:(id)a0 forBundleURL:(id)a1;
- (void)addBackgroundJobWorkerTypes:(id)a0 forBundle:(id)a1;
- (BOOL)containsBackgroundJobWorker:(id)a0 forBundle:(id)a1;
- (BOOL)containsBackgroundJobWorkerTypes:(id)a0 forBundle:(id)a1;
- (void)unionBuffer:(id)a0;
- (id)workerTypesForBundle:(id)a0;

@end
