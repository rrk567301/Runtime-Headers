@interface MDMManagedMediaReader : NSObject

+ (id)_metadataByBundleIDExcludeDDMApps:(char)a0;
+ (id)attributesByAppID;
+ (id)attributesByAppIDExcludeDDMApps:(char)a0;
+ (id)managedAppIDs;
+ (id)managedAppIDsExcludeDDMApps:(char)a0;
+ (id)managedAppIDsWithFlags:(unsigned long long)a0;
+ (id)managedAppIDsWithFlags:(unsigned long long)a0 excludeDDMApps:(char)a1;
+ (id)managedBooks;

@end
