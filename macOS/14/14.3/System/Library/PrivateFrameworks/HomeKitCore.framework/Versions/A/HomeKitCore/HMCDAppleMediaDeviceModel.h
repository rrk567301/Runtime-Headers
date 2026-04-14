@class NSUUID, NSString;

@interface HMCDAppleMediaDeviceModel : NSManagedObject

@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic) BOOL isCurrentDevice;
@property (nonatomic, copy) NSString *idsDestination;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
