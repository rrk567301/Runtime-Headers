@interface VideosUI.LibMPSource : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ mediaLibrary;
    void /* unknown type, empty encoding */ isDownloadingMenuFetchInProgress;
}

- (void)mpMediaLibraryContentChanged;
- (void)mpMediaLibraryDownloadingDidChange;
- (void)refreshRentalMenu;

@end
