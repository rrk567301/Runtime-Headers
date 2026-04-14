@interface VideosUI.LibMPSource : NSObject {
    void /* unknown type, empty encoding */ mediaLibrary;
    void /* unknown type, empty encoding */ mpLibraryCancellables;
    void /* unknown type, empty encoding */ dataFetchingQueue;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ $__lazy_storage_$_menuTypes;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)mpMediaLibraryContentChanged;
- (void)mpMediaLibraryDownloadingDidChange;
- (void)refreshRentalMenu;

@end
