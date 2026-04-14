@class PKPassLibrary;

@interface PKExternalDeviceMigrationExportController : NSObject {
    PKPassLibrary *_passLibrary;
}

- (id)init;
- (void)exportableCardEntry:(id)a0 completion:(id /* block */)a1;
- (void)exportableManifestWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
