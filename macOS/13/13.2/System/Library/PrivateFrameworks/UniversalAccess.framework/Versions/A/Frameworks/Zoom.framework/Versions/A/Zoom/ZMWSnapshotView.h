@class NSString, ZMWMainWindow, ZMWCursorView;

@interface ZMWSnapshotView : ZMWView {
    double _scaleFactor;
    struct CGPoint { double x; double y; } _screenFocusPoint;
    struct CGSize { double width; double height; } _screenFocusPointOffset;
    NSString *_filterName;
    unsigned int _filterID;
    BOOL _needToUpdateWindowProperties;
    unsigned char _hiddenRefreshPassCounter;
    unsigned char _hiddenRefreshPass;
}

@property (nonatomic) BOOL _isResizing;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) unsigned int magicID;
@property (weak, nonatomic) ZMWMainWindow *window;
@property (nonatomic) BOOL constrainToMainDisplay;
@property (nonatomic) struct CGSize { double x0; double x1; } screenFocusPointOffset;
@property (retain, nonatomic) NSString *filterName;
@property (readonly, nonatomic) ZMWCursorView *cursorView;
@property (nonatomic) double scaleFactor;
@property (nonatomic) BOOL cursorHidden;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (void)refresh;
- (struct CGPoint { double x0; double x1; })centerPoint;
- (id)filterName;
- (void)setFilterName:(id)a0;
- (struct CGSize { double x0; double x1; })_captureSize;
- (void)_updateFilter:(unsigned int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })captureRect;
- (id)initWithSuperlayer:(id)a0 connection:(unsigned int)a1;
- (void)updateUserSettings;
- (void)enableResizeMode:(BOOL)a0;
- (void)_updateCursorVisibility;
- (void)updateCursorViewPositionAndForceRedraw:(BOOL)a0;
- (void)setCenterPoint:(struct CGPoint { double x0; double x1; })a0 animationDuration:(double)a1;
- (struct CGPoint { double x0; double x1; })screenFocusPoint;
- (void)enableShadow:(BOOL)a0;
- (void)_updateFocusPointOffsetForScreenPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldMoveCursorInsideWindow;
- (void)setScreenFocusPoint:(struct CGPoint { double x0; double x1; })a0 windowFocusPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_removeFilters;
- (void)setupFilter;
- (void)setNeedsToUpdateWindowProperties:(BOOL)a0;
- (void)updateWindowProperties;
- (void)_magicRefresh;

@end
