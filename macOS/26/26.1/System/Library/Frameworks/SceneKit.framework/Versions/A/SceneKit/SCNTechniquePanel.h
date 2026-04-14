@interface SCNTechniquePanel : NSPanel {
    id _controller;
}

+ (id)techniquePanelForView:(id)a0;

- (BOOL)canBecomeKeyWindow;
- (void)open;
- (void)close;
- (void)setController:(id)a0;
- (id)controller;
- (void).cxx_destruct;
- (BOOL)canBecomeMainWindow;

@end
