@class NSSet;

@interface PLAssetChangeNotification : PLChangeNotification

@property (copy, nonatomic) NSSet *updatedAssets;

+ (id)notificationWithChangedAssets:(id)a0;

- (id)_init;
- (id)name;
- (id)object;
- (void).cxx_destruct;
- (id)userInfo;
- (id)description;
- (id)_initWithChangedObjects:(id)a0;

@end
