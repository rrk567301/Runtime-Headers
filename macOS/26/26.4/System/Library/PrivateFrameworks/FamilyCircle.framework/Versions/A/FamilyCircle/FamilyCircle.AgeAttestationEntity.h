@class NSString, NSDate;

@interface FamilyCircle.AgeAttestationEntity : NSManagedObject

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, copy) NSDate *invalidatedAt;
@property (nonatomic) int lowerbound;
@property (nonatomic) int response;
@property (nonatomic) int responseType;
@property (nonatomic) int upperbound;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
