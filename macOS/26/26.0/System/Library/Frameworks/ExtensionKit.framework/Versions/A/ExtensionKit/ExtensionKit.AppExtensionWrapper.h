@interface ExtensionKit.AppExtensionWrapper : _EXExtension {
    void /* unknown type, empty encoding */ configurationScene;
}

- (id)init;
- (void)didFinishLaunching;
- (BOOL)shouldAcceptConnection:(id)a0;
- (void)willFinishLaunching;
- (void).cxx_destruct;
- (id)makeSceneWithConfiguration:(id)a0;

@end
