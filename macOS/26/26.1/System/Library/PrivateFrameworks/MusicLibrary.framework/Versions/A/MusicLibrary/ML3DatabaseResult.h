@class NSString, NSDictionary, ML3DatabaseStatement, ML3DatabaseConnection;

@interface ML3DatabaseResult : NSObject {
    ML3DatabaseStatement *_statement;
    ML3DatabaseConnection *_connection;
    NSDictionary *_columnNameIndexMap;
    unsigned long long _limitIndex;
}

@property (copy, nonatomic) NSString *limitProperty;
@property (nonatomic) long long limitValue;

- (id)objectsInColumn:(unsigned long long)a0;
- (id)rows;
- (void)setLimitProperty:(id)a0 limitValue:(long long)a1;
- (long long)int64ValueForFirstRowAndColumn;
- (BOOL)hasAtLeastOneRow;
- (void)enumerateRowsWithBlock:(id /* block */)a0;
- (id)_statement;
- (id)initWithStatement:(id)a0 connection:(id)a1;
- (id)objectForFirstRowAndColumn;
- (id)columnNameIndexMap;
- (unsigned long long)indexForColumnName:(id)a0;
- (void).cxx_destruct;
- (id)stringValueForFirstRowAndColumn;
- (id)init;

@end
