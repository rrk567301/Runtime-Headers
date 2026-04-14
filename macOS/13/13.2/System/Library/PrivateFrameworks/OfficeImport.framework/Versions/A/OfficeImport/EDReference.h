@interface EDReference : NSObject <NSCopying> {
    struct EDAreaReference { int firstRow; int firstColumn; int lastRow; int lastColumn; } mAreaReference;
}

+ (id)reference;
+ (id)referenceWithFirstRow:(int)a0 lastRow:(int)a1 firstColumn:(int)a2 lastColumn:(int)a3;
+ (id)referenceWithAreaReference:(struct EDAreaReference { int x0; int x1; int x2; int x3; } *)a0;
+ (id)referenceWithReference:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLastColumn:(int)a0;
- (int)lastColumn;
- (id)initWithReference:(id)a0;
- (int)firstColumn;
- (int)firstRow;
- (void)setFirstRow:(int)a0;
- (void)setFirstColumn:(int)a0;
- (int)lastRow;
- (void)setLastRow:(int)a0;
- (void)unionWithFirstRow:(int)a0 lastRow:(int)a1 firstColumn:(int)a2 lastColumn:(int)a3;
- (void)unionWithRow:(int)a0 column:(int)a1;
- (id)initWithFirstRow:(int)a0 lastRow:(int)a1 firstColumn:(int)a2 lastColumn:(int)a3;
- (id)initWithAreaReference:(struct EDAreaReference { int x0; int x1; int x2; int x3; } *)a0;
- (BOOL)isEqualToReference:(id)a0;
- (struct EDAreaReference { int x0; int x1; int x2; int x3; })areaReference;
- (BOOL)containsRow:(int)a0 column:(int)a1;
- (BOOL)isCellReference;
- (BOOL)isRowReference;
- (BOOL)isColumnReference;
- (BOOL)isValidCellReference;
- (BOOL)isValidAreaReference;
- (unsigned long long)countOfCellsBeingReferenced;
- (BOOL)fullyAdjacentToReference:(id)a0;
- (void)unionWithReference:(id)a0;

@end
