@interface ExtensionFoundation.AppExtensionWrapper : _EXExtension {
    void /* unknown type, empty encoding */ _acceptSession;
    void /* unknown type, empty encoding */ _accept;
    void /* unknown type, empty encoding */ _handleConnection;
}

- (id)init;
- (void)didFinishLaunching;
- (BOOL)shouldAcceptConnection:(id)a0;
- (void)willFinishLaunching;
- (void).cxx_destruct;

@end
