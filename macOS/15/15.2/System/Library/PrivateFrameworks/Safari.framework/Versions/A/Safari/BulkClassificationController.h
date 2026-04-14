@class WBSAutoFillTestController, AutoFillTestHandler;

@interface BulkClassificationController : NSObject {
    WBSAutoFillTestController *_autoFillTestController;
    AutoFillTestHandler *_autoFillTestHandler;
}

- (void).cxx_destruct;
- (void)_runClassificationForURL:(id)a0 viewportSize:(struct CGSize { double x0; double x1; })a1 completionHandler:(id /* block */)a2;
- (void)runBulkClassificationWithInputURL:(id)a0 outputURL:(id)a1 scratchURL:(id)a2;

@end
