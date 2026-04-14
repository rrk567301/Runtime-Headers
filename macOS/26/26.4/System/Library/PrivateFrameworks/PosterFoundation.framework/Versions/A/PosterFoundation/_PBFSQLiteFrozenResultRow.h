@class NSArray;

@interface _PBFSQLiteFrozenResultRow : PFSQLiteResultRow {
    unsigned long long _count;
    NSArray *_frozenColumnNames;
    NSArray *_frozenObjects;
    NSArray *_frozenIntegers;
    NSArray *_frozenDoubles;
    NSArray *_frozenStrings;
    NSArray *_frozenDatas;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (id)dataAtIndex:(unsigned long long)a0;
- (id)keyAtIndex:(unsigned long long)a0;
- (long long)integerAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (double)doubleAtIndex:(unsigned long long)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (id)stringAtIndex:(unsigned long long)a0;

@end
