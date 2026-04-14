@class PKPassLibrary;

@interface PKExternalDeviceMigrationExportController : NSObject {
    PKPassLibrary *_passLibrary;
}

- (void)exportableManifestWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)exportableCardEntry:(id)a0 completion:(id /* block */)a1;

@end
