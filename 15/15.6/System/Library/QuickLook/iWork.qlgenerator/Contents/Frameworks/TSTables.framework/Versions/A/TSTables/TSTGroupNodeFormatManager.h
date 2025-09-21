@class TSCECellValue, NSMutableDictionary;

@interface TSTGroupNodeFormatManager : NSObject {
    NSMutableDictionary *_rowLookupKeysForFormat;
    char _noFormatMergingNeeded;
    NSMutableDictionary *_upgradeRowUidsForFormat;
}

@property (readonly, nonatomic) TSCECellValue *cellValue;

- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithArchive:(const void *)a0;
- (void)unpackAfterUnarchiveForGroupBy:(id)a0;
- (void)encodeToArchive:(void *)a0 forGroupBy:(id)a1 backwardCompat:(char)a2;
- (id)initWithCellValue:(id)a0;
- (char)mergedFormatChangedByAddingRowUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 andCellValue:(id)a1 groupBy:(id)a2;
- (char)mergedFormatChangedByRemovingRowUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 groupBy:(id)a1;
- (void)p_recalculateMergedFormatWithGroupBy:(id)a0;
- (void)updateWithDocumentRoot:(id)a0;

@end
