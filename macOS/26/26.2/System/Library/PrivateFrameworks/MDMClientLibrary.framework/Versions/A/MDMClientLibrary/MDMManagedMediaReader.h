@interface MDMManagedMediaReader : NSObject

+ (id)managedBooks;
+ (id)_metadataByBundleIDExcludeDDMApps:(BOOL)a0;
+ (id)managedAppIDs;
+ (id)attributesByAppID;
+ (id)managedAppIDsExcludeDDMApps:(BOOL)a0;
+ (id)attributesByAppIDExcludeDDMApps:(BOOL)a0;
+ (id)managedAppIDsWithFlags:(unsigned long long)a0;
+ (id)managedAppIDsWithFlags:(unsigned long long)a0 excludeDDMApps:(BOOL)a1;

@end
