@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TPSCloudController : NSObject {
    BOOL _registered;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_displayedContentIDs;
}

+ (id)sharedInstance;

- (void)_clearDisplayedContentIDs;
- (void)updateKVStoreItems:(id)a0;
- (void)hintDisplayedForContentID:(id)a0;
- (void).cxx_destruct;
- (id)_listDisplayContentIDs;
- (BOOL)isHintDisplayedForContentID:(id)a0;
- (id)init;
- (void)checkForUpdates;
- (void)dealloc;
- (void)registerForNotifications:(id)a0;

@end
