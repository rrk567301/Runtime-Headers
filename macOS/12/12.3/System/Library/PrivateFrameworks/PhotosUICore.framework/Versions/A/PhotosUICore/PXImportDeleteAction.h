@class NSString, NSProgress, NSArray, PXImportController, NSMutableArray;

@interface PXImportDeleteAction : PXImportConcurrentAction {
    NSArray *_assets;
    NSMutableArray *_removedAssets;
}

@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) NSString *sessionUuid;
@property (weak) PXImportController *importController;
@property BOOL userInitiatedDelete;

- (void)dealloc;
- (void).cxx_destruct;
- (void)finish;
- (void)start;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)performAction;
- (id)initWithAssets:(id)a0;
- (void)_stopObservingDeleteProgress;
- (void)_startObservingDeleteProgress;
- (void)_preAction;
- (BOOL)canDeleteAssets;
- (void)_performRealAction;
- (void)_performMockAction;
- (void)sendActionProgress:(double)a0;
- (void)didRemove:(id)a0;

@end
