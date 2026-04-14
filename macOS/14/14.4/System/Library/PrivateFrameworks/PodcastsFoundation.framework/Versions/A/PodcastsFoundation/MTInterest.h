@class NSDate;

@interface MTInterest : NSManagedObject

@property (nonatomic) long long adamID;
@property (nonatomic) double interestValue;
@property (nonatomic, copy) NSDate *lastUpdatedDate;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
