@class NSString, NSData, NSDate, NSNumber;

@interface SFProvisioningData : NSManagedObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *map;
@property (copy, nonatomic) NSNumber *tag;
@property (copy, nonatomic) NSDate *timeStamp;

+ (id)fetchRequest;
+ (id)entityName;

@end
