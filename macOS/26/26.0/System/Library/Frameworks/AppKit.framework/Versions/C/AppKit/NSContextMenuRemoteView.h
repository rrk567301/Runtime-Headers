@interface NSContextMenuRemoteView : NSMenuRemoteView {
    void /* unknown type, empty encoding */ implementation;
    void /* unknown type, empty encoding */ serviceContextMenuProxy;
    void /* unknown type, empty encoding */ hostMenu;
}

+ (id)remoteServiceViewControllerClassName;

- (id)exportedInterface;
- (id)exportedObject;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didAdvanceToRunPhase;
- (id)initWithHostWindow:(id)a0;
- (id)serviceViewControllerInterface;

@end
