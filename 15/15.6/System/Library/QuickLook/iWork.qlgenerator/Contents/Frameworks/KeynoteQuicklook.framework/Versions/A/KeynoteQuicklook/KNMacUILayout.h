@interface KNMacUILayout : NSObject <NSCopying, NSMutableCopying> {
    char _showingInspectorPane;
    char _inspectorPaneAutoHidden;
    char _showingNavigatorViewInSidebar;
}

@property (readonly, nonatomic, getter=p_isShowingNavigatorViewInSidebar) char p_showingNavigatorViewInSidebar;
@property (readonly, nonatomic, getter=isShowingSidebar) char showingSidebar;
@property (readonly, nonatomic) long long sidebarViewMode;
@property (readonly, nonatomic, getter=isShowingLightTable) char showingLightTable;
@property (readonly, nonatomic, getter=isShowingPresenterNotes) char showingPresenterNotes;
@property (readonly, nonatomic) long long inspectorPaneHiddenState;
@property (readonly, nonatomic) long long inspectorPaneViewMode;
@property (readonly, nonatomic, getter=isShowingTemplateSlides) char showingTemplateSlides;
@property (readonly, nonatomic, getter=isShowingElementList) char showingElementList;
@property (readonly, nonatomic, getter=isShowingActivityStream) char showingActivityStream;
@property (readonly, nonatomic) char activityStreamWasShown;
@property (readonly, nonatomic, getter=currentViewModeSupportsActivityStream) char supportsActivityStream;

+ (id)uiLayoutFromArchive:(const void *)a0 unarchiver:(id)a1 context:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)archivedUILayoutInContext:(id)a0;
- (char)inspectorPaneAutoHidden;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)setInspectorPaneAutoHidden:(char)a0;
- (void)setShowingInspectorPane:(char)a0;
- (char)showingInspectorPane;

@end
