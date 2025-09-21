@interface RemindersUICore.TTRMRemindersListBackgroundClickView : NSView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ firstClickWasTracked;
}

@property (nonatomic, readonly) BOOL acceptsFirstResponder;

- (void)mouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
