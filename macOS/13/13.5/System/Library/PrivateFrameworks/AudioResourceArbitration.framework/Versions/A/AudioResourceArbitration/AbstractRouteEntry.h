@class NSSet;

@interface AbstractRouteEntry : NSManagedObject

@property (retain, nonatomic) NSSet *abstractRouteConnections;

+ (id)fetchRequest;

@end
