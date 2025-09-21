@class NSString, NSUUID, NSSet;

@interface NameConfiguration : NSManagedObject

@property (nonatomic, copy) NSString *humanReadableName;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSString *localeIdentifier;
@property (nonatomic, retain) NSSet *collectedEnrollments;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
