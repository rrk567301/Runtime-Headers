@interface SOLoadMoreCollectionViewItem : SOTranscriptCollectionViewItem

@property (class, readonly) struct CGSize { double x0; double x1; } itemSize;

- (void)loadView;
- (void)viewDidAppear;
- (id)progressIndicator;
- (void)viewDidDisappear;
- (void)enclosingScrollViewFinishedScrolling:(id)a0;

@end
