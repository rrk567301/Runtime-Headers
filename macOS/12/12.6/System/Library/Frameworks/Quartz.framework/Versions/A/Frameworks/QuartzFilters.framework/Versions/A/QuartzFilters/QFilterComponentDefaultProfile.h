@interface QFilterComponentDefaultProfile : QFilterComponent

+ (BOOL)isUsedInFilter:(id)a0;
+ (id)growableItemsKeyPath;
+ (id)growableItemsKeysToValueToObserveForUndo;

- (BOOL)addCell;
- (BOOL)canGrow;
- (id)keysForValuesToObserveForUndo;
- (id)createGrowableItem;
- (id)initWithFilterInfo:(id)a0 parent:(id)a1;
- (id)growableItems;
- (void)updateOptionsInfo;
- (void)updateProfileInfo;
- (void)resetOptionsInfo;
- (BOOL)addProfileTuple:(int)a0 data:(int)a1 profile:(long long)a2;
- (BOOL)addProfileTuple:(id)a0;

@end
