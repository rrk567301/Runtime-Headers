@class NSString;

@interface AKCDAuthorization : NSManagedObject

@property (nonatomic) long long status;
@property (nonatomic, copy) NSString *bundleID;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
