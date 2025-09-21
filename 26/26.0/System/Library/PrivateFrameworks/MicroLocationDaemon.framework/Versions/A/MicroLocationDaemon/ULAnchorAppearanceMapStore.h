@class NSString;

@interface ULAnchorAppearanceMapStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<ULAnchorAppearanceMapDO, std::allocator<ULAnchorAppearanceMapDO>> { struct ULAnchorAppearanceMapDO *x0; struct ULAnchorAppearanceMapDO *x1; struct ULAnchorAppearanceMapDO *x2; })_fetchAnchorAppearanceMapByAndPredicates:(id)a0 sortDescriptors:(id)a1 andLimit:(unsigned long long)a2;
- (BOOL)deleteOrphanRecords;
- (struct vector<ULAnchorAppearanceMapDO, std::allocator<ULAnchorAppearanceMapDO>> { struct ULAnchorAppearanceMapDO *x0; struct ULAnchorAppearanceMapDO *x1; struct ULAnchorAppearanceMapDO *x2; })fetchAllRecordsWithLimit:(unsigned int)a0;
- (struct optional<ULAnchorAppearanceMapDO> { union { char x0; struct ULAnchorAppearanceMapDO { struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x0; struct uuid { unsigned char x0[16]; } x1; struct AnchorAppearanceConfiguration { void /* function */ **x0; struct anchorAppearancesVector *x1; int x2; int x3; unsigned int x4[1]; } x2; } x1; } x0; BOOL x1; })fetchMostRecentAnchorAppearanceMapAtLoiGroupId:(const struct uuid { unsigned char x0[16]; } *)a0;
- (BOOL)insertDataObjects:(const void *)a0 atLoiUUID:(const struct uuid { unsigned char x0[16]; } *)a1;

@end
