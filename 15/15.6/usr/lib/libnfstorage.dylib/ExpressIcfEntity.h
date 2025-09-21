@class NSString;

@interface ExpressIcfEntity : NSManagedObject

@property (copy, nonatomic) NSString *aid;
@property (nonatomic) char expressEnabled;
@property (copy, nonatomic) NSString *passID;
@property (copy, nonatomic) NSString *type;

+ (id)fetchRequest;

@end
