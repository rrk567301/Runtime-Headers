@interface DMCMigrationHelper : NSObject

+ (BOOL)hasIncompleteMigration;
+ (id)_createStartMigrationRequestFailedErrorWithDEPResponse:(id)a0;
+ (id)_migrationConfigFilePath;
+ (BOOL)currentEnrollmentStateSupportsMigration;
+ (BOOL)hasPendingEnrollmentWithExistingCloudConfig:(id)a0;
+ (BOOL)isDeviceEligibleForMigrationWithExistingCloudConfig:(id)a0 outReason:(id *)a1;
+ (BOOL)isMigrationMandatoryWithPendingCloudConfig:(id)a0;
+ (BOOL)isMigrationNeededWithExistingCloudConfig:(id)a0 newCloudConfig:(id)a1;
+ (BOOL)isMigrationSupportedWithExistingCloudConfig:(id)a0 outReason:(id *)a1;
+ (BOOL)launchMigrationApplicationWithError:(id *)a0;
+ (void)makeEndMigrationRequestIfNeededWithCloudConfig:(id)a0 success:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (void)makeStartMigrationRequestWithCloudConfig:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setMigrationIncomplete:(BOOL)a0;
+ (void)setUserInititiatedMigration:(BOOL)a0;
+ (BOOL)userInititiatedMigration;

@end
