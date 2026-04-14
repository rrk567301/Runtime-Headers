@interface _TtCC8GameSave23GameSaveSyncedDirectory13StateObserver : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _selectedVersion;
    void /* unknown type, empty encoding */ _alertAction;
    void /* unknown type, empty encoding */ directory;
}

- (void)cancel;
- (void)retryIfSignedIn;
- (void)resolveCurrentVersion;

@end
