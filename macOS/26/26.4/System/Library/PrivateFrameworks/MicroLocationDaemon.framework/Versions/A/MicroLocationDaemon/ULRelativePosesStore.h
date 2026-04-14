@class NSString;

@interface ULRelativePosesStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<ULRelativePosesDO, std::allocator<ULRelativePosesDO>> { struct ULRelativePosesDO *x0; struct ULRelativePosesDO *x1; struct { struct ULRelativePosesDO *x0; } x2; })fetchAllRecordsWithLimit:(unsigned int)a0;

@end
