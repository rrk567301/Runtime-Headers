@interface PUStoryThumbnailActionPerformer : NSObject <PXStoryThumbnailActionPerformer> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ currentAssetCollection;
    void /* unknown type, empty encoding */ presentPlayerAction;
    void /* unknown type, empty encoding */ presentDetailsViewAction;
    void /* unknown type, empty encoding */ exportHelper;
}

@property (nonatomic, copy) id /* block */ presentPlayerAction;
@property (nonatomic, copy) id /* block */ presentDetailsViewAction;

- (id)init;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (void)presentShareSheet;
- (void)deleteMemory;
- (void)featureLess:(id)a0;
- (void)fileRadar;
- (void)presentTitleEditor;
- (void)setFavorite:(char)a0 completionHandler:(id /* block */)a1;
- (void)showVisualDiagnostics;

@end
