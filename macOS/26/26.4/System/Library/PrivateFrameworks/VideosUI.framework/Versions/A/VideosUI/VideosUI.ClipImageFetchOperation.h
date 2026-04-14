@interface VideosUI.ClipImageFetchOperation : VUIAsynchronousOperation {
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ result;
    void /* unknown type, empty encoding */ completions;
    void /* unknown type, empty encoding */ imageProxy;
}

- (void)cancel;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;

@end
