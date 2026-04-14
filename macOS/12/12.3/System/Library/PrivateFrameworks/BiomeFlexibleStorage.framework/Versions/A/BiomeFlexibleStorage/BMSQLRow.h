@class NSMutableArray;

@interface BMSQLRow : NSObject <BMRow>

@property (retain, nonatomic) NSMutableArray *allValues;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)values;
- (long long)columnCount;
- (id)initWithValues:(id)a0;
- (id)valueAtIdx:(unsigned long long)a0;

@end
