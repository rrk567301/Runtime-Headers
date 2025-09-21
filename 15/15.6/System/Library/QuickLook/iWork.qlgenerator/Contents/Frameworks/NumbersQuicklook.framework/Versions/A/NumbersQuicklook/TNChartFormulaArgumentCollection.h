@class NSArray;

@interface TNChartFormulaArgumentCollection : NSObject <NSFastEnumeration, NSCopying, NSMutableCopying> {
    NSArray *_array;
}

@property (nonatomic) char storeBadRef;

+ (id)argumentCollectionFromFormula:(id)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 usingCalcEngine:(id)a2;
+ (id)argumentCollectionFromFormula:(id)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 usingCalcEngine:(id)a2 storeBadRef:(char)a3;
+ (id)evalArgumentCollectionFromFormula:(id)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 usingCalcEngine:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithArray:(id)a0;
- (unsigned long long)components;
- (id)elementAtIndex:(unsigned long long)a0;
- (id)elementEnumerator;
- (id)firstElement;
- (id)lastElement;
- (id)initWithFormula:(id)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 usingCalcEngine:(id)a2;
- (id)initWithFormula:(id)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 usingCalcEngine:(id)a2 storeBadRef:(char)a3;
- (id)reverseElementEnumerator;
- (id)wrappedChartFormulaWithID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; })a0 andLocale:(id)a1;

@end
