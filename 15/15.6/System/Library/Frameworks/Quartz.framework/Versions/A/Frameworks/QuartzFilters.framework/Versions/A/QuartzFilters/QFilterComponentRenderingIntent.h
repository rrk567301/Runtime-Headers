@interface QFilterComponentRenderingIntent : QFilterComponent

+ (char)isUsedInFilter:(id)a0;
+ (id)growableItemsKeyPath;
+ (id)growableItemsKeysToValueToObserveForUndo;

- (char)addCell;
- (char)canGrow;
- (char)addIntentTuple:(id)a0;
- (char)addIntentTuple:(int)a0 data:(int)a1 intent:(int)a2;
- (id)createGrowableItem;
- (id)growableItems;
- (id)initWithFilterInfo:(id)a0 parent:(id)a1;
- (id)keysForValuesToObserveForUndo;
- (void)resetOptionsInfo;
- (void)updateOptionsInfo;

@end
