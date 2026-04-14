@class NSArray, NSDate;

@interface VUIndexCachedEntity : NSManagedObject

@property (nonatomic) BOOL isOverridden;
@property (nonatomic, retain) NSArray *keyObservations;
@property (nonatomic) long long label;
@property (nonatomic) long long selectedObservation;
@property (nonatomic, copy) NSDate *snapshotDate;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
