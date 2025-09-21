@interface PhotosUICore.LemonadeBookmarksDataSectionManager : PXDataSectionManager {
    void /* unknown type, empty encoding */ photoLibraryContext;
    void /* unknown type, empty encoding */ topLevelIdentifier;
    void /* unknown type, empty encoding */ bookmarksManager;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ bookmarksManagerObserver;
    void /* unknown type, empty encoding */ bookmarkCores;
    void /* unknown type, empty encoding */ itemListManagers;
    void /* unknown type, empty encoding */ itemListManagerObservers;
    void /* unknown type, empty encoding */ privacyControllerObservers;
}

- (void).cxx_destruct;
- (id)createDataSection;
- (id)initWithChildDataSectionManagers:(id)a0;

@end
