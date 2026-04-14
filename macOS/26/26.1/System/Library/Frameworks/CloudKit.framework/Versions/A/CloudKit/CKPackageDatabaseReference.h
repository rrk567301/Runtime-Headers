@class CKPackageDatabase, NSDate, NSNumber, CKSQLitePackage;

@interface CKPackageDatabaseReference : CKSQLiteTableEntry

@property (retain, nonatomic) NSNumber *referenceID;
@property (retain, nonatomic) NSNumber *packageID;
@property (nonatomic) int referenceType;
@property (retain, nonatomic) NSDate *packageDBCreationDate;
@property (copy, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) CKSQLitePackage *sqlitePackage;
@property (retain, nonatomic) CKPackageDatabase *packageDB;

+ (Class)tableClass;

- (void)dealloc;
- (void).cxx_destruct;

@end
