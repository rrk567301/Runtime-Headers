@interface VFXUIHandleButton : NSButton {
    id _instance;
    char _removeButton;
    char _allowsCreation;
}

@property char removeButton;
@property char allowsCreation;
@property (retain) id instance;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
