@interface PUXStoryThumbnailActionPerformer : NSObject <PXStoryThumbnailActionPerformer> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ presentPlayerAction;
    void /* unknown type, empty encoding */ exportHelper;
}

@property (nonatomic, copy) id /* block */ presentPlayerAction;

- (id)init;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (void)presentTitleEditor;
- (void)presentShareSheet;
- (void)setFavorite:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)deleteMemory;
- (void)fileRadar;
- (void)featureLess:(id)a0;
- (void)showVisualDiagnostics;

@end
