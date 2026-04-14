@class NSString, TabPreviewWindowController, WBSDispatchSourceTimer;
@protocol TabPreviewDataSource, TabPreviewControllerDelegate;

@interface TabPreviewController : NSObject <TabPreviewWindowControllerDelegate> {
    id<TabPreviewDataSource> _tabPreviewDataSource;
    WBSDispatchSourceTimer *_tabPreviewWindowShowTimer;
    WBSDispatchSourceTimer *_tabPreviewWindowCleanUpTimer;
    TabPreviewWindowController *_tabPreviewWindowController;
}

@property (weak, nonatomic) id<TabPreviewControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL previewsVerticalTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_canShowTabPreview;
- (BOOL)_isTabHovered;
- (void)_showTabPreviewWindow;
- (void)cancelOrClosePreviewIfNeeded;
- (void)dismissPreview;
- (id)initWithPreviewsVerticalTab:(BOOL)a0;
- (void)tabPreviewWindowDidClose:(id)a0;
- (void)tabPreviewWindowWillClose:(id)a0;
- (void)updatePreview;

@end
