@interface IKCameraDeviceViewHandlerIB : IKCameraDeviceViewHandler

- (long long)mode;
- (void)setDisplayMode:(long long)a0;
- (void)viewDidMoveToWindow;
- (void)tableView:(id)a0 sortDescriptorsDidChange:(id)a1;
- (void)setup;
- (void)setupTableView;
- (void)setupView;
- (BOOL)hasDisplayModeTable;
- (BOOL)hasDisplayModeIcon;
- (void)setHasDisplayModeTable:(BOOL)a0;
- (void)setHasDisplayModeIcon:(BOOL)a0;
- (void)setTransferMode:(long long)a0;
- (void)installBackgroundView;
- (void)setupIconView;

@end
