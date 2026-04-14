@interface ABRemotePersonView : NSRemoteView <NSRemoteViewDelegate>

@property (weak, nonatomic) id objectToExport;
@property (readonly) BOOL shouldRetainExportedObject;

- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (id)exportedObject;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)exportedInterface;
- (id)serviceName;
- (void)setDelegate:(id)a0;
- (id)serviceViewControllerInterface;
- (BOOL)view:(id)a0 shouldResize:(struct CGSize { double x0; double x1; })a1;
- (id)serviceSubclassName;

@end
