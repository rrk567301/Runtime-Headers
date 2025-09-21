@class NSDate, NSString, TSTFormulaPredArgData, NSArray, TSCECategoryRef, TSTUIDRectRef, TSCEViewTractRef, TSCENumberValue, TSCEUndoTractList, NSNumber, NSMutableSet;

@interface TSTFormulaPredArg : NSObject <NSCopying> {
    TSCECategoryRef *_categoryRef;
    TSCEViewTractRef *_viewTractRef;
    struct RefTypeHolder<TSCECellRef, 0> { struct TSCECellRef { struct TSUCellCoord { unsigned int row; unsigned short column; char _preserveRow; char _preserveColumn; } coordinate; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _tableUID; } _ref; } _baseCellRef;
    NSArray *_dataList;
    struct TSCERelativeCellRef { struct TSCERelativeCellCoordinate { int _row; short _column; char _preserveRow; char _preserveColumn; } relativeCoord; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } tableUID; unsigned char preserveColumn : 1; unsigned char preserveRow : 1; unsigned char isSpanningColumn : 1; unsigned char isSpanningRow : 1; } _relativeCellRef;
    struct TSUPreserveFlags { unsigned char _flags; } _preserveFlags;
    NSMutableSet *_listItemsSet;
}

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) TSTFormulaPredArgData *data;
@property (nonatomic) char boolValue;
@property (retain, nonatomic) NSNumber *number;
@property (nonatomic) double numberValue;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *string;
@property (readonly, nonatomic) NSArray *dataList;
@property (nonatomic) struct TSUPreserveFlags { unsigned char x0; } preserveFlags;
@property (readonly, nonatomic) char preserveColumn;
@property (readonly, nonatomic) char preserveRow;
@property (readonly, nonatomic) char hasRelativeCellRef;
@property (readonly, nonatomic) char hasCategoryRef;
@property (retain, nonatomic) TSCECategoryRef *categoryRef;
@property (readonly, nonatomic) char hasViewTractRef;
@property (retain, nonatomic) TSCEViewTractRef *viewTractRef;
@property (retain, nonatomic) TSCEUndoTractList *uidTractList;
@property (readonly, nonatomic) TSTUIDRectRef *uidRectRef;
@property (nonatomic) double durationValue;
@property (nonatomic) unsigned char durationUnits;
@property (readonly) TSCENumberValue *duration;
@property (nonatomic) struct TSUModelCellCoord { struct TSUCellCoord { unsigned int row; unsigned short column; char _preserveRow; char _preserveColumn; } _coord; } hostCellCoord;
@property (readonly, nonatomic) char needsFormulaRewriting;

+ (id)defaultPredicateArg;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithDouble:(double)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)initWithDate:(id)a0;
- (id).cxx_construct;
- (id)initWithBool:(char)a0;
- (id)initWithNumber:(id)a0;
- (id)initFromArchive:(const void *)a0;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (id)cellReference;
- (const struct TSCERelativeCellRef { struct TSCERelativeCellCoordinate { int x0; short x1; char x2; char x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } *)relativeCellRef;
- (void)setBaseCellRef:(const void *)a0;
- (const void *)baseCellRef;
- (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })cellRefForHostCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; })a0;
- (id)convertToRelativeRefIfPossible;
- (struct TSCECrossTableReference { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSCERelativeCellCoordinate { int x0; short x1; char x2; char x3; } x1; })crossTableRef;
- (struct TSCEFormulaCreator { id /* block */ x0; })formulaCreatorForPredArg;
- (struct TSCEFormulaCreator { id /* block */ x0; })formulaCreatorForPredArg0UsingLinkedRef:(char)a0 useColumnRef:(char)a1;
- (id)initAsBadRefWithTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 uidTractList:(id)a1;
- (id)initWithBaseCellRef:(const void *)a0 preserveFlags:(const struct TSUPreserveFlags { unsigned char x0; } *)a1;
- (id)initWithBaseCellReference:(id)a0 preserveColumn:(char)a1 preserveRow:(char)a2;
- (id)initWithCategoryRef:(id)a0;
- (id)initWithCrossTableRef:(const struct TSCECrossTableReference { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSCERelativeCellCoordinate { int x0; short x1; char x2; char x3; } x1; } *)a0;
- (id)initWithDataList:(id)a0;
- (id)initWithDuration:(double)a0 units:(unsigned char)a1;
- (id)initWithRelativeCellRef:(const struct TSCERelativeCellRef { struct TSCERelativeCellCoordinate { int x0; short x1; char x2; char x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } *)a0;
- (id)initWithTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 uidTractList:(id)a1;
- (id)initWithViewTractRef:(id)a0;
- (char)isBoolValueInList:(char)a0;
- (char)isCellValueInList:(id)a0;
- (char)isDateValueInListYear:(long long)a0 month:(long long)a1 day:(long long)a2;
- (char)isDurationValueInList:(double)a0;
- (char)isEqual:(id)a0 atHostCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; })a1;
- (char)isNumberValueInList:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a0 locale:(id)a1;
- (char)isStringValueInList:(id)a0;
- (id)rewriteWithContext:(struct TSCEFormulaRewriteContext { id x0; id x1; struct TSCEFormulaRewriteContextRecord { struct TSCEFormulaContainingCell { struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; struct TSUColumnRowOffset { int x0; int x1; } x2; char x3; char x4; char x5; char x6; char x7; char x8; char x9; } x2; } *)a0 forArgAt:(long long)a1 usingLinkedRef:(char)a2 useColumnRef:(char)a3 hostCellRef:(struct TSCEUidCellRef { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x2; } *)a4 rewriteBlock:(id /* block */)a5;
- (void)setBaseCellRef:(const void *)a0 preserveColumn:(char)a1 preserveRow:(char)a2;
- (void)setBaseCellRef:(const void *)a0 preserveFlags:(const struct TSUPreserveFlags { unsigned char x0; } *)a1;
- (void)setBaseCellReference:(id)a0;
- (void)setBaseCellReference:(id)a0 preserveColumn:(char)a1 preserveRow:(char)a2;
- (void)setRelativeCellRef:(const struct TSCERelativeCellRef { struct TSCERelativeCellCoordinate { int x0; short x1; char x2; char x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } *)a0;

@end
