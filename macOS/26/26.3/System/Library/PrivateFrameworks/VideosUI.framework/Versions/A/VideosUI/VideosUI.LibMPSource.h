@interface VideosUI.LibMPSource : NSObject {
    void /* unknown type, empty encoding */ mediaLibrary;
    void /* unknown type, empty encoding */ mpLibraryCancellables;
    void /* unknown type, empty encoding */ dataFetchingQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)mpMediaLibraryContentChanged;
- (void)mpMediaLibraryDownloadingDidChange;
- (void)refreshRentalMenu;

@end
