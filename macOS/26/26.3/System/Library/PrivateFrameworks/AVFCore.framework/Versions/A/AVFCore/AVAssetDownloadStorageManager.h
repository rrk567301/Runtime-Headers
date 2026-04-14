@class NSObject;
@protocol OS_dispatch_queue;

@interface AVAssetDownloadStorageManager : NSObject {
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
}

+ (id)sharedDownloadStorageManager;

- (id)init;
- (void)dealloc;
- (void)setStorageManagementPolicy:(id)a0 forURL:(id)a1;
- (id)storageManagementPolicyForURL:(id)a0;

@end
