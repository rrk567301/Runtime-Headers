@class STCoreOrganization;

@interface STScreenTimeSettings : NSManagedObject

@property (nonatomic) char screenTimeEnabled;
@property (nonatomic) char cloudSyncEnabled;
@property (retain, nonatomic) STCoreOrganization *currentOrganization;
@property (nonatomic) char familySetupComplete;

+ (id)fetchRequest;
+ (id)fetchScreenTimeSettingsInContext:(id)a0 error:(id *)a1;

- (char)validateForDelete:(id *)a0;
- (char)validateForInsert:(id *)a0;
- (char)validateForUpdate:(id *)a0;
- (char)_validateCurrentOrganization:(id)a0;
- (char)_validateNumberOfObjects:(id)a0;

@end
