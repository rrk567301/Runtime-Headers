@class NSSet;

@interface PLAssetChangeNotification : PLChangeNotification

@property (copy, nonatomic) NSSet *updatedAssets;

+ (id)notificationWithChangedAssets:(id)a0;

- (id)object;
- (id)description;
- (id)name;
- (id)_init;
- (void).cxx_destruct;
- (id)userInfo;
- (id)_initWithChangedObjects:(id)a0;

@end
