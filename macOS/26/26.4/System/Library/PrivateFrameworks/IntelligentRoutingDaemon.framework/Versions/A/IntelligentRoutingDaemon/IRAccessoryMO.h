@class NSString, IRRoomMO;

@interface IRAccessoryMO : NSManagedObject

@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) IRRoomMO *room;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
