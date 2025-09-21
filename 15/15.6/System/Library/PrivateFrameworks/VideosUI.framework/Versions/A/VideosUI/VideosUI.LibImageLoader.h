@interface VideosUI.LibImageLoader : NSObject <VUIImageLoader> {
    void /* unknown type, empty encoding */ imageLoadOperationQueue;
}

- (id)init;
- (void).cxx_destruct;
- (id)URLForObject:(id)a0;
- (void)cancelLoad:(id)a0;
- (char)hasImageCache;
- (id)imageKeyForObject:(id)a0;
- (id)loadImageForObject:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(char)a2 imageDirection:(long long)a3 requestLoader:(id)a4 completionHandler:(id /* block */)a5;

@end
