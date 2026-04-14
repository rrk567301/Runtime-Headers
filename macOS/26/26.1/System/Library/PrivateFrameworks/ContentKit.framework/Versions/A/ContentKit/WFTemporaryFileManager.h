@interface WFTemporaryFileManager : NSObject

+ (void)configureFileProtectionAtPath:(id)a0;
+ (id)temporaryDirectoryURL;
+ (void)markDirectoryAsPurgeableAtURL:(id)a0;
+ (id)sharedShortcutsAppGroupDirectoryURL;
+ (id)topLevelTemporaryDirectoryURL;
+ (id)proposedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (id)appGroupIdentifier;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (id)createUniqueDirectoryInDirectory:(id)a0;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (void)clearTemporaryFiles;
+ (id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)a0 error:(id *)a1;
+ (void)createSharedDirectoryIfNecessary;
+ (id)createSharedTemporaryFileWithFilename:(id)a0;
+ (void)configureBackupFlagAtURL:(id)a0;
+ (void)configureTemporaryDirectoryProtectionIfNecessary;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1;
+ (id)createTemporaryFileWithFilename:(id)a0 inDirectory:(id)a1;
+ (id)createTemporaryDirectoryWithFilename:(id)a0;
+ (void)configureBackupFlagIfNecessary;
+ (id)createTemporaryFileWithFilename:(id)a0;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (BOOL)isTemporaryFile:(id)a0;
+ (id)createTemporaryDirectoryWithFilename:(id)a0 inDirectory:(id)a1;
+ (id)sharedAppGroupDirectoryURL;
+ (id)sharedTemporaryDirectoryURL;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1;
+ (void)setUpDirectories;
+ (id)proposedTemporaryFileURLForFilename:(id)a0;
+ (id)createSharedTemporaryDirectoryWithFilename:(id)a0;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0;

@end
