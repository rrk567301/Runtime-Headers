@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TPSCloudController : NSObject {
    BOOL _registered;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_displayedContentIDs;
}

+ (id)sharedInstance;

- (void)_clearDisplayedContentIDs;
- (BOOL)isHintDisplayedForContentID:(id)a0;
- (void)checkForUpdates;
- (void)registerForNotifications:(id)a0;
- (void)hintDisplayedForContentID:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_listDisplayContentIDs;
- (void)updateKVStoreItems:(id)a0;
- (id)init;

@end
