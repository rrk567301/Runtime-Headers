@interface MUIMenuItem : NSMenuItem

@property (copy, nonatomic) id /* block */ actionHandler;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)menuAction:(id)a0;
- (id)initWithTitle:(id)a0 image:(id)a1 keyEquivalent:(id)a2 handler:(id /* block */)a3;

@end
