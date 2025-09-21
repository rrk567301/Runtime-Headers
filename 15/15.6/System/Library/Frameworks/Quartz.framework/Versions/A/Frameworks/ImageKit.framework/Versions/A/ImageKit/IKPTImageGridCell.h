@interface IKPTImageGridCell : IKImageBrowserCell

- (void)draw;
- (char)isSelectable;
- (void)drawOverlays;
- (void)drawSelection;

@end
