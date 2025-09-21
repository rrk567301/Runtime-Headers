@class NSArray;

@interface ML3DatabaseCachedRow : ML3DatabaseRow {
    NSArray *_arrayRepresentation;
}

- (id)numberForColumnIndex:(unsigned long long)a0;
- (id)dataForColumnIndex:(unsigned long long)a0;
- (long long)int64ForColumnIndex:(unsigned long long)a0;
- (double)doubleForColumnIndex:(unsigned long long)a0;
- (id)dataForColumnName:(id)a0;
- (id)numberForColumnName:(id)a0;
- (const char *)cStringForColumnName:(id)a0;
- (long long)int64ForColumnName:(id)a0;
- (id)stringForColumnIndex:(unsigned long long)a0;
- (id)stringForColumnName:(id)a0;
- (id)initWithParentResult:(id)a0;
- (const char *)cStringForColumnIndex:(unsigned long long)a0;
- (id)arrayRepresentation;
- (id)valueForColumnName:(id)a0;
- (int)intForColumnIndex:(unsigned long long)a0;
- (int)intForColumnName:(id)a0;
- (void)getBlobBytes:(const void **)a0 outLength:(int *)a1 forColumnIndex:(unsigned long long)a2;
- (double)doubleForColumnName:(id)a0;
- (unsigned long long)columnCount;
- (id)dictionaryRepresentation;
- (id)valueForColumnIndex:(unsigned long long)a0;
- (void)getBlobBytes:(const void **)a0 outLength:(int *)a1 forColumnName:(id)a2;
- (id)initWithArray:(id)a0;
- (id)_numberOrZeroForColumnIndex:(unsigned long long)a0;
- (void).cxx_destruct;

@end
