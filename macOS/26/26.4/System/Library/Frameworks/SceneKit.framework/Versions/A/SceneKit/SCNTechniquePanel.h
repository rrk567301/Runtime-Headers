@interface SCNTechniquePanel : NSPanel {
    id _controller;
}

+ (id)techniquePanelForView:(id)a0;

- (void)open;
- (void)setController:(id)a0;
- (id)controller;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyWindow;
- (void)close;
- (BOOL)canBecomeMainWindow;

@end
