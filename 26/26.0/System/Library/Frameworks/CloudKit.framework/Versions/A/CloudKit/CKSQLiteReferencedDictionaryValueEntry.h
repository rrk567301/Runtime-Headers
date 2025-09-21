@class NSNumber, NSString;

@interface CKSQLiteReferencedDictionaryValueEntry : CKSQLiteTableEntry

@property (retain, nonatomic) NSNumber *primaryKey;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *value;

+ (Class)tableClass;

- (void).cxx_destruct;

@end
