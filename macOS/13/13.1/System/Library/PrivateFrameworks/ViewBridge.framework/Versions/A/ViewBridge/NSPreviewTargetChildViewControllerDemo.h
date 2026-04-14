@class NSPreviewTargetViewController;

@interface NSPreviewTargetChildViewControllerDemo : NSPreviewTargetChildViewController {
    NSPreviewTargetViewController *_previewTargetViewController;
}

- (void)loadView;
- (id)awakeFromPreviewHost:(id)a0;
- (void)actuateIconButton:(id)a0;

@end
