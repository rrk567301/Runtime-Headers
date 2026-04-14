@class NSUUID, NSString, HMCDHomeModel, HMCDRoomModel;

@interface HMCDAccessoryModel : NSManagedObject

@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) HMCDHomeModel *home;
@property (nonatomic, retain) HMCDRoomModel *room;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
