@class NSString, NSXPCInterface, NSRemoteView;

@interface NSVBProxyPreferencePane : NSProxyPreferencePane <NSRemoteViewDelegate>

@property char legacyResizeBehavior;
@property (retain) NSString *remoteViewClass;
@property (retain) NSRemoteView *remoteView;
@property (readonly) NSString *serviceName;
@property (readonly) NSString *serviceSubclassName;
@property (readonly) NSXPCInterface *remoteObjectInterface;
@property (readonly) char shouldRetainExportedObject;

- (void).cxx_destruct;
- (id)remoteObjectInterface;
- (id)serviceName;
- (char)view:(id)a0 shouldResize:(struct CGSize { double x0; double x1; })a1;
- (id)serviceSubclassName;
- (void)didSelect;
- (void)didUnselect;
- (void)_createConnectionIfNeededWithCompletion:(id /* block */)a0;
- (id)initWithPrefPaneBundle:(id)a0;
- (id)initWithPrefPaneBundle:(id)a0 xpcAddBundle:(char)a1;
- (void)loadMainViewWithCompletionBlock:(id /* block */)a0;
- (void)reloadMainViewWithCompletionBlock:(id /* block */)a0;

@end
