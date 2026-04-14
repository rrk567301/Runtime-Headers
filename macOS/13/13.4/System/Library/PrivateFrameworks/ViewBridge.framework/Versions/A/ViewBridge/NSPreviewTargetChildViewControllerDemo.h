@class NSPreviewTargetViewController;

@interface NSPreviewTargetChildViewControllerDemo : NSPreviewTargetChildViewController {
    NSPreviewTargetViewController *_previewTargetViewController;
}

- (void)loadView;
- (void)actuateIconButton:(id)a0;
- (id)awakeFromPreviewHost:(id)a0;

@end
