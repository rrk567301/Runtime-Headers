@interface MDMManagedMediaReader : NSObject

+ (id)attributesByAppID;
+ (id)managedAppIDsWithFlags:(unsigned long long)a0 excludeDDMApps:(BOOL)a1;
+ (id)managedAppIDsExcludeDDMApps:(BOOL)a0;
+ (id)managedAppIDsWithFlags:(unsigned long long)a0;
+ (id)managedBooks;
+ (id)managedAppIDs;
+ (id)_metadataByBundleIDExcludeDDMApps:(BOOL)a0;
+ (id)attributesByAppIDExcludeDDMApps:(BOOL)a0;

@end
