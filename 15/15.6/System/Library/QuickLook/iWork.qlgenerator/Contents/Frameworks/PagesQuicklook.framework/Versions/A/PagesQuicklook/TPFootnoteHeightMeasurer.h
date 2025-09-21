@class NSString, TSULRUCache, TSDCanvas, TPDocumentRoot, TPFootnoteContainerLayout;
@protocol TSDCanvasProxyDelegate, TPFootnotePageDelegate;

@interface TPFootnoteHeightMeasurer : NSObject <TSDCanvasDelegate, TSWPFootnoteHeightMeasurer> {
    TPFootnoteContainerLayout *_footnoteContainerLayout;
    TPDocumentRoot *_documentRoot;
    TSDCanvas *_canvas;
    TSULRUCache *_footnoteLayoutCache;
    id<TPFootnotePageDelegate> _pageDelegate;
}

@property (readonly, nonatomic) id<TSDCanvasProxyDelegate> canvasProxyDelegate;
@property (readonly, nonatomic) char verticalTextAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)tearDown;
- (id)documentRoot;
- (void)removeFootnoteReferenceStorage:(id)a0;
- (void)addFootnoteReferenceStorage:(id)a0;
- (void)removeAllFootnoteReferenceStorages;
- (void)setFootnoteSpacing:(long long)a0;
- (char)shouldShowInstructionalTextForLayout:(id)a0;
- (char)footnoteContainerFitsForTarget:(id)a0;
- (char)canHaveFootnotesFromPreviousTarget:(id)a0;
- (double)footnoteBlockHeight;
- (double)footnoteBlockHeightForTarget:(id)a0;
- (char)footnoteContainerIsOnSamePageAsTarget:(id)a0;
- (char)hasFootnotes;
- (id)initWithFootnoteMarkProvider:(id)a0 documentRoot:(id)a1 pageDelegate:(id)a2 maxFootnoteLineWidth:(double)a3 maxFootnoteBlockHeight:(double)a4 vertical:(char)a5 footnoteSpacing:(double)a6;
- (void)p_clearFootnoteLayoutCache;
- (void)setContainerLineWidth:(double)a0;

@end
