@interface VideosUI.DownloadStateIndicatorViewModel : VideosUI.ViewModel {
    void /* unknown type, empty encoding */ _imageViewModel;
    void /* unknown type, empty encoding */ _downloadProgress;
    void /* unknown type, empty encoding */ downloadModel;
    void /* unknown type, empty encoding */ downloadStateObserver;
    void /* unknown type, empty encoding */ progressObserver;
    void /* unknown type, empty encoding */ alwaysVisible;
}

- (void)downloadRemoved:(id)a0;
- (void)downloadStarted:(id)a0;

@end
