@class TSWPPadding, NSString, TSAGalleryItem, NSArray, TSUBezierPath, TSWPLayout, NSMapTable, TSDLayoutGeometry;

@interface TSAGalleryLayout : TSDDrawableLayout <TSWPLayoutParent, TSWPColumnMetrics> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageRectInImageContainer;
    TSWPLayout *_galleryCaptionLayout;
    NSMapTable *_captionLayoutsForItems;
    NSArray *_captionLayouts;
    char _shouldSuppressCaptions;
    char _isInvalidatingSize;
    TSUBezierPath *_cachedPathForClippingConnectionLines;
}

@property (retain, nonatomic) TSAGalleryItem *currentItem;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageContainerRect;
@property (readonly, nonatomic) TSDLayoutGeometry *imageContainerGeometry;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageRect;
@property (readonly, nonatomic) TSDLayoutGeometry *imageGeometry;
@property (readonly, nonatomic) TSDLayoutGeometry *imageGeometryInRoot;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pageControlBoundingRect;
@property (readonly, nonatomic) TSWPLayout *currentCaptionLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) char alwaysStartsNewTarget;
@property (readonly, nonatomic) char shrinkTextToFit;
@property (readonly, nonatomic) char columnsAreLeftToRight;
@property (readonly, nonatomic) double textScaleFactor;

+ (double)p_constrainedImageContainerHeightForHeight:(double)a0;
+ (double)p_constrainedImageContainerWidthForWidth:(double)a0 maxLayoutWidth:(double)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (id)children;
- (struct CGSize { double x0; double x1; })minimumSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nonAutosizedFrameForTextLayout:(id)a0;
- (int)verticalAlignmentForTextLayout:(id)a0;
- (unsigned long long)autosizeFlagsForTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autosizedFrameForTextLayout:(id)a0 textSize:(struct CGSize { double x0; double x1; })a1;
- (id)computeLayoutGeometry;
- (id)dependentsOfTextLayout:(id)a0;
- (double)gapForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (id)interiorClippingPath;
- (void)invalidateExteriorWrap;
- (void)invalidateForAutosizingTextLayout:(id)a0;
- (void)invalidateSize;
- (Class)repClassForTextLayout:(id)a0;
- (void)updateChildrenFromInfo;
- (double)widthForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrameForProvidingGuidesInRoot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStandardKnobs;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })adjustedInsetsForTarget:(id)a0;
- (char)descendersCannotClip;
- (id)pathForClippingConnectionLines;
- (double)positionForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1 target:(id)a2 outWidth:(double *)a3 outGap:(double *)a4;
- (char)shouldInvalidateSizeWhenInvalidateSizeOfReliedOnLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrameInRootWithDragOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })p_maxLayoutSize;
- (struct CGPoint { double x0; double x1; })calculateOffsetForGalleryItem:(id)a0 withFacesRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)childInfosForChildLayouts;
- (id)childrenForPencilAnnotations;
- (id)computeInfoGeometryForFittingInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectInImageContainerForItem:(id)a0;
- (id)p_galleryInfo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_imageRectInImageContainerForItem:(id)a0 dragOffset:(struct CGPoint { double x0; double x1; })a1;
- (double)p_minScaleForItem:(id)a0;

@end
