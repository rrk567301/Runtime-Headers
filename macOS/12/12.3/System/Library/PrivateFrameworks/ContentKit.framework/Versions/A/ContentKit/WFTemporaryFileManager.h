@interface WFTemporaryFileManager : NSObject

+ (id)temporaryDirectoryURL;
+ (id)proposedTemporaryFileURLForFilename:(id)a0;
+ (id)createTemporaryFileWithFilename:(id)a0;
+ (id)proposedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (id)appGroupIdentifier;
+ (id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)a0 error:(id *)a1;
+ (id)sharedAppGroupDirectoryURL;
+ (id)sharedTemporaryDirectoryURL;
+ (void)configureFileProtectionAtPath:(id)a0;
+ (void)configureBackupFlagAtURL:(id)a0;
+ (void)createSharedDirectoryIfNecessary;
+ (void)createProcessTempDirectoryIfNecessary;
+ (void)configureTemporaryDirectoryProtectionIfNecessary;
+ (void)configureBackupFlagIfNecessary;
+ (id)createUniqueDirectoryInDirectory:(id)a0;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (id)createTemporaryDirectoryWithFilename:(id)a0 inDirectory:(id)a1;
+ (id)createTemporaryFileWithFilename:(id)a0 inDirectory:(id)a1;
+ (void)setUpDirectories;
+ (void)clearTemporaryFiles;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1;
+ (id)createSharedTemporaryDirectoryWithFilename:(id)a0;
+ (id)createTemporaryDirectoryWithFilename:(id)a0;
+ (id)createSharedTemporaryFileWithFilename:(id)a0;

@end
