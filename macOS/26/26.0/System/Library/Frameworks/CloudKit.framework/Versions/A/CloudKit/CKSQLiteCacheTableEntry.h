@class NSDate;

@interface CKSQLiteCacheTableEntry : CKSQLiteTableEntry

@property (retain, nonatomic) NSDate *expirationDate;

+ (Class)tableClass;

- (void).cxx_destruct;

@end
