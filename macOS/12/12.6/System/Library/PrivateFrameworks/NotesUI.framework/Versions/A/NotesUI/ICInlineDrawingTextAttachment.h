@class NSString, NSView, NSHashTable, ICDrawingHashtagsAndMentionsController, ICInlineDrawingChangeCoalescer;

@interface ICInlineDrawingTextAttachment : ICInlineCanvasTextAttachment <PKTextAttachment>

@property (retain, nonatomic) ICInlineDrawingChangeCoalescer *changeCoalescer;
@property (retain, nonatomic) NSHashTable *inlineDrawingViews;
@property (nonatomic) BOOL isHandlingDrawingDidChange;
@property (retain, nonatomic) ICDrawingHashtagsAndMentionsController *hashtagsAndMentionsController;
@property (weak, nonatomic) NSView *cachedDrawingViewForPlaceView;
@property (weak, nonatomic) NSView *cachedControlViewForPlaceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_image;
- (id)contents;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (void)detachView:(id)a0 fromParentView:(id)a1;
- (void)placeView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inParentView:(id)a2 characterIndex:(unsigned long long)a3 layoutManager:(id)a4;
- (void)saveIfNeeded;
- (void)drawingDataDidChange:(id)a0 view:(id)a1;
- (BOOL)canDragWithoutSelecting;
- (id)printableTextContentForAppearanceType:(unsigned long long)a0;
- (id)attachmentAsNSTextAttachment;
- (void)detachView;
- (id)inlineViews;
- (id)attachmentViews;

@end
