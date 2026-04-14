@class NSString, NSArray, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PXImportAssetCollection : PXBaseDisplayCollection <NSCopying> {
    NSObject<OS_dispatch_queue> *_assetQueue;
    NSMutableArray *_assetList;
    NSArray *_arrangedAssetList;
    NSMutableSet *_assetUUIDs;
    BOOL _needsSorting;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL alreadyImportedGroup;

+ (id)dayFormatter;

- (id)itemAtIndex:(unsigned long long)a0;
- (long long)numberOfItems;
- (void)addObjectsFromArray:(id)a0;
- (id)description;
- (id)init;
- (id)localizedTitle;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isEqual:(id)a0;
- (void)removeAllObjects;
- (void)removeObject:(id)a0;
- (id)arrangedObjects;
- (long long)indexOfItem:(id)a0;
- (id)unsortedObjects;
- (void)arrangedObjects:(id /* block */)a0;
- (BOOL)px_isImportAssetCollection;

@end
