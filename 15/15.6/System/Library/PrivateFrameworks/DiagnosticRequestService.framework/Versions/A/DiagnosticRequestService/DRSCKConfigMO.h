@interface DRSCKConfigMO : NSManagedObject

@property (nonatomic) short containerEnvironment;
@property (nonatomic) char overridesDefault;
@property (nonatomic) short rapidEnvironment;

+ (id)fetchRequest;

@end
