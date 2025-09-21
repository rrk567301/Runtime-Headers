@class NSString, NSDate;

@interface WFCoreDataFileState : NSManagedObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSString *path;

+ (id)fetchRequest;

@end
