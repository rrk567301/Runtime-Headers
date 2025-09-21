@interface QFilterComponentConvertToProfile : QFilterComponent

+ (char)isUsedInFilter:(id)a0;
+ (id)growableItemsKeyPath;
+ (id)growableItemsKeysToValueToObserveForUndo;

- (char)addCell;
- (char)canGrow;
- (char)addProfileTuple:(id)a0;
- (char)addProfileTuple:(int)a0 data:(int)a1 profile:(long long)a2;
- (id)createGrowableItem;
- (id)growableItems;
- (id)initWithFilterInfo:(id)a0 parent:(id)a1;
- (id)keysForValuesToObserveForUndo;
- (void)resetOptionsInfo;
- (void)updateOptionsInfo;
- (void)updateProfileInfo;

@end
