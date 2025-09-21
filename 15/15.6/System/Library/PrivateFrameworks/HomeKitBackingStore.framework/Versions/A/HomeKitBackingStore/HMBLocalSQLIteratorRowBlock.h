@interface HMBLocalSQLIteratorRowBlock : HMBSQLQueryIterator

@property (readonly, nonatomic) int zoneRowBindOffset;
@property (readonly, nonatomic, getter=isAscending) char ascending;
@property (readonly, nonatomic) unsigned long long zoneRow;

- (char)bindPropertiesToStatement:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (id)fetchRowFromStatement:(struct sqlite3_stmt { } *)a0 skip:(char *)a1 updatedSequence:(unsigned long long *)a2 error:(id *)a3;
- (id)initWithSQLContext:(id)a0 zoneRow:(unsigned long long)a1 statement:(id)a2 isAscending:(char)a3;

@end
