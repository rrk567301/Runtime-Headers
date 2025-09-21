@class NSString;

@interface _DPBitValueRecordMO : NSManagedObject

@property (nonatomic) short clearBitValue;
@property (nonatomic) double creationDate;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *privateBitValueStr;
@property (nonatomic) long long reportVersion;
@property (nonatomic) char submitted;

+ (id)fetchRequest;

@end
