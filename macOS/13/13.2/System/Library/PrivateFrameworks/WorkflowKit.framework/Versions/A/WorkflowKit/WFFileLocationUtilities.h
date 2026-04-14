@interface WFFileLocationUtilities : NSObject

+ (id)itemForURL:(id)a0 error:(id *)a1;
+ (id)downloadsDirectory;
+ (id)documentsDirectory;
+ (void)fetchItemWithIdentifier:(id)a0 domainIdentifier:(id)a1 completionHandler:(id /* block */)a2;
+ (id)fetchRootItemURLForDomainWithID:(id)a0;
+ (id)parentItemsForItem:(id)a0;
+ (id)rootItemForItem:(id)a0;
+ (id)bundleIdentifierForItem:(id)a0;
+ (id)documentsURLForApplicationContainerBundleID:(id)a0;
+ (id)desktopDirectory;
+ (id)iCloudDesktopDirectory;
+ (id)iCloudDocumentsDirectory;
+ (id)iCloudDownloadsDirectory;
+ (id)mobileDocumentsDirectory;
+ (BOOL)isFileURL:(id)a0 withParentItems:(id)a1 insideFolderType:(unsigned long long)a2;

@end
