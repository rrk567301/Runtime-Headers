@interface ScreenTimeSettingsFoundation.ScreenTimeSettingsXPCServer : NSObject <_TtPC26ScreenTimeSettingsServices18ScreenTimeSettings17XPCServerProtocol_> {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ ratingsProvider;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ _listener;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listener;
}

- (void).cxx_destruct;
- (id)init;
- (id)fetchListBlobsWithParameters:(id)a0 error:(id *)a1;
- (id)fetchRegionalContentRatingsWithParameters:(id)a0 error:(id *)a1;
- (BOOL)resetSettingsForUser:(id)a0 observerIdentifier:(id)a1 error:(id *)a2;
- (BOOL)save:(id)a0 forUser:(id)a1 observerIdentifier:(id)a2 error:(id *)a3;
- (id)settingsForUser:(id)a0 error:(id *)a1;

@end
