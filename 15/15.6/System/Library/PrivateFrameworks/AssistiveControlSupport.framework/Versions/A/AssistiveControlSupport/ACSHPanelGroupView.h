@class ACSHPanelGroupOutlineView;

@interface ACSHPanelGroupView : ACSHPanelElementView {
    ACSHPanelGroupOutlineView *_outlineView;
    ACSHPanelGroupOutlineView *_previewView;
}

@property (nonatomic) char showGroupingPreview;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)depth;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (char)accessibilityIsAttributeSettable:(id)a0;
- (char)accessibilityIsIgnored;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (void)addSubview:(id)a0;
- (void)setSelected:(char)a0;
- (id)_colorForDepth:(unsigned long long)a0;
- (void)_setShowOutlineView:(char)a0;
- (void)_updateOutlineColor;
- (void)_updateOutlineViewVisibility;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 allowingGroupViews:(char)a1;
- (void)initView;
- (void)setEditorFocused:(char)a0;
- (char)supportsResizeHandleDrawing;
- (void)updateDepthBasedInformation;

@end
