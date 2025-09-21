@class NSString, DRSRequestMO;

@interface DRSLogMO : NSManagedObject

@property (copy, nonatomic) NSString *path;
@property (nonatomic) long long size;
@property (nonatomic) char transferOwnership;
@property (retain, nonatomic) DRSRequestMO *parentRequest;

+ (id)fetchRequest;

@end
