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
@property (nonatomic) char labelsOnRight;
@property struct CGContext { } *context;

+ (id)rendererWithCGContext:(struct CGContext { } *)a0;

- (void)dealloc;
- (id)init;
- (id)delegate;
- (id)valueForUndefinedKey:(id)a0;
- (id)window;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)backgroundColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGSize { double x0; double x1; })cellSize;
- (id)cells;
- (char)isAnimating;
- (id)layoutManager;
- (id)renderer;
- (id)selectionIndexes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (char)hasFocus;
- (int)__heightOfTitle;
- (id)backgroundLayer;
- (int)appearanceStyle;
- (void)invalidateCellsLayoutAtIndexes:(id)a0;
- (int)__heightOfSubtitle;
- (void)_addClickableAreaWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_assertContextIsInstalledAsCurrentContext;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForCARenderer;
- (id)backgroundComposition;
- (id)backgroundIKImage;
- (char)backgroundIsDark;
- (char)backgroundIsWhite;
- (id)caRenderer;
- (id)cacheManager;
- (void)cellWillDrawPlaceHolder:(id)a0;
- (char)cellsHaveSubtitle;
- (char)cellsHaveTitle;
- (void)cellsOutlineRed:(float *)a0 green:(float *)a1 blue:(float *)a2;
- (char)constrainsToOriginalSize;
- (char)delegatesImageManagementToDatasource;
- (char)directImportMode;
- (char)disableTwoLineTitles;
- (char)drawGrid;
- (unsigned long long)editingIndex;
- (struct { char x0; double x1; double x2; double x3; double x4; double x5; unsigned long long x6; double x7; id x8[3]; } *)flavorAttributes;
- (char)freeFormLayoutMode;
- (char)glRendererEnabled;
- (id)groupAtCellIndex:(long long)a0;
- (unsigned long long)indexAtLocationOfDroppedItem;
- (char)layoutOfCellAtIndexIsValid;
- (id)openGLContextCreateIfNeeded:(char)a0;
- (void)renderCell:(id)a0 components:(int)a1;
- (int)renderLevel;
- (void)selectionRed:(float *)a0 green:(float *)a1 blue:(float *)a2;
- (void)setClickableArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 target:(id)a1 selector:(SEL)a2 info:(id)a3;
- (void)setNextFrameTime:(double)a0;
- (void)setupTextAttributes;
- (void)setupWithImageBrowser:(id)a0;
- (char)shadowsCells;
- (char)shouldBypassDrawingForCell:(id)a0;
- (char)showPlayerControls;
- (char)spaceOutCellsAtDropLocation;
- (void)switchOffCARenderer;
- (void)switchOnCARenderer;
- (char)trackingOfRequestingViewsEnabled;
- (void)validateCellLayoutAtIndex:(unsigned long long)a0;

@end
