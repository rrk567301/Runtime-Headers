@interface MDMManagedMediaReader : NSObject

+ (id)managedAppIDsWithFlags:(unsigned long long)a0 excludeDDMApps:(BOOL)a1;
+ (id)managedAppIDsExcludeDDMApps:(BOOL)a0;
+ (id)managedBooks;
+ (id)_metadataByBundleIDExcludeDDMApps:(BOOL)a0;
+ (id)managedAppIDsWithFlags:(unsigned long long)a0;
+ (id)attributesByAppID;
+ (id)managedAppIDs;
+ (id)attributesByAppIDExcludeDDMApps:(BOOL)a0;

@end
