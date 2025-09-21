@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TPSCloudController : NSObject {
    BOOL _registered;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_displayedContentIDs;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void)hintDisplayedForContentID:(id)a0;
- (void)registerForNotifications:(id)a0;
- (void)checkForUpdates;
- (id)init;
- (void)updateKVStoreItems:(id)a0;
- (BOOL)isHintDisplayedForContentID:(id)a0;
- (void)_clearDisplayedContentIDs;
- (id)_listDisplayContentIDs;
- (void).cxx_destruct;

@end
