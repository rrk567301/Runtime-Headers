@class NSMediaLibraryBrowserControllerViewBridgePanel, NSProgressIndicator;

@interface NSMediaLibraryBrowserControllerViewBridge : NSMediaLibraryBrowserControllerViewBridgeBase <NSRemoteViewDelegate, MediaLibraryBrowserRemoteViewControllerProtocol> {
    unsigned char _clientDidSetFrame : 1;
}

@property (weak, nonatomic) NSMediaLibraryBrowserControllerViewBridgePanel *panel;
@property (weak, nonatomic) NSProgressIndicator *progressIndicator;
@property (readonly) BOOL shouldRetainExportedObject;

- (id)exportedInterface;
- (void)setVisible:(BOOL)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)isVisible;
- (void).cxx_destruct;
- (void)mediaLibraryFinishedLoading:(unsigned long long)a0;
- (id)serviceViewControllerInterface;
- (void)setMediaLibraries:(unsigned long long)a0;
- (void)togglePanel:(id)a0;
- (void)view:(id)a0 encounteredError:(id)a1;

@end
