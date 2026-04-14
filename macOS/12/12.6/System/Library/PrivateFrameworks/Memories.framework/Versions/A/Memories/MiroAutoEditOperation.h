@class MiroCloudDownloader, MiroAutoEditor, MiroMemory, MiroAutoEditController;

@interface MiroAutoEditOperation : NSOperation {
    BOOL _isFinished;
    BOOL _isExecuting;
}

@property (retain, nonatomic) MiroCloudDownloader *cloudDownloader;
@property (retain) MiroAutoEditController *autoEditController;
@property (nonatomic) int requestID;
@property (retain) MiroAutoEditor *autoEditorParent;
@property (retain) MiroMemory *memory;
@property (copy) id /* block */ cleanupHandler;
@property BOOL shouldSave;
@property (nonatomic) struct CGSize { double width; double height; } naturalSize;

- (void).cxx_destruct;
- (void)start;
- (void)finished;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (BOOL)shouldDownload;
- (id)initWithNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldCancelOnNonLocalAssets;
- (void)performAutoEditAsynchronouslyWithNaturalSize:(struct CGSize { double x0; double x1; })a0;

@end
