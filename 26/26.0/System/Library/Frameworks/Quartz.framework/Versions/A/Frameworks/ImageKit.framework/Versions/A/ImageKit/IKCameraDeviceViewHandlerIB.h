@interface IKCameraDeviceViewHandlerIB : IKCameraDeviceViewHandler

- (long long)mode;
- (void)setup;
- (void)viewDidMoveToWindow;
- (void)setDisplayMode:(long long)a0;
- (void)tableView:(id)a0 sortDescriptorsDidChange:(id)a1;
- (void)setupTableView;
- (void)setupView;
- (BOOL)hasDisplayModeIcon;
- (BOOL)hasDisplayModeTable;
- (void)installBackgroundView;
- (void)setHasDisplayModeIcon:(BOOL)a0;
- (void)setHasDisplayModeTable:(BOOL)a0;
- (void)setTransferMode:(long long)a0;
- (void)setupIconView;

@end
