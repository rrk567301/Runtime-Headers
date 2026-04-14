@class NSImageView, NSString, NSTextField, BrowserTabPreviewDataSource;

@interface TabOverviewViewItem : NSCollectionViewItem <TabPreviewDataSourceDelegate> {
    NSImageView *_thumbnailView;
    NSTextField *_thumbnailLabel;
    NSTextField *_thumbnailDescription;
    BrowserTabPreviewDataSource *_dataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)loadView;
- (void)thumbnailChangedForTabPreviewDataSource:(id)a0;
- (void)configureWithURL:(id)a0 dataSource:(id)a1;
- (void)_updateTitleAndDescription;

@end
