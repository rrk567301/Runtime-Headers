@interface IKCameraDeviceViewHandlerIB : IKCameraDeviceViewHandler

- (void)setDisplayMode:(long long)a0;
- (long long)mode;
- (void)tableView:(id)a0 sortDescriptorsDidChange:(id)a1;
- (void)viewDidMoveToWindow;
- (void)setup;
- (void)setupTableView;
- (void)setupView;
- (char)hasDisplayModeIcon;
- (char)hasDisplayModeTable;
- (void)installBackgroundView;
- (void)setHasDisplayModeIcon:(char)a0;
- (void)setHasDisplayModeTable:(char)a0;
- (void)setTransferMode:(long long)a0;
- (void)setupIconView;

@end
