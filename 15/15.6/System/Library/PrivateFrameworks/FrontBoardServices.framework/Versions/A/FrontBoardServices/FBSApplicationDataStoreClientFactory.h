@class NSArray, NSObject;
@protocol OS_dispatch_queue, FBSApplicationDataStoreRepositoryClient;

@interface FBSApplicationDataStoreClientFactory : NSObject {
    unsigned long long _count;
    NSObject<OS_dispatch_queue> *_queue;
    id<FBSApplicationDataStoreRepositoryClient> _sharedClient;
}

@property (retain, nonatomic) NSArray *prefetchedKeys;

+ (id)sharedInstance;
+ (char)isServerProcess;

- (id)init;
- (void).cxx_destruct;
- (void)checkin;
- (id)checkout;

@end
