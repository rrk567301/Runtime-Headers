@class NSSet;

@interface PLAssetChangeNotification : PLChangeNotification

@property (copy, nonatomic) NSSet *updatedAssets;

+ (id)notificationWithChangedAssets:(id)a0;

- (id)_init;
- (id)description;
- (id)object;
- (id)name;
- (id)userInfo;
- (void).cxx_destruct;
- (id)_initWithChangedObjects:(id)a0;

@end
