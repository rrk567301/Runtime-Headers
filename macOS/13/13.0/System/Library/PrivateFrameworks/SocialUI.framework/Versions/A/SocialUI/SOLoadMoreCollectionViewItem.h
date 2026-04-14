@interface SOLoadMoreCollectionViewItem : SOTranscriptCollectionViewItem

@property (class, readonly) struct CGSize { double x0; double x1; } itemSize;

- (void)loadView;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (id)progressIndicator;
- (void)enclosingScrollViewFinishedScrolling:(id)a0;

@end
