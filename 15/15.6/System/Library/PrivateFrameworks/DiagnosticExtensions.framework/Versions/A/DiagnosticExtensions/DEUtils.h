@interface DEUtils : NSObject

+ (void)removeFile:(id)a0;
+ (char)copyFile:(id)a0 toDir:(id)a1;
+ (char)copyAllFilesFromDir:(id)a0 toDir:(id)a1;
+ (id)copyAndReturn:(id)a0 toDir:(id)a1;
+ (id)createDirectoryWithClassCDataProtection:(id)a0;
+ (id)enumeratorForAllItems:(id)a0;
+ (id)findAllItems:(id)a0 includeDirs:(char)a1;
+ (id)findAllfiles:(id)a0;
+ (unsigned long long)getDirectorySize:(id)a0;
+ (char)isValidDirectory:(id)a0;
+ (id)lsDir:(id)a0;
+ (id)lsDir:(id)a0 sorted:(char)a1;
+ (id)userLibraryDirectoryForApp:(id)a0;
+ (id)applicationSupportDirectoryForApp:(id)a0;
+ (id)componentsByRemovingComponentsBeforeComponent:(id)a0 sourceURL:(id)a1 keepingComponent:(char)a2;
+ (char)copyAllFilesFromDir:(id)a0 toDir:(id)a1 keepSourceDir:(char)a2;
+ (id)copyAndReturn:(id)a0 toDir:(id)a1 withNewFileName:(id)a2;
+ (id)copyItem:(id)a0 toDestinationDir:(id)a1 zipped:(char)a2;
+ (id)copyPath:(id)a0 toDestinationDir:(id)a1 zipped:(char)a2;
+ (id)copyPaths:(id)a0 toDestinationDir:(id)a1 withZipName:(id)a2;
+ (id)createUserOwnedDirectoryAtUrl:(id)a0;
+ (id)dirForTarGz:(id)a0;
+ (void)excludeFromBackup:(id)a0;
+ (id)findEntriesInDirectory:(id)a0 createdAfter:(id)a1 matchingPattern:(id)a2;
+ (unsigned long long)getFileSystemItemSize:(id)a0;
+ (id)moveItem:(id)a0 toDestinationDir:(id)a1;
+ (id)pathComponentsInURL:(id)a0 removingBaseURLComponents:(id)a1 keepingFirstComponent:(char)a2;
+ (id)processErrorResponse:(id)a0;
+ (id)tarGzForDirectoryUrl:(id)a0;
+ (id)tarGzForDirectoryUrl:(id)a0 validatesUrl:(char)a1;
+ (id)uniqueDateString;
+ (id)uniqueTemporaryDirectory;
+ (id)urlByRemovingComponentsBefore:(id)a0 source:(id)a1 keepComponent:(char)a2;

@end
