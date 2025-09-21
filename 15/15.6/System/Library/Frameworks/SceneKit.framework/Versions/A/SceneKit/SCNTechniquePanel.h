@interface SCNTechniquePanel : NSPanel {
    id _controller;
}

+ (id)techniquePanelForView:(id)a0;

- (void).cxx_destruct;
- (void)close;
- (void)open;
- (char)canBecomeKeyWindow;
- (char)canBecomeMainWindow;
- (id)controller;
- (void)setController:(id)a0;

@end
