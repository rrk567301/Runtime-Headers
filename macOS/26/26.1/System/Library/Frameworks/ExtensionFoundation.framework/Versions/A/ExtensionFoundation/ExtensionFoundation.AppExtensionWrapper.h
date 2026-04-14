@interface ExtensionFoundation.AppExtensionWrapper : _EXExtension {
    void /* unknown type, empty encoding */ _acceptSession;
    void /* unknown type, empty encoding */ _accept;
    void /* unknown type, empty encoding */ _handleConnection;
}

- (void).cxx_destruct;
- (BOOL)shouldAcceptConnection:(id)a0;
- (void)willFinishLaunching;
- (void)didFinishLaunching;
- (id)init;

@end
