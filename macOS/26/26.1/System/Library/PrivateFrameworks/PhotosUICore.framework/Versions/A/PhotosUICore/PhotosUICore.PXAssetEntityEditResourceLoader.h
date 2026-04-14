@interface PhotosUICore.PXAssetEntityEditResourceLoader : NSObject <PEResourceLoaderDelegate> {
    void /* unknown type, empty encoding */ results;
    void /* unknown type, empty encoding */ resourceLoader;
    void /* unknown type, empty encoding */ continuation;
}

- (void).cxx_destruct;
- (id)init;
- (void)resourceLoader:(id)a0 request:(id)a1 didCompleteWithResult:(id)a2;
- (void)resourceLoader:(id)a0 request:(id)a1 downloadProgress:(double)a2;
- (void)resourceLoader:(id)a0 request:(id)a1 mediaLoadDidFailWithError:(id)a2;

@end
