@interface GameStoreKit.OnDeviceSearchHistoryManager : NSObject <_TtP12GameStoreKitP33_0757ACEC33E22EA9096D326BFE94379A38JSAppStoreOnDeviceSearchHistoryExports_> {
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ defaults;
    void /* unknown type, empty encoding */ searchHistoryDefaultsKey;
    void /* unknown type, empty encoding */ maxAllowed;
    void /* unknown type, empty encoding */ onChange;
}

- (id)init;
- (void).cxx_destruct;
- (void)clearRecents;
- (id)fetchRecentsWithLimit:(long long)a0;
- (void)removeRecentSearchTerm:(id)a0;
- (void)saveRecentSearchWithLimit:(id)a0 :(long long)a1;

@end
