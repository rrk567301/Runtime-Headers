@class NSSet;

@interface PLAssetChangeNotification : PLChangeNotification

@property (copy, nonatomic) NSSet *updatedAssets;

+ (id)notificationWithChangedAssets:(id)a0;

- (id)description;
- (id)name;
- (id)userInfo;
- (id)object;
- (void).cxx_destruct;
- (id)_init;
- (id)_initWithChangedObjects:(id)a0;

@end
