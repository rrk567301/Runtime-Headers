@class SandboxFileExtensionController, ResourcePreferencesController;

@interface SandboxMigrationController : NSObject {
    ResourcePreferencesController *_resourcePreferencesController;
    SandboxFileExtensionController *_fileExtensionController;
}

- (void).cxx_destruct;
- (id)initWithResourcePreferencesController:(id)a0 fileExtensionController:(id)a1;
- (void)performOneTimeSandboxResourceMigrationIfNecessary;
- (BOOL)_hasPerformedOneTimeSandboxMigration;
- (BOOL)_hasPerformedOneTimeDownloadFolderSandboxMigration;
- (id)_downloadFolderURLForMigration;
- (id)_sandboxMigrationResources;
- (void)_addMigratedExtensions:(id)a0 migrationType:(unsigned long long)a1;

@end
