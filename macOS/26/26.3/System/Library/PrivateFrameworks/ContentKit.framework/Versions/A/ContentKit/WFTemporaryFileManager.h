@interface WFTemporaryFileManager : NSObject

+ (void)configureBackupFlagIfNecessary;
+ (id)temporaryDirectoryURL;
+ (id)sharedShortcutsAppGroupDirectoryURL;
+ (id)createSharedTemporaryFileWithFilename:(id)a0;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (id)topLevelTemporaryDirectoryURL;
+ (void)createSharedDirectoryIfNecessary;
+ (void)configureTemporaryDirectoryProtectionIfNecessary;
+ (id)createTemporaryFileWithFilename:(id)a0 inDirectory:(id)a1;
+ (id)createTemporaryFileWithFilename:(id)a0;
+ (void)markDirectoryAsPurgeableAtURL:(id)a0;
+ (id)sharedAppGroupDirectoryURL;
+ (id)proposedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (id)createTemporaryDirectoryWithFilename:(id)a0 inDirectory:(id)a1;
+ (BOOL)isTemporaryFile:(id)a0;
+ (id)sharedTemporaryDirectoryURL;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (id)appGroupIdentifier;
+ (void)configureBackupFlagAtURL:(id)a0;
+ (void)configureFileProtectionAtPath:(id)a0;
+ (void)setUpDirectories;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0;
+ (id)createUniqueDirectoryInDirectory:(id)a0;
+ (id)proposedTemporaryFileURLForFilename:(id)a0;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (id)createTemporaryDirectoryWithFilename:(id)a0;
+ (id)createSharedTemporaryDirectoryWithFilename:(id)a0;
+ (id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)a0 error:(id *)a1;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1;
+ (void)clearTemporaryFiles;

@end
