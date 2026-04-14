@class NSData, NSString;

@interface SyncDataMO : NSManagedObject

@property (nonatomic, copy) NSData *metadata;
@property (nonatomic, copy) NSString *modelVersion;
@property (nonatomic, copy) NSData *statedata;
@property (nonatomic, copy) NSString *userId;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
