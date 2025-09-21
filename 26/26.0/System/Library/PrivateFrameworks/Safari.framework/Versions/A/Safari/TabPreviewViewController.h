@class NSTextField, NSString, NSView, NSStackView;
@protocol TabPreviewDataSource;

@interface TabPreviewViewController : NSViewController <TabPreviewDataSourceDelegate> {
    NSStackView *_containerView;
    NSStackView *_headerView;
    NSTextField *_titleTextField;
    NSTextField *_secondaryTitleTextField;
    NSView *_thumbnailContainerView;
    NSView *_thumbnailView;
}

@property (weak, nonatomic) id<TabPreviewDataSource> tabPreviewDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reloadData;
- (void)loadView;
- (void).cxx_destruct;
- (id)_createStackViewWithSubviews:(id)a0;
- (id)_createTextField;
- (void)thumbnailChangedForTabPreviewDataSource:(id)a0;

@end
