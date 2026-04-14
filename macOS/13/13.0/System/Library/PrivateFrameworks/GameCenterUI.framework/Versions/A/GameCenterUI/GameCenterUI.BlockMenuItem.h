@interface GameCenterUI.BlockMenuItem : NSMenuItem {
    void /* unknown type, empty encoding */ block;
}

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 action:(SEL)a1 keyEquivalent:(id)a2;
- (void)performBlock;

@end
