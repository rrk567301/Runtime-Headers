@class ACSHPanelGroupOutlineView;

@interface ACSHPanelGroupView : ACSHPanelElementView {
    ACSHPanelGroupOutlineView *_outlineView;
    ACSHPanelGroupOutlineView *_previewView;
}

@property (nonatomic) BOOL showGroupingPreview;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)depth;
- (void)addSubview:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (void)setSelected:(BOOL)a0;
- (void)initView;
- (BOOL)supportsResizeHandleDrawing;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 allowingGroupViews:(BOOL)a1;
- (void)setEditorFocused:(BOOL)a0;
- (void)updateDepthBasedInformation;
- (id)_colorForDepth:(unsigned long long)a0;
- (void)_updateOutlineColor;
- (void)_setShowOutlineView:(BOOL)a0;
- (void)_updateOutlineViewVisibility;

@end
