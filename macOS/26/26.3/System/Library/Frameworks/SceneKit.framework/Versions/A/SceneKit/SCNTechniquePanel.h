@interface SCNTechniquePanel : NSPanel {
    id _controller;
}

+ (id)techniquePanelForView:(id)a0;

- (BOOL)canBecomeKeyWindow;
- (void)setController:(id)a0;
- (id)controller;
- (void)close;
- (void)open;
- (void).cxx_destruct;
- (BOOL)canBecomeMainWindow;

@end
