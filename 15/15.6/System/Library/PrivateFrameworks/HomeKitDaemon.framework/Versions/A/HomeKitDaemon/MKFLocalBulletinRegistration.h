@class NSSet;

@interface MKFLocalBulletinRegistration : HMDManagedObject

@property (nonatomic) char enabled;
@property (retain, nonatomic) NSSet *conditions;

+ (id)fetchRequest;

@end
