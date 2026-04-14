@interface MDMManagedMediaReader : NSObject

+ (id)managedAppIDsWithFlags:(unsigned long long)a0 excludeDDMApps:(BOOL)a1;
+ (id)_metadataByBundleIDExcludeDDMApps:(BOOL)a0;
+ (id)attributesByAppIDExcludeDDMApps:(BOOL)a0;
+ (id)managedAppIDsWithFlags:(unsigned long long)a0;
+ (id)attributesByAppID;
+ (id)managedBooks;
+ (id)managedAppIDs;
+ (id)managedAppIDsExcludeDDMApps:(BOOL)a0;

@end
