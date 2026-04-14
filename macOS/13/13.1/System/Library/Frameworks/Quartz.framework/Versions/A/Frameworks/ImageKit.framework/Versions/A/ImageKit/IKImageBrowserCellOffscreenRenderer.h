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
- (id)window;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)backgroundColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (BOOL)isAnimating;
- (id)selectionIndexes;
- (struct CGSize { double x0; double x1; })cellSize;
- (id)cells;
- (id)layoutManager;
- (id)renderer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (BOOL)hasFocus;
- (int)renderLevel;
- (void)setNextFrameTime:(double)a0;
- (void)cellWillDrawPlaceHolder:(id)a0;
- (BOOL)directImportMode;
- (BOOL)showPlayerControls;
- (id)cacheManager;
- (unsigned long long)indexAtLocationOfDroppedItem;
- (BOOL)constrainsToOriginalSize;
- (id)caRenderer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForCARenderer;
- (void)switchOnCARenderer;
- (void)switchOffCARenderer;
- (BOOL)spaceOutCellsAtDropLocation;
- (BOOL)trackingOfRequestingViewsEnabled;
- (BOOL)delegatesImageManagementToDatasource;
- (int)__heightOfTitle;
- (int)__heightOfSubtitle;
- (void)setClickableArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 target:(id)a1 selector:(SEL)a2 info:(id)a3;
- (void)validateCellLayoutAtIndex:(unsigned long long)a0;
- (void)invalidateCellsLayoutAtIndexes:(id)a0;
- (BOOL)freeFormLayoutMode;
- (BOOL)drawGrid;
- (void)selectionRed:(float *)a0 green:(float *)a1 blue:(float *)a2;
- (void)cellsOutlineRed:(float *)a0 green:(float *)a1 blue:(float *)a2;
- (BOOL)glRendererEnabled;
- (void)_assertContextIsInstalledAsCurrentContext;
- (id)openGLContextCreateIfNeeded:(BOOL)a0;
- (id)backgroundLayer;
- (id)groupAtCellIndex:(long long)a0;
- (unsigned long long)editingIndex;
- (BOOL)backgroundIsDark;
- (BOOL)backgroundIsWhite;
- (BOOL)shadowsCells;
- (BOOL)cellsHaveTitle;
- (BOOL)cellsHaveSubtitle;
- (struct { BOOL x0; double x1; double x2; double x3; double x4; double x5; unsigned long long x6; double x7; id x8[3]; } *)flavorAttributes;
- (int)appearanceStyle;
- (id)backgroundIKImage;
- (id)backgroundComposition;
- (BOOL)shouldBypassDrawingForCell:(id)a0;
- (BOOL)disableTwoLineTitles;
- (void)setupTextAttributes;
- (void)renderCell:(id)a0 components:(int)a1;
- (BOOL)layoutOfCellAtIndexIsValid;
- (void)_addClickableAreaWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupWithImageBrowser:(id)a0;

@end
