@class NSString, NSSet, IRRoomClassificationMO;

@interface IRRoomMO : NSManagedObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic, retain) NSSet *accessories;
@property (nonatomic, retain) IRRoomClassificationMO *classification;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (id)convert;

@end
