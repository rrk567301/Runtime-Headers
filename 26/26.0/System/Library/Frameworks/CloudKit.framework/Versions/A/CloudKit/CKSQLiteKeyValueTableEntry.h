@class NSString, NSUUID, NSData, NSDate, NSNumber;

@interface CKSQLiteKeyValueTableEntry : CKSQLiteTableEntry

@property (retain, nonatomic) NSNumber *rowid;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSNumber *number;
@property (retain, nonatomic) NSString *string;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSUUID *UUID;

+ (Class)tableClass;

- (void).cxx_destruct;

@end
