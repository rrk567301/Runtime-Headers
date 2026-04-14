@class NSSet;

@interface PLAssetChangeNotification : PLChangeNotification

@property (copy, nonatomic) NSSet *updatedAssets;

+ (id)notificationWithChangedAssets:(id)a0;

- (id)name;
- (id)description;
- (id)_init;
- (id)object;
- (id)userInfo;
- (void).cxx_destruct;
- (id)_initWithChangedObjects:(id)a0;

@end
