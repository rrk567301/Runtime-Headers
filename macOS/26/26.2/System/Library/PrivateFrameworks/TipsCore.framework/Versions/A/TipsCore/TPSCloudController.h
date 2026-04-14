@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TPSCloudController : NSObject {
    BOOL _registered;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_displayedContentIDs;
}

+ (id)sharedInstance;

- (void)registerForNotifications:(id)a0;
- (BOOL)isHintDisplayedForContentID:(id)a0;
- (void)hintDisplayedForContentID:(id)a0;
- (void).cxx_destruct;
- (void)_clearDisplayedContentIDs;
- (void)checkForUpdates;
- (void)updateKVStoreItems:(id)a0;
- (id)init;
- (id)_listDisplayContentIDs;
- (void)dealloc;

@end
