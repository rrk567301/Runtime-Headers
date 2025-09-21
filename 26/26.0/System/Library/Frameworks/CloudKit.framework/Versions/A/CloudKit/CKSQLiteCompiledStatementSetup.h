@class NSString, NSMutableString, NSPredicate, NSArray, NSNumber;

@interface CKSQLiteCompiledStatementSetup : NSObject {
    NSString *_sql;
    NSPredicate *_wherePredicate;
    NSMutableString *_orderBySQL;
    NSNumber *_limit;
    NSNumber *_offset;
    NSArray *_returnProperties;
}

- (void).cxx_destruct;

@end
