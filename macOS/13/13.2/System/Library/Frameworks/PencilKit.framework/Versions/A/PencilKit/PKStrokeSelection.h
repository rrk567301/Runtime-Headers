@class PKStrokeSelectionImage, NSOrderedSet, NSSet, PKDrawing, PKStroke;

@interface PKStrokeSelection : NSObject

@property (readonly, nonatomic) NSOrderedSet *strokes;
@property (readonly, nonatomic) NSSet *strokeIdentifiers;
@property (readonly, nonatomic) PKStroke *lassoStroke;
@property (copy, nonatomic) PKStrokeSelectionImage *strokeImage;
@property (copy, nonatomic) PKStrokeSelectionImage *strokeImageWithHighlight;
@property (readonly, nonatomic) PKDrawing *drawing;

+ (id)readableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 drawingClass:(Class)a2 error:(id *)a3;
+ (id)strokeSelectionFromData:(id)a0;
+ (id)strokeSelectionFromData:(id)a0 forDrawingClass:(Class)a1;

- (id)description;
- (void).cxx_destruct;
- (id)writableTypeIdentifiersForItemProvider;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)initWithStrokes:(id)a0 lassoStroke:(id)a1 drawing:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsWithoutLasso;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })externalElementsBounds;
- (id)_newDrawingWithStrokes;
- (id)legacyStrokeDataForSelection;
- (id)strokeDataForSelection;
- (BOOL)containsBitmapData;

@end
