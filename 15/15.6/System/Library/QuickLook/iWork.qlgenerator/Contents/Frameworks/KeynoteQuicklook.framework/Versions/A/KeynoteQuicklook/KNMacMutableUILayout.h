@interface KNMacMutableUILayout : KNMacUILayout

@property (nonatomic, getter=isShowingSidebar) char showingSidebar;
@property (nonatomic) long long sidebarViewMode;
@property (nonatomic, getter=isShowingLightTable) char showingLightTable;
@property (nonatomic, getter=isShowingPresenterNotes) char showingPresenterNotes;
@property (nonatomic) long long inspectorPaneHiddenState;
@property (nonatomic) long long inspectorPaneViewMode;
@property (nonatomic, getter=isShowingTemplateSlides) char showingTemplateSlides;
@property (nonatomic, getter=isShowingElementList) char showingElementList;
@property (nonatomic, getter=isShowingActivityStream) char showingActivityStream;
@property (nonatomic) char activityStreamWasShown;

- (void)setSidebarViewMode:(long long)a0;
- (void)setActivityStreamWasShown:(char)a0;
- (void)setInspectorPaneHiddenState:(long long)a0;
- (void)setInspectorPaneViewMode:(long long)a0;
- (void)setShowingActivityStream:(char)a0;
- (void)setShowingElementList:(char)a0;
- (void)setShowingLightTable:(char)a0;
- (void)setShowingPresenterNotes:(char)a0;
- (void)setShowingSidebar:(char)a0;
- (void)setShowingTemplateSlides:(char)a0;

@end
