@class NSString, NSDictionary, ML3DatabaseStatement, ML3DatabaseConnection;

@interface ML3DatabaseResult : NSObject {
    ML3DatabaseStatement *_statement;
    ML3DatabaseConnection *_connection;
    NSDictionary *_columnNameIndexMap;
    unsigned long long _limitIndex;
}

@property (copy, nonatomic) NSString *limitProperty;
@property (nonatomic) long long limitValue;

- (id)stringValueForFirstRowAndColumn;
- (id)columnNameIndexMap;
- (id)init;
- (unsigned long long)indexForColumnName:(id)a0;
- (id)initWithStatement:(id)a0 connection:(id)a1;
- (BOOL)hasAtLeastOneRow;
- (void)enumerateRowsWithBlock:(id /* block */)a0;
- (id)_statement;
- (id)rows;
- (void)setLimitProperty:(id)a0 limitValue:(long long)a1;
- (id)objectsInColumn:(unsigned long long)a0;
- (long long)int64ValueForFirstRowAndColumn;
- (void).cxx_destruct;
- (id)objectForFirstRowAndColumn;

@end
