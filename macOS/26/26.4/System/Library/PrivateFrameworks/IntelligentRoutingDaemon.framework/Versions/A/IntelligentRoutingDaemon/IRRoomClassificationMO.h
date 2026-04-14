@class NSString, IRRoomMO;

@interface IRRoomClassificationMO : NSManagedObject

@property (nonatomic) double confidence;
@property (nonatomic, copy) NSString *roomType;
@property (nonatomic, retain) IRRoomMO *room;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
