@interface IKCameraDeviceViewHandlerIB : IKCameraDeviceViewHandler

- (long long)mode;
- (void)setDisplayMode:(long long)a0;
- (void)viewDidMoveToWindow;
- (void)tableView:(id)a0 sortDescriptorsDidChange:(id)a1;
- (void)setup;
- (void)setupTableView;
- (void)setupView;
- (void)setHasDisplayModeTable:(BOOL)a0;
- (BOOL)hasDisplayModeTable;
- (void)setHasDisplayModeIcon:(BOOL)a0;
- (BOOL)hasDisplayModeIcon;
- (void)setTransferMode:(long long)a0;
- (void)installBackgroundView;
- (void)setupIconView;

@end
