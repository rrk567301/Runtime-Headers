@interface WebHostedNetscapePluginView : WebBaseNetscapePluginView <WebPluginManualLoader> {
    struct RetainPtr<NSArray> { void *m_ptr; } _attributeKeys;
    struct RetainPtr<NSArray> { void *m_ptr; } _attributeValues;
    struct RetainPtr<CALayer> { void *m_ptr; } _pluginLayer;
    BOOL _hostsLayersInWindowServer;
    struct unique_ptr<WebKit::SoftwareCARenderer, std::default_delete<WebKit::SoftwareCARenderer>> { struct __compressed_pair<WebKit::SoftwareCARenderer *, std::default_delete<WebKit::SoftwareCARenderer>> { struct SoftwareCARenderer *__value_; } __ptr_; } _softwareRenderer;
    struct CGSize { double width; double height; } _previousSize;
    struct RefPtr<WebKit::NetscapePluginInstanceProxy, WTF::RawPtrTraits<WebKit::NetscapePluginInstanceProxy>, WTF::DefaultRefDerefTraits<WebKit::NetscapePluginInstanceProxy>> { struct NetscapePluginInstanceProxy *m_ptr; } _proxy;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)mouseDown:(id)a0;
- (void)setLayer:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)keyUp:(id)a0;
- (void)flagsChanged:(id)a0;
- (id)inputContext;
- (BOOL)shouldStop;
- (void)setHostsLayersInWindowServer:(BOOL)a0;
- (void)pluginHostDied;
- (void)webFrame:(id)a0 didFinishLoadWithReason:(short)a1;
- (void)pluginView:(id)a0 receivedResponse:(id)a1;
- (void)pluginView:(id)a0 receivedData:(id)a1;
- (void)pluginView:(id)a0 receivedError:(id)a1;
- (void)pluginViewFinishedLoading:(id)a0;
- (void)webFrame:(id)a0 didFinishLoadWithError:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pluginPackage:(id)a1 URL:(id)a2 baseURL:(id)a3 MIMEType:(id)a4 attributeKeys:(id)a5 attributeValues:(id)a6 loadManually:(BOOL)a7 element:(void *)a8;
- (void)handleMouseMoved:(id)a0;
- (void)handleMouseEntered:(id)a0;
- (void)handleMouseExited:(id)a0;
- (void)updateAndSetWindow;
- (id)pluginLayer;
- (BOOL)getFormValue:(id *)a0;
- (void)stopTimers;
- (void)addWindowObservers;
- (void)removeWindowObservers;
- (void)setAttributeKeys:(id)a0 andValues:(id)a1;
- (void)startTimers;
- (void)windowFocusChanged:(BOOL)a0;
- (void)focusChanged;
- (BOOL)createPlugin;
- (void)loadStream;
- (void)destroyPlugin;
- (void)privateBrowsingModeDidChange;
- (void)sendModifierEventWithKeyCode:(int)a0 character:(char)a1;
- (BOOL)windowHostsLayersInWindowServer;
- (void)createPluginLayer;
- (void)windowFrameDidChange:(id)a0;
- (struct RefPtr<JSC::Bindings::Instance, WTF::RawPtrTraits<JSC::Bindings::Instance>, WTF::DefaultRefDerefTraits<JSC::Bindings::Instance>> { struct Instance *x0; })createPluginBindingsInstance:(void *)a0;

@end
