@class NSString, NSDictionary, ML3DatabaseStatement, ML3DatabaseConnection;

@interface ML3DatabaseResult : NSObject {
    ML3DatabaseStatement *_statement;
    ML3DatabaseConnection *_connection;
    NSDictionary *_columnNameIndexMap;
    unsigned long long _limitIndex;
}

@property (copy, nonatomic) NSString *limitProperty;
@property (nonatomic) long long limitValue;

- (unsigned long long)indexForColumnName:(id)a0;
- (id)_statement;
- (long long)int64ValueForFirstRowAndColumn;
- (id)rows;
- (id)initWithStatement:(id)a0 connection:(id)a1;
- (id)columnNameIndexMap;
- (BOOL)hasAtLeastOneRow;
- (id)objectsInColumn:(unsigned long long)a0;
- (void)enumerateRowsWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setLimitProperty:(id)a0 limitValue:(long long)a1;
- (id)objectForFirstRowAndColumn;
- (id)init;
- (id)stringValueForFirstRowAndColumn;

@end
