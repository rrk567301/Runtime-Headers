@class NSNumber, NSString;

@interface CKSQLiteUniquedStringTableEntry : CKSQLiteTableEntry

@property (retain, nonatomic) NSNumber *primaryKey;
@property (retain, nonatomic) NSString *string;

+ (Class)tableClass;

- (void).cxx_destruct;

@end
