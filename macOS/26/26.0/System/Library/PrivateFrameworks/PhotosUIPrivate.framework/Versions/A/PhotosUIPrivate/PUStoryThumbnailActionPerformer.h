@interface PUStoryThumbnailActionPerformer : NSObject <PXStoryThumbnailActionPerformer> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ currentAssetCollection;
    void /* function */ presentPlayerAction;
    void /* function */ presentDetailsViewAction;
    void /* unknown type, empty encoding */ exportHelper;
}

@property (nonatomic, copy) id /* block */ presentPlayerAction;
@property (nonatomic, copy) id /* block */ presentDetailsViewAction;

- (id)init;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)presentShareSheet;
- (void)deleteMemory;
- (void)featureLess:(id)a0;
- (void)fileRadar;
- (void)presentTitleEditor;
- (void)setFavorite:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)showVisualDiagnostics;

@end
