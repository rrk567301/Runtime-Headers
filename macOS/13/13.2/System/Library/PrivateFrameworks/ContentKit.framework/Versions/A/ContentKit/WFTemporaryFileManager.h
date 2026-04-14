@interface WFTemporaryFileManager : NSObject

+ (id)temporaryDirectoryURL;
+ (id)appGroupIdentifier;
+ (id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)a0 error:(id *)a1;
+ (id)sharedAppGroupDirectoryURL;
+ (id)protectedTemporaryDirectoryParentURL;
+ (id)protectedTemporaryDirectoryURL;
+ (id)sharedTemporaryDirectoryURL;
+ (void)createProcessTempDirectoryIfNecessary;
+ (void)createSharedDirectoryIfNecessary;
+ (void)configureTemporaryDirectoryProtectionIfNecessary;
+ (void)configureBackupFlagIfNecessary;
+ (void)configureFileProtectionAtPath:(id)a0;
+ (void)configureBackupFlagAtURL:(id)a0;
+ (void)setUpDirectories;
+ (void)markDirectoryAsPurgeableAtURL:(id)a0;
+ (void)clearTemporaryFiles;
+ (id)createUniqueDirectoryInDirectory:(id)a0;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (id)proposedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (id)proposedProtectedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (id)proposedTemporaryFileURLForFilename:(id)a0;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0;
+ (id)proposedProtectedTemporaryFileURLForFilename:(id)a0;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1;
+ (id)createTemporaryDirectoryWithFilename:(id)a0 inDirectory:(id)a1;
+ (id)createSharedTemporaryDirectoryWithFilename:(id)a0;
+ (id)createTemporaryDirectoryWithFilename:(id)a0;
+ (id)createProtectedTemporaryDirectoryWithFilename:(id)a0;
+ (id)createTemporaryFileWithFilename:(id)a0 inDirectory:(id)a1;
+ (id)createTemporaryFileWithFilename:(id)a0;
+ (id)createProtectedTemporaryFileWithFilename:(id)a0;
+ (id)createSharedTemporaryFileWithFilename:(id)a0;

@end
