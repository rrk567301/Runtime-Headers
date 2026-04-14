@interface AbstractRouteConnectionEntry : NSManagedObject

@property (nonatomic) int destinationPortType;
@property (nonatomic) int sourcePortType;

+ (id)fetchRequest;

@end
