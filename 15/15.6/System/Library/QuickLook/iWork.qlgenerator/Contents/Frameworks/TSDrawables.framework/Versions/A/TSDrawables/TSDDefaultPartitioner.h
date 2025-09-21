@class TSDDrawableInfo, NSString, TSDLayout, TSDCanvas, TSUPointerKeyDictionary, TSDDefaultPartitionerPrintingSettings;
@protocol TSDCanvasProxyDelegate;

@interface TSDDefaultPartitioner : TSDLayoutChangeObserver <TSDPartitioner, TSDCanvasDelegate> {
    TSDDrawableInfo *_info;
    TSDCanvas *_canvas;
    TSUPointerKeyDictionary *_mainRepsByCanvas;
    TSUPointerKeyDictionary *_cachedImagesByCanvas;
    TSUPointerKeyDictionary *_partialRepsByCanvas;
    TSDDefaultPartitionerPrintingSettings *_lastPrintingSettings;
}

@property (readonly, nonatomic) TSDLayout *i_layout;
@property (readonly, nonatomic) char paginateRightToLeft;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } totalPartitionFrame;
@property (readonly, nonatomic) id<TSDCanvasProxyDelegate> canvasProxyDelegate;
@property (readonly, nonatomic) char verticalTextAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (void)reset;
- (id)documentRoot;
- (char)isPrintingCanvas;
- (id)i_repForCanvas:(id)a0;
- (id)hintForLayout:(id)a0;
- (struct CGImage { } *)i_cachedImageForCanvas:(id)a0;
- (void)i_layoutRegistered:(id)a0;
- (void)i_layoutUnregistered:(id)a0;
- (void)i_registerPartialRep:(id)a0;
- (void)i_removeCachedImageForCanvas:(id)a0;
- (void)i_setCachedImage:(struct CGImage { } *)a0 forCanvas:(id)a1;
- (void)i_unregisterPartialRep:(id)a0;
- (id)layoutForHint:(id)a0 parentLayout:(id)a1;
- (id)nextHintForSize:(struct CGSize { double x0; double x1; })a0 parentLayout:(id)a1 previousHint:(id)a2 horizontally:(char)a3 outFinished:(out char *)a4;
- (id)nextLayoutForSize:(struct CGSize { double x0; double x1; })a0 parentLayout:(id)a1 previousHint:(id)a2 horizontally:(char)a3 outFinished:(out char *)a4;
- (unsigned long long)p_edgesForHintBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)p_firstHintForSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_generateLayouts;
- (id)p_nextHintForSize:(struct CGSize { double x0; double x1; })a0 previousHint:(id)a1 horizontally:(char)a2;
- (void)p_teardownLayouts;
- (char)shouldSuppressBackgrounds;
- (void)processChanges:(id)a0 forChangeSource:(id)a1;
- (void)didProcessAllChanges;
- (void)preprocessChanges:(id)a0 forChangeSource:(id)a1;
- (void)setLayoutPartititionsRightToLeft:(char)a0 contentPartitionsRightToLeft:(char)a1;
- (char)didHint:(id)a0 syncWithNextHint:(id)a1 horizontally:(char)a2;
- (void)i_forceLayoutForChangedCanvasPrintingSettingsOfCanvas:(id)a0;
- (char)isCanvasDrawingIntoPDF;
- (id)p_childRepForRep:(id)a0 toNotifyForInfo:(id)a1;
- (void)p_generateLayoutsIfNeeded;
- (id)p_layoutsForInfo:(id)a0;
- (id)p_repsForInfo:(id)a0;

@end
