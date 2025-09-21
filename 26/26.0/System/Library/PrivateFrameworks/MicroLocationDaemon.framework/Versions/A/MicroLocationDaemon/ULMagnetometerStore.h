@class NSString;

@interface ULMagnetometerStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<ULMagnetometerDO, std::allocator<ULMagnetometerDO>> { struct ULMagnetometerDO *x0; struct ULMagnetometerDO *x1; struct ULMagnetometerDO *x2; })fetchAllRecordsWithLimit:(unsigned int)a0;

@end
