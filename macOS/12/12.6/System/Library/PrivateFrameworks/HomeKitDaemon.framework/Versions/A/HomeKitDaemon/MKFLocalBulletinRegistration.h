@class NSUUID, NSSet;

@interface MKFLocalBulletinRegistration : HMDManagedObject

@property (copy, nonatomic) NSUUID *deviceIdentifier;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSSet *conditions;

+ (id)fetchRequest;

@end
