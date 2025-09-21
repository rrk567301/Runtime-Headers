@class TSTColumnRowUIDMap, TSTTableDataStore, TSTCell, TSTTableTile, NSObject, TSTCellRegion, TSTGroupBy, TSTSummaryCellVendor, NSString, TSTMutableCellIteratorData, NSIndexSet, TSTCategoryTranslator, TSTTableDataListCache, TSTTableTileRowInfo, TSTTableInfo;
@protocol TSTCellRegionIterating;

@interface TSTCategoryStoreIterator : NSObject <TSTMutableCellIteratorDataUpdating, TSTCellIterating, TSTCellRegionIterating> {
    struct unordered_map<TSUViewColumnIndex, TSUModelColumnIndex, std::hash<TSUViewColumnIndex>, std::equal_to<TSUViewColumnIndex>, std::allocator<std::pair<const TSUViewColumnIndex, TSUModelColumnIndex>>> { struct __hash_table<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::__unordered_map_hasher<TSUViewColumnIndex, std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::hash<TSUViewColumnIndex>, std::equal_to<TSUViewColumnIndex>>, std::__unordered_map_equal<TSUViewColumnIndex, std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::equal_to<TSUViewColumnIndex>, std::hash<TSUViewColumnIndex>>, std::allocator<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUViewColumnIndex, std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::hash<TSUViewColumnIndex>, std::equal_to<TSUViewColumnIndex>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TSUViewColumnIndex, std::__hash_value_type<TSUViewColumnIndex, TSUModelColumnIndex>, std::equal_to<TSUViewColumnIndex>, std::hash<TSUViewColumnIndex>>> { float __value_; } __p3_; } __table_; } _mapFromViewToBaseColumnInCurrentRow;
    TSTCell *_tempSummaryCell;
}

@property (readonly, weak, nonatomic) TSTGroupBy *groupBy;
@property (readonly, nonatomic) TSTCategoryTranslator *translator;
@property (readonly, weak, nonatomic) TSTTableDataStore *baseDataStore;
@property (readonly, nonatomic) TSTTableDataListCache *baseDataListCache;
@property (readonly, weak, nonatomic) TSTColumnRowUIDMap *baseMap;
@property (readonly, weak, nonatomic) TSTColumnRowUIDMap *viewMap;
@property (readonly, weak, nonatomic) TSTSummaryCellVendor *summaryCellVendor;
@property (readonly, weak, nonatomic) TSTColumnRowUIDMap *summaryMap;
@property (readonly, nonatomic) TSTCellRegion *region;
@property (nonatomic) unsigned long long searchMask;
@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; char _preserveRow; char _preserveColumn; } curCellID;
@property (nonatomic) unsigned int curRowIndex;
@property (readonly, nonatomic) unsigned short categoryColumnIndex;
@property (nonatomic) char isSummaryRow;
@property (nonatomic) char isLabelRow;
@property (nonatomic) unsigned char groupLevel;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } uuid;
@property (nonatomic) unsigned int baseRowIndex;
@property (retain, nonatomic) TSTTableTile *baseTile;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } baseTileRange;
@property (retain, nonatomic) TSTTableTileRowInfo *baseRow;
@property (readonly, nonatomic) TSTMutableCellIteratorData *cellData;
@property (readonly, nonatomic) TSTCell *cell;
@property (nonatomic) char columnOrderReversed;
@property (nonatomic) char terminated;
@property (retain, nonatomic) NSIndexSet *populatedColumnsForGroupLevel1;
@property (retain, nonatomic) NSIndexSet *populatedColumnsForGroupLevel2;
@property (retain, nonatomic) NSIndexSet *populatedColumnsForGroupLevel3;
@property (retain, nonatomic) NSIndexSet *populatedColumnsForGroupLevel4;
@property (retain, nonatomic) NSIndexSet *populatedColumnsForGroupLevel5;
@property (retain, nonatomic) NSIndexSet *viewColumnIndexesInCurrentRow;
@property (readonly, nonatomic) TSTTableInfo *info;
@property (readonly, nonatomic) NSObject<TSTCellRegionIterating> *regionIterator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TSTTableInfo *tableInfo;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)terminate;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; })getNext;
- (id)tempSummaryCell;
- (void)updateCellData:(id)a0;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; })advanceToCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; })a0;
- (char)checkCell:(id)a0 searchFlags:(unsigned long long)a1;
- (char)getNextCellData:(id *)a0;
- (id)initWithInfo:(id)a0 region:(id)a1 flags:(unsigned long long)a2 searchMask:(unsigned long long)a3;
- (void)iterateCellsUsingBlock:(id /* block */)a0;
- (id)nextCellData;
- (void)updateFormulaForCellData:(id)a0;

@end
