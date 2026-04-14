@interface DELoggingPreferences : NSObject

+ (void)installLoggingProfile:(id)a0 sessionIdentifier:(id)a1 extensionIdentifier:(id)a2 error:(id *)a3;
+ (id)removeLoggingProfileForSessionIdentifier:(id)a0 extensionIdentifier:(id)a1 error:(id *)a2;
+ (id)loggingPayloadForURL:(id)a0 error:(id *)a1;
+ (id)combinedLoggingPayloadForURLs:(id)a0 error:(id *)a1;
+ (id)_subsystemPayloadForURL:(id)a0 error:(id *)a1;
+ (unsigned long long)numberOfManagedLoggingPreferences;
+ (id)managedLoggingProfilesDirectory;
+ (id)managedLoggingProfilesDirectoryForSessionIdentifier:(id)a0 createIfNeeded:(BOOL)a1 error:(id *)a2;

@end
