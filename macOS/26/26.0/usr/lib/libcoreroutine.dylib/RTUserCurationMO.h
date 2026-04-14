@class NSUUID, RTMapItemMO, NSString, NSDate, NSData, RTDeviceMO;

@interface RTUserCurationMO : RTCloudManagedObject

@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSDate *submissionDate;
@property (copy, nonatomic) NSDate *visitEntryDate;
@property (copy, nonatomic) NSDate *visitExitDate;
@property (retain, nonatomic) NSUUID *visitIdentifier;
@property (retain, nonatomic) RTMapItemMO *originalLabel;
@property (retain, nonatomic) RTMapItemMO *curatedLabel;
@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (copy, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) RTDeviceMO *device;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) long long flags;

+ (id)fetchRequest;
+ (id)managedObjectWithUserCuration:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithUserCuration:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;

@end
