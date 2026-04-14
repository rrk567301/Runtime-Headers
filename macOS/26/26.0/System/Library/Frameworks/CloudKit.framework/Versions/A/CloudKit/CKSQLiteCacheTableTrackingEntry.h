@class NSNumber, NSDate;

@interface CKSQLiteCacheTableTrackingEntry : CKSQLiteTableEntry

@property (copy, nonatomic) NSNumber *tableID;
@property (retain, nonatomic) NSNumber *entryCount;
@property (retain, nonatomic) NSNumber *dataSize;
@property (retain, nonatomic) NSDate *oldestExpireDate;

+ (Class)tableClass;

- (void).cxx_destruct;

@end
