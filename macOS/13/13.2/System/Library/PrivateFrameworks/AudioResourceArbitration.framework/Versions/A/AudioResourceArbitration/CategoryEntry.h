@class NSString, NSOrderedSet, NSSet;

@interface CategoryEntry : NSManagedObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSOrderedSet *prioritizedAbstractRoutes;
@property (retain, nonatomic) NSSet *supportedModes;

+ (id)fetchRequest;

@end
