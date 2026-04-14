@protocol QLPreviewItem;

@interface PRSPreviewHostingView : NSView <QLPreviewCustomView>

@property (retain) id<QLPreviewItem> previewItem;
@property (readonly) BOOL isLoaded;

- (void)close;
- (void)didHide;
- (void)willShow;
- (void)didShow;
- (void)willHide;

@end
