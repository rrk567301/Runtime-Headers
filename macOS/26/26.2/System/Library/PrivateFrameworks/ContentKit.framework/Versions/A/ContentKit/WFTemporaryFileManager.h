@interface WFTemporaryFileManager : NSObject

+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (void)configureBackupFlagAtURL:(id)a0;
+ (void)configureFileProtectionAtPath:(id)a0;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1;
+ (id)createSharedTemporaryDirectoryWithFilename:(id)a0;
+ (BOOL)isTemporaryFile:(id)a0;
+ (id)createSharedTemporaryFileWithFilename:(id)a0;
+ (void)setUpDirectories;
+ (id)proposedTemporaryFileURLForFilename:(id)a0;
+ (id)sharedShortcutsAppGroupDirectoryURL;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0;
+ (id)createTemporaryDirectoryWithFilename:(id)a0 inDirectory:(id)a1;
+ (void)configureBackupFlagIfNecessary;
+ (id)appGroupIdentifier;
+ (id)createTemporaryFileWithFilename:(id)a0 inDirectory:(id)a1;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1;
+ (id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)a0 error:(id *)a1;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (id)topLevelTemporaryDirectoryURL;
+ (void)markDirectoryAsPurgeableAtURL:(id)a0;
+ (id)proposedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (id)temporaryDirectoryURL;
+ (id)createTemporaryFileWithFilename:(id)a0;
+ (id)createUniqueDirectoryInDirectory:(id)a0;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (id)sharedTemporaryDirectoryURL;
+ (id)sharedAppGroupDirectoryURL;
+ (void)configureTemporaryDirectoryProtectionIfNecessary;
+ (void)clearTemporaryFiles;
+ (id)createTemporaryDirectoryWithFilename:(id)a0;
+ (void)createSharedDirectoryIfNecessary;

@end
