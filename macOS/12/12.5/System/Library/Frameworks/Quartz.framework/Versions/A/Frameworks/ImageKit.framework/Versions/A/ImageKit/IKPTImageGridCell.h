@interface IKPTImageGridCell : IKImageBrowserCell

- (void)draw;
- (BOOL)isSelectable;
- (void)drawSelection;
- (void)drawOverlays;

@end
