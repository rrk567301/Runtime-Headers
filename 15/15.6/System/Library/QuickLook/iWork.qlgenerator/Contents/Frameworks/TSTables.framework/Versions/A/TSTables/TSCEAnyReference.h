@class NSString, TSCEReferenceSetWrapper, TSCEWrappedRangeRef;

@interface TSCEAnyReference : NSObject {
    struct TSCEAnyRef { unsigned short _refType; struct TSCESpanningRangeRef { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int row; unsigned short column; char _preserveRow; char _preserveColumn; } _topLeft; struct TSUCellCoord { unsigned int row; unsigned short column; char _preserveRow; char _preserveColumn; } _bottomRight; } range; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _tableUID; } rangeRef; unsigned char rangeContext; } _spanningRef; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _uuidValue; char _couldBeIntersection; char _isExplicitIntersection; TSCEReferenceSetWrapper *_refSet; } _ref;
}

@property (copy) NSString *overrideText;
@property (copy) NSString *overrideTextAsTyped;
@property (nonatomic) char wasConstructedViaNames;
@property (readonly, nonatomic) struct TSCEAnyRef { unsigned short x0; struct TSCESpanningRangeRef { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; unsigned char x1; } x1; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x2; char x3; char x4; id x5; } anyRef;
@property (nonatomic) struct TSUPreserveFlags { unsigned char _flags; } preserveFlags;
@property (readonly, nonatomic) struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } rangeRef;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } tableUID;
@property (readonly, nonatomic) TSCEWrappedRangeRef *rangeReference;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithRangeRef:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (id)initWithCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (id)p_stringByUnescapingQuotedStringWithPossibleDollarPrefix:(id)a0 partial:(char)a1;
- (id)referenceTextForAutocompleteWithCalculationEngine:(id)a0 contextSheetName:(id)a1 preserveFlags:(struct TSUPreserveFlags { unsigned char x0; })a2 inputString:(id)a3 inputStringIsComplete:(char)a4;
- (id)referenceTextForAutocompleteWithCalculationEngine:(id)a0 hostTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 preserveFlags:(struct TSUPreserveFlags { unsigned char x0; })a2 inputString:(id)a3 inputStringIsComplete:(char)a4;
- (id)referenceTextWithCalculationEngine:(id)a0 contextSheetName:(id)a1;
- (id)referenceTextWithCalculationEngine:(id)a0 hostTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;

@end
