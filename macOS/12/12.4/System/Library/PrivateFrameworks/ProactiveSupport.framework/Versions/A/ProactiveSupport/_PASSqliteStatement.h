@class _PASSQLColumnMapping;

@interface _PASSqliteStatement : NSObject <NSCopying> {
    _PASSQLColumnMapping *_columnMapping;
}

@property (readonly, nonatomic) struct sqlite3_stmt { } *stmt;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (int)bindNamedParamToNull:(const char *)a0;
- (int)bindNamedParam:(const char *)a0 toInt64:(long long)a1;
- (int)bindNamedParam:(const char *)a0 toDouble:(double)a1;
- (int)bindParam:(int)a0 toNSIndexSet:(id)a1;
- (int)bindParam:(int)a0 toNSArray:(id)a1;
- (int)bindParam:(int)a0 toNSSet:(id)a1;
- (int)bindParam:(int)a0 toNSOrderedSet:(id)a1;
- (int)bindParam:(int)a0 toNSDictionary:(id)a1;
- (int)bindParam:(int)a0 toBlock:(id /* block */)a1;
- (int)bindParamToNull:(int)a0;
- (int)bindParam:(int)a0 toInt64:(long long)a1;
- (int)bindParam:(int)a0 toDouble:(double)a1;
- (int)_bindParam:(int)a0 toObjcObject:(id)a1 sqliteMethodName:(const char *)a2;
- (BOOL)isColumnNull:(int)a0;
- (long long)getInt64ForColumn:(int)a0;
- (double)getDoubleForColumn:(int)a0;
- (id)getNSStringForColumn:(int)a0;
- (id)getNSDataForColumn:(int)a0;
- (long long)getIntegerForColumn:(int)a0;
- (id)getInt64AsNSNumberForColumn:(int)a0;
- (id)getDoubleAsNSNumberForColumn:(int)a0;
- (id)initWithStatementPointer:(struct sqlite3_stmt { } *)a0;
- (void)prepareForRowDeserialization;
- (int)bindNamedParam:(const char *)a0 toNSString:(id)a1;
- (int)bindNamedParam:(const char *)a0 toNSData:(id)a1;
- (int)bindNamedParam:(const char *)a0 toInteger:(long long)a1;
- (int)bindNamedParam:(const char *)a0 toInt64AsNSNumber:(id)a1;
- (int)bindNamedParam:(const char *)a0 toDoubleAsNSNumber:(id)a1;
- (int)bindNamedParam:(const char *)a0 toNSIndexSet:(id)a1;
- (int)bindNamedParam:(const char *)a0 toNSArray:(id)a1;
- (int)bindNamedParam:(const char *)a0 toNSSet:(id)a1;
- (int)bindNamedParam:(const char *)a0 toNSOrderedSet:(id)a1;
- (int)bindNamedParam:(const char *)a0 toNSDictionary:(id)a1;
- (int)bindNamedParam:(const char *)a0 toBlock:(id /* block */)a1;
- (int)bindParam:(int)a0 toNSString:(id)a1;
- (int)bindParam:(int)a0 toNSData:(id)a1;
- (int)bindParam:(int)a0 toInteger:(long long)a1;
- (int)bindParam:(int)a0 toInt64AsNSNumber:(id)a1;
- (int)bindParam:(int)a0 toDoubleAsNSNumber:(id)a1;
- (id)getNSStringForColumnName:(const char *)a0 table:(const char *)a1;
- (id)getNSDataForColumnName:(const char *)a0 table:(const char *)a1;
- (long long)getIntegerForColumnName:(const char *)a0 table:(const char *)a1;
- (long long)getInt64ForColumnName:(const char *)a0 table:(const char *)a1;
- (id)getInt64AsNSNumberForColumnName:(const char *)a0 table:(const char *)a1;
- (double)getDoubleForColumnName:(const char *)a0 table:(const char *)a1;
- (id)getDoubleAsNSNumberForColumnName:(const char *)a0 table:(const char *)a1;
- (BOOL)isNullForColumnName:(const char *)a0 table:(const char *)a1;
- (id)getNSStringForColumnAlias:(const char *)a0;
- (id)getNSDataForColumnAlias:(const char *)a0;
- (long long)getIntegerForColumnAlias:(const char *)a0;
- (long long)getInt64ForColumnAlias:(const char *)a0;
- (id)getInt64AsNSNumberForColumnAlias:(const char *)a0;
- (double)getDoubleForColumnAlias:(const char *)a0;
- (id)getDoubleAsNSNumberForColumnAlias:(const char *)a0;
- (BOOL)isNullForColumnAlias:(const char *)a0;

@end
