@class NSMapTable;

@interface PXSidebarImageLoader : NSObject {
    NSMapTable *_requestDetailsBySidebarImageRequestID;
}

- (id)init;
- (void).cxx_destruct;
- (void)cancelImageRequest:(long long)a0;
- (id)beginRequestForMediaProvider:(id)a0 mediaRequestIDs:(id)a1;
- (void)cancelRequestDetails:(id)a0;
- (long long)requestImageForAsset:(id)a0 pixelSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;

@end
