@interface MDMManagedMediaReader : NSObject

+ (id)managedBooks;
+ (id)managedAppIDsWithFlags:(unsigned long long)a0;
+ (id)attributesByAppID;
+ (id)managedAppIDsWithFlags:(unsigned long long)a0 excludeDDMApps:(BOOL)a1;
+ (id)managedAppIDs;
+ (id)attributesByAppIDExcludeDDMApps:(BOOL)a0;
+ (id)managedAppIDsExcludeDDMApps:(BOOL)a0;
+ (id)_metadataByBundleIDExcludeDDMApps:(BOOL)a0;

@end
