@class NSUUID, NSString, HMCDHomeModel;

@interface HMCDUserModel : NSManagedObject

@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic, retain) HMCDHomeModel *home;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
