@class NSImage, PXStoryExportManager, PXStoryExportConfiguration;

@interface SBLShareKitShareableStoryItem : SBLShareKitShareableItem {
    BOOL _isPerformingExportActivity;
    NSImage *_placeholderImage;
}

@property (readonly, nonatomic) PXStoryExportManager *exportManager;
@property (readonly, nonatomic) PXStoryExportConfiguration *storyExportConfiguration;

- (void)dealloc;
- (void).cxx_destruct;
- (id)placeholderImage;
- (id)initWithStoryExportConfiguration:(id)a0 sessionGroup:(id)a1 workerQueue:(id)a2 replyQueue:(id)a3;
- (id)exportWithCompletionHandler:(id /* block */)a0;
- (void)_handleExportResult:(BOOL)a0 error:(id)a1 exportConfiguration:(id)a2 exportPath:(id)a3;
- (id)_updatedExportConfiguration:(id)a0 forSharingServiceName:(id)a1;
- (id)exportHintPath;
- (BOOL)canProvideMovie;
- (void)_setPerformingExportActivity:(BOOL)a0 withConfiguration:(id)a1;

@end
