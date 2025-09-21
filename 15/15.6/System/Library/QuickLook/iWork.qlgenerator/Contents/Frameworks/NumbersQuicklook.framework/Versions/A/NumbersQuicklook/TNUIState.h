@class NSArray, NSMutableDictionary, TSDFreehandDrawingToolkitUIState, TSKSelectionPath, NSString;
@protocol TNUIStateDelegate;

@interface TNUIState : NSObject <NSCopying, TSAUIState>

@property (readonly, nonatomic) NSMutableDictionary *chartUIState;
@property (readonly, nonatomic) NSMutableDictionary *sheetUIStates;
@property (readonly, nonatomic) NSMutableDictionary *editModeSheetUIStates;
@property (nonatomic, getter=inspectorPaneIsVisible) char inspectorPaneIsVisible;
@property (nonatomic, getter=inspectorPaneIsAutoHidden) char inspectorPaneIsAutoHidden;
@property (readonly, nonatomic) char isInPaginatedMode;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } scrollPosition;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } previousScrollPosition;
@property (readonly, nonatomic) char hasVisibleRect;
@property (readonly, nonatomic) char hasPreviousVisibleRect;
@property (readonly, nonatomic) float viewScale;
@property (readonly, nonatomic) float previousViewScale;
@property (readonly, nonatomic) float defaultViewScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } previousVisibleRect;
@property (weak, nonatomic) id<TNUIStateDelegate> delegate;
@property (nonatomic) long long documentMode;
@property (nonatomic) long long inspectorPaneHiddenState;
@property (nonatomic) int inspectorPaneViewMode;
@property (copy, nonatomic) NSArray *selectedQuickCalcFunctions;
@property (nonatomic) char removedAllQuickCalcFunctions;
@property (nonatomic) char showsComments;
@property (nonatomic) char showsRulers;
@property (retain, nonatomic) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } desktopWindowFrame;
@property (nonatomic) struct CGSize { double width; double height; } desktopScreenSize;
@property (nonatomic) char showCanvasGuides;
@property (nonatomic) double sidebarWidth;
@property (nonatomic) char sidebarVisible;
@property (nonatomic) char editingDisabled;
@property (copy, nonatomic) TSKSelectionPath *selectionPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)maximumViewScale;
+ (double)minimumViewScale;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1 context:(id)a2;
- (id)UIStateForChart:(id)a0;
- (id)archivedUIStateInContext:(id)a0;
- (void)resetForInitialViewing;
- (void)setUIState:(id)a0 forChart:(id)a1;
- (id)uiStateForSheet:(id)a0 createIfNeeded:(char)a1;
- (id)_sheetUIStateForPrintingSheet:(id)a0;
- (void)clearPreviousVisibleRect;
- (void)clearVisibleRect;
- (void)enumerateSheetUIStatesWithBlock:(id /* block */)a0;
- (void)fixupSelectionPathsForRestorationForcingUnpagination:(char)a0;
- (float)p_calculateViewScaleForVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_enterPaginatedMode;
- (void)p_exitPaginatedMode;
- (id)p_fixedUpSelectionPathForRestoration:(id)a0 forcingUnpagination:(char)a1;
- (id)p_uiStateForActiveSheet;
- (void)removeAllUIStatesForSheet:(id)a0;
- (void)removeUIStateForSheet:(id)a0;
- (void)setPreviousVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSheet:(id)a1;
- (void)setUIState:(id)a0 forSheet:(id)a1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSheet:(id)a1;
- (id)uiStateForSheet:(id)a0;
- (float)viewScaleForSheet:(id)a0;

@end
