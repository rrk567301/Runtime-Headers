@interface WFTemporaryFileManager : NSObject

+ (void)configureTemporaryDirectoryProtectionIfNecessary;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (void)clearTemporaryFiles;
+ (void)setUpDirectories;
+ (id)createUniqueDirectoryInDirectory:(id)a0;
+ (id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)a0 error:(id *)a1;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1;
+ (id)sharedShortcutsAppGroupDirectoryURL;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1;
+ (id)proposedTemporaryFileURLForFilename:(id)a0;
+ (id)sharedAppGroupDirectoryURL;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0;
+ (id)proposedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (id)createTemporaryDirectoryWithFilename:(id)a0;
+ (void)configureBackupFlagAtURL:(id)a0;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (void)configureBackupFlagIfNecessary;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (void)createSharedDirectoryIfNecessary;
+ (id)createTemporaryFileWithFilename:(id)a0;
+ (id)topLevelTemporaryDirectoryURL;
+ (id)createTemporaryDirectoryWithFilename:(id)a0 inDirectory:(id)a1;
+ (void)markDirectoryAsPurgeableAtURL:(id)a0;
+ (id)temporaryDirectoryURL;
+ (id)createSharedTemporaryDirectoryWithFilename:(id)a0;
+ (void)configureFileProtectionAtPath:(id)a0;
+ (id)createTemporaryFileWithFilename:(id)a0 inDirectory:(id)a1;
+ (id)createSharedTemporaryFileWithFilename:(id)a0;
+ (id)appGroupIdentifier;
+ (BOOL)isTemporaryFile:(id)a0;
+ (id)sharedTemporaryDirectoryURL;

@end
