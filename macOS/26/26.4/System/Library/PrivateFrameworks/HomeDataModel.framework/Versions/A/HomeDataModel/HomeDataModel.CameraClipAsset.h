@interface HomeDataModel.CameraClipAsset : AVURLAsset <AVAssetResourceLoaderDelegate> {
    void /* unknown type, empty encoding */ clipID;
    void /* unknown type, empty encoding */ clipEventAsset;
    void /* unknown type, empty encoding */ clipsLibrary;
    void /* unknown type, empty encoding */ dispatchQueue;
    void /* unknown type, empty encoding */ isFirstPlaylistRequest;
}

- (id)initWithURL:(id)a0 options:(id)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (void).cxx_destruct;

@end
