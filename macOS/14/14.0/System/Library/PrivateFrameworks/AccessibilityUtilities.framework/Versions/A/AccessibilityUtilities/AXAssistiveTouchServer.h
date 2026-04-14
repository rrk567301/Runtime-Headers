@interface AXAssistiveTouchServer : AXServer

+ (id)server;

- (id)_serviceName;
- (void)closeMenu;
- (BOOL)home;
- (BOOL)_connectIfNecessary;
- (void)menuAction:(id)a0;
- (id)menuItems;
- (BOOL)isMenuOpen;
- (BOOL)setPointerPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)virtualPointer:(BOOL)a0;
- (void)_didConnectToClient;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (struct CGPoint { double x0; double x1; })getNubbitPosition;
- (struct CGPoint { double x0; double x1; })getPointerPosition;
- (void)openMenu;
- (void)setNubbitPosition:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)tapMenuItem:(id)a0 down:(BOOL)a1;

@end
