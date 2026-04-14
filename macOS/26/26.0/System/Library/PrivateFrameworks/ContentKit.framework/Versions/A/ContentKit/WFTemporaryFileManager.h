@interface WFTemporaryFileManager : NSObject

+ (id)createTemporaryDirectoryWithFilename:(id)a0;
+ (id)temporaryDirectoryURL;
+ (void)markDirectoryAsPurgeableAtURL:(id)a0;
+ (id)appGroupIdentifier;
+ (id)sharedAppGroupDirectoryURL;
+ (id)createSharedTemporaryDirectoryWithFilename:(id)a0;
+ (id)createTemporaryFileWithFilename:(id)a0;
+ (void)configureBackupFlagAtURL:(id)a0;
+ (id)sharedTemporaryDirectoryURL;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1;
+ (id)createTemporaryFileWithFilename:(id)a0 inDirectory:(id)a1;
+ (id)proposedTemporaryFileURLForFilename:(id)a0;
+ (void)clearTemporaryFiles;
+ (void)configureTemporaryDirectoryProtectionIfNecessary;
+ (id)sharedShortcutsAppGroupDirectoryURL;
+ (void)setUpDirectories;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (id)proposedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (id)topLevelTemporaryDirectoryURL;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1;
+ (id)createUniqueDirectoryInDirectory:(id)a0;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (id)createSharedTemporaryFileWithFilename:(id)a0;
+ (BOOL)isTemporaryFile:(id)a0;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (id)createTemporaryDirectoryWithFilename:(id)a0 inDirectory:(id)a1;
+ (void)configureFileProtectionAtPath:(id)a0;
+ (void)createSharedDirectoryIfNecessary;
+ (id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)a0 error:(id *)a1;
+ (void)configureBackupFlagIfNecessary;

@end
