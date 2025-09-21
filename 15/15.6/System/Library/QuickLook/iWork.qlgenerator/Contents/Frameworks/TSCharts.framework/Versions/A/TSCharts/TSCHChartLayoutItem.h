@class TSCHChartRootLayoutItem, NSArray, TSCHChartModel, TSCHChartInfo;
@protocol TSWPStyleProviding;

@interface TSCHChartLayoutItem : NSObject

@property (class, nonatomic, readonly) Class radarAreaLayoutItem;

@property (weak, nonatomic) TSCHChartLayoutItem *parent;
@property (nonatomic) char layoutSizeSet;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } drawingRectCache;
@property (nonatomic) char drawingRectCacheValid;
@property (nonatomic) struct CGSize { double width; double height; } minSizeCache;
@property (nonatomic) char minSizeCacheValid;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } overhangRectCache;
@property (nonatomic) char overhangRectCacheValid;
@property (retain, nonatomic) NSArray *children;
@property (nonatomic) char treeBuilt;
@property (readonly, weak, nonatomic) id<TSWPStyleProviding> styleProvidingSource;
@property (readonly, nonatomic) TSCHChartRootLayoutItem *root;
@property (readonly, nonatomic) TSCHChartInfo *chart;
@property (readonly, nonatomic) TSCHChartInfo *chartInfo;
@property (readonly, nonatomic) TSCHChartModel *model;
@property (readonly, nonatomic) id<TSWPStyleProviding> textStyleProvidingSource;
@property (nonatomic) struct { char x0; char x1; char x2; char x3; char x4; char x5; char x6; char x7; long long x8; unsigned long long x9; } layoutSettings;
@property (readonly) struct CGSize { double x0; double x1; } minSize;
@property (nonatomic) struct CGPoint { double x; double y; } layoutOffset;
@property (nonatomic) struct CGSize { double width; double height; } layoutSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } layoutRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rootedLayoutRect;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } drawingOffset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } drawingSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } drawingRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rootedDrawingRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } overhangRect;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transformToRoot;
@property (readonly, nonatomic) char isInResize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } startingSize;
@property (readonly, nonatomic) unsigned long long dataSetIndex;

+ (id)chartLayoutWithChartInfo:(id)a0 styleProvidingSource:(id)a1;
+ (double)halfProtrusionForRegularPolygonWithSides:(long long)a0 strokeWidth:(double)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithParent:(id)a0;
- (void)clearAll;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcDrawingRect;
- (void)clearLayoutSize;
- (void)buildSubTree;
- (struct CGSize { double x0; double x1; })calcMinSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcOverhangRect;
- (void)clearDrawingRect;
- (void)clearMinSize;
- (void)clearOverhangRect;
- (id)hitChartElements:(struct CGPoint { double x0; double x1; })a0 passingTest:(id /* block */)a1;
- (void)iterateHitChartElements:(struct CGPoint { double x0; double x1; })a0 withBlock:(id /* block */)a1;
- (void)layoutInward;
- (void)layoutOutward;
- (void)layoutUsingMethod:(int)a0;
- (struct CGPath { } *)newDragAndDropHighlightPathForSelection:(id)a0;
- (double)overhangMagnitudeForEdge:(unsigned int)a0;
- (struct CGPoint { double x0; double x1; })overhangOffset;
- (struct CGSize { double x0; double x1; })overhangSize;
- (id)p_description;
- (void)p_iterateChildrenWithBlock:(id /* block */)a0;
- (id)renderersWithRep:(id)a0;
- (char)stopIteratingItemsContainingPoint:(struct CGPoint { double x0; double x1; })a0 withBlock:(id /* block */)a1;
- (id)subselectionHaloPositionsForSelections:(id)a0;
- (id)subselectionKnobPositionsForSelection:(id)a0;

@end
