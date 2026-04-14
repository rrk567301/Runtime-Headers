@class NSMutableDictionary;

@interface IKImageBrowserCellOffscreenRenderer : NSObject {
    struct CGContext { } *_context;
    id _ikrenderer;
    NSMutableDictionary *_valuesForKeys;
    void *_flavorSetup;
    id _cacheContext;
}

@property unsigned long long cellsStyleMask;
@property (retain) id imageBrowserContext;
@property (nonatomic) double textSize;
@property (nonatomic) double iconSize;
@property (nonatomic) double gridSpacing;
@property (nonatomic) double maxIconSize;
@property (nonatomic) BOOL labelsOnRight;
@property struct CGContext { } *context;

+ (id)rendererWithCGContext:(struct CGContext { } *)a0;

- (void)dealloc;
- (id)init;
- (id)delegate;
- (id)valueForUndefinedKey:(id)a0;
- (id)window;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (id)backgroundColor;
- (BOOL)isAnimating;
- (id)layoutManager;
- (id)selectionIndexes;
- (struct CGSize { double x0; double x1; })cellSize;
- (id)cells;
- (id)renderer;
- (BOOL)hasFocus;
- (void)invalidateCellsLayoutAtIndexes:(id)a0;
- (id)openGLContextCreateIfNeeded:(BOOL)a0;
- (id)cacheManager;
- (BOOL)glRendererEnabled;
- (void)switchOffCARenderer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForCARenderer;
- (id)caRenderer;
- (void)switchOnCARenderer;
- (void)setNextFrameTime:(double)a0;
- (int)renderLevel;
- (void)cellWillDrawPlaceHolder:(id)a0;
- (void)validateCellLayoutAtIndex:(unsigned long long)a0;
- (struct { BOOL x0; double x1; double x2; double x3; double x4; double x5; unsigned long long x6; double x7; id x8[3]; } *)flavorAttributes;
- (BOOL)directImportMode;
- (BOOL)showPlayerControls;
- (BOOL)constrainsToOriginalSize;
- (int)__heightOfTitle;
- (int)__heightOfSubtitle;
- (int)appearanceStyle;
- (BOOL)cellsHaveTitle;
- (void)cellsOutlineRed:(float *)a0 green:(float *)a1 blue:(float *)a2;
- (BOOL)backgroundIsDark;
- (void)selectionRed:(float *)a0 green:(float *)a1 blue:(float *)a2;
- (id)backgroundIKImage;
- (id)backgroundComposition;
- (unsigned long long)editingIndex;
- (BOOL)freeFormLayoutMode;
- (BOOL)delegatesImageManagementToDatasource;
- (BOOL)trackingOfRequestingViewsEnabled;
- (BOOL)shouldBypassDrawingForCell:(id)a0;
- (BOOL)cellsHaveSubtitle;
- (id)groupAtCellIndex:(long long)a0;
- (BOOL)shadowsCells;
- (unsigned long long)indexAtLocationOfDroppedItem;
- (BOOL)spaceOutCellsAtDropLocation;
- (void)setupWithImageBrowser:(id)a0;
- (void)renderCell:(id)a0 components:(int)a1;
- (void)setClickableArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 target:(id)a1 selector:(SEL)a2 info:(id)a3;
- (BOOL)drawGrid;
- (void)_assertContextIsInstalledAsCurrentContext;
- (id)backgroundLayer;
- (BOOL)backgroundIsWhite;
- (BOOL)disableTwoLineTitles;
- (void)setupTextAttributes;
- (BOOL)layoutOfCellAtIndexIsValid;
- (void)_addClickableAreaWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
