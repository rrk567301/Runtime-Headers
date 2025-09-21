@class TSKPencilAnnotationUIState, NSString, NSDictionary, TSDFreehandDrawingToolkitUIState, TSKSelectionPath, NSNumber, TSKAnnotationAuthor;

@interface TPUIState : NSObject <NSCopying, TSAUIState> {
    double _presentationAutoScrollSpeed;
    long long _viewScaleModeiOS;
    char _showsFlowMode;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (nonatomic) char sectionTemplateDrawablesSelectable;
@property (copy, nonatomic) NSDictionary *chartUIState;
@property (nonatomic) char rulersVisible;
@property (nonatomic) char layoutBordersVisible;
@property (nonatomic) char wordCountHUDVisible;
@property (nonatomic) int wordCountHUDType;
@property (nonatomic) struct CGPoint { double x; double y; } wordCountHUDPosition;
@property (nonatomic) char showsComments;
@property (readonly, nonatomic) char hasShowsCTMarkup;
@property (nonatomic) char showsCTMarkup;
@property (readonly, nonatomic) char hasShowsCTDeletions;
@property (nonatomic) char showsCTDeletions;
@property (nonatomic) char changeTrackingPaused;
@property (nonatomic) char showsFlowMode;
@property (copy, nonatomic) NSNumber *flowModeFontScale;
@property (nonatomic) char showsPageNavigator;
@property (nonatomic) char showsTOCNavigator;
@property (nonatomic) char pencilAnnotationsHidden;
@property (nonatomic) char showsActivityStream;
@property (nonatomic) char shouldShowCommentSidebar;
@property (nonatomic) long long viewScaleMode;
@property (nonatomic) long long pageViewState;
@property (nonatomic) double viewScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } windowFrame;
@property (copy, nonatomic) NSString *selectedInspectorSwitchSegmentIdentifier;
@property (nonatomic) char inspectorHidden;
@property (nonatomic) char showUserDefinedGuides;
@property (copy, nonatomic) NSString *authorForFilteringName;
@property (retain, nonatomic) TSKAnnotationAuthor *authorForFiltering;
@property (retain, nonatomic) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState;
@property (retain, nonatomic) TSKPencilAnnotationUIState *pencilAnnotationUIState;
@property (nonatomic) char showUserDefinedPageTemplateGuides;
@property (nonatomic) double tocOrPageNavWidth;
@property (nonatomic) double activityOrAnnotationWidth;
@property (nonatomic) char editingDisabled;
@property (copy, nonatomic) TSKSelectionPath *selectionPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (char)isEqualToUIState:(id)a0;

@end
