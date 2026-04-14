@class STCoreOrganization;

@interface STScreenTimeSettings : NSManagedObject

@property (nonatomic) BOOL screenTimeEnabled;
@property (nonatomic) BOOL cloudSyncEnabled;
@property (retain, nonatomic) STCoreOrganization *currentOrganization;
@property (nonatomic) BOOL familySetupComplete;

+ (id)fetchScreenTimeSettingsInContext:(id)a0 error:(id *)a1;
+ (id)fetchRequest;

- (BOOL)_validateNumberOfObjects:(id)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (BOOL)_validateCurrentOrganization:(id)a0;
- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForDelete:(id *)a0;

@end
