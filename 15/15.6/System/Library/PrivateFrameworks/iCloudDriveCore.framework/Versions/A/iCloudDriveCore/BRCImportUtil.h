@interface BRCImportUtil : NSObject

+ (void)forceIngestionForItemID:(id)a0 completionHandler:(id /* block */)a1;
+ (void)forceLatestVersionOnDiskForItemID:(id)a0 completionHandler:(id /* block */)a1;
+ (void)reimportItemsBelowItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (char)isFileNameIgnoredForSync:(id)a0 isRegFile:(char)a1;
+ (char)reimportItemsBelowItemWithIdentifier:(id)a0 error:(id *)a1;
+ (void)requestModificationOfItemIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (char)shouldFileIDBeIgnoredAsNonMigrated:(id)a0 docID:(id)a1 deviceID:(id)a2 isRegFile:(char)a3 rowid:(id)a4 outItemURL:(id *)a5 isBusyDate:(char *)a6 isIgnoredFromSync:(char *)a7;

@end
