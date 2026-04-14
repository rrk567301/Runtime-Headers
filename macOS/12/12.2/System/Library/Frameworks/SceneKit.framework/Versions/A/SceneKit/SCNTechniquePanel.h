@interface SCNTechniquePanel : NSPanel {
    id _controller;
}

+ (id)techniquePanelForView:(id)a0;

- (void)open;
- (void)close;
- (void).cxx_destruct;
- (id)controller;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)setController:(id)a0;

@end
