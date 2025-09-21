@class NSString, NSNumber, NSDate;

@interface FamilyCircle.FamilySettingsValueEntity : NSManagedObject

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, retain) NSNumber *boolValue;
@property (nonatomic, retain) NSNumber *doubleValue;
@property (nonatomic, retain) NSNumber *intValue;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSDate *updatedAt;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
