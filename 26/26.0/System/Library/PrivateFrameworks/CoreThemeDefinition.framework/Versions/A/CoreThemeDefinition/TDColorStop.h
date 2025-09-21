@class NSString, NSNumber;

@interface TDColorStop : NSManagedObject

@property (copy, nonatomic) NSString *colorName;
@property (copy, nonatomic) NSNumber *stop;

+ (id)fetchRequest;

@end
