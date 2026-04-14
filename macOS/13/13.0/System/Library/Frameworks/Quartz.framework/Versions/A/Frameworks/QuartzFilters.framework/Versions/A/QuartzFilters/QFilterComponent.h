@class NSString, QFilterInfo, QFilter, QFilterComponentChild;

@interface QFilterComponent : NSObject

@property QFilter *parent;
@property int componentID;
@property (copy) NSString *name;
@property (retain) QFilterInfo *filterInfo;
@property (retain) QFilterComponentChild *child;

+ (id)filterComponentWithFilterInfo:(id)a0 parent:(id)a1;
+ (BOOL)isUsedInFilter:(id)a0;
+ (id)growableItemsKeyPath;
+ (id)growableItemsKeysToValueToObserveForUndo;

- (void)dealloc;
- (id)init;
- (BOOL)addCell;
- (id)keysForValuesToObserveForUndo;
- (id)initWithFilterInfo:(id)a0 parent:(id)a1 componentID:(int)a2 name:(id)a3;
- (id)initWithFilterInfo:(id)a0 parent:(id)a1;
- (id)profileNamesForDataType:(int)a0 numToSkip:(long long *)a1;
- (BOOL)canGrow;
- (id)growableItems;
- (id)createGrowableItem;
- (void)updateOptionsInfo;
- (void)updateProfileInfo;
- (void)resetOptionsInfo;

@end
