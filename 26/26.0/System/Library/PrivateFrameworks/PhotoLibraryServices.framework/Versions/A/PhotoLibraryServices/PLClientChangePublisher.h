@class NSString, PLAssetsdClient;

@interface PLClientChangePublisher : NSObject <PLChangePublisher> {
    PLAssetsdClient *_assetsdClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 debugEvent:(id)a2 transaction:(id)a3;
- (void)unpauseLaunchEventNotifications;
- (void)pauseLaunchEventNotifications;
- (id)initWithAssetsdClient:(id)a0;
- (void).cxx_destruct;
- (id)addEvent;

@end
