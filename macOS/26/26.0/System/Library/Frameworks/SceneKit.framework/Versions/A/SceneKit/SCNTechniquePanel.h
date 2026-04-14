@interface SCNTechniquePanel : NSPanel {
    id _controller;
}

+ (id)techniquePanelForView:(id)a0;

- (id)controller;
- (void)setController:(id)a0;
- (void)open;
- (BOOL)canBecomeKeyWindow;
- (void)close;
- (void).cxx_destruct;
- (BOOL)canBecomeMainWindow;

@end
