@class NSString;

@interface _DPOBHRecordMO : NSManagedObject

@property (nonatomic) double creationDate;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) char submitted;
@property (nonatomic) long long reportVersion;

@end
