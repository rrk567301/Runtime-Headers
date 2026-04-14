@class CKDKeyValueDiskCache, NSObject, CKDContainer;
@protocol OS_dispatch_queue;

@interface CKDPublicIdentityLookupService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) CKDKeyValueDiskCache *cache;
@property (weak, nonatomic) CKDContainer *container;

- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;
- (void)removeCacheForLookupInfos:(id)a0;
- (void)scheduleRequest:(id)a0 forOperation:(id)a1;
- (void)configureRequest:(id)a0 parentOperation:(id)a1;

@end
