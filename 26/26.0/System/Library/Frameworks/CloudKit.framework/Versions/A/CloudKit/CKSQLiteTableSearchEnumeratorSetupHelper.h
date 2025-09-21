@class NSArray, NSPredicate, NSNumber, NSMutableArray;

@interface CKSQLiteTableSearchEnumeratorSetupHelper : NSObject <CKSQLiteTableObjectMatchingSetup, CKSQLiteTablePredicateSetup> {
    NSMutableArray *_orderByProperties;
}

@property (retain, nonatomic) NSArray *fetchedProperties;
@property (retain, nonatomic) NSArray *searchProperties;
@property (retain, nonatomic) NSPredicate *searchPredicate;
@property (retain, nonatomic) NSNumber *limit;
@property (retain, nonatomic) NSNumber *offset;
@property (nonatomic) BOOL distinct;

- (void)setupStatement:(id)a0;
- (void)orderAscendingByProperty:(id)a0;
- (void)orderDescendingByProperty:(id)a0;
- (void).cxx_destruct;

@end
