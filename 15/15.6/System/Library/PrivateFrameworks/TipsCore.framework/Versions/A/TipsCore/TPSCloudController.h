@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TPSCloudController : NSObject {
    char _registered;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_displayedContentIDs;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)registerForNotifications:(id)a0;
- (void)checkForUpdates;
- (void)_clearDisplayedContentIDs;
- (id)_listDisplayContentIDs;
- (void)hintDisplayedForContentID:(id)a0;
- (char)isHintDisplayedForContentID:(id)a0;
- (void)updateKVStoreItems:(id)a0;

@end
