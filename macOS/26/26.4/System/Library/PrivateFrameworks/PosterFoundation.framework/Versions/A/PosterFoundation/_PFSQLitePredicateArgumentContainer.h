@class PFSQLiteColumn;

@interface _PFSQLitePredicateArgumentContainer : NSObject

@property (retain, nonatomic) id arg;
@property (retain, nonatomic) PFSQLiteColumn *column;
@property (nonatomic) unsigned long long operator;

+ (id)arg:(id)a0 column:(id)a1 operator:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)description;

@end
